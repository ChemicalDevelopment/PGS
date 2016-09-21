//Dependencies
var fs = require('fs');
var firebase = require('firebase');
var ArgumentParser = require('argparse').ArgumentParser;
var child_process = require('child_process');

const spawn = child_process.spawn;

var Queue = require('firebase-queue');

//Create Parser
var parser = new ArgumentParser({
  version: '0.0.0',
  addHelp: true,
  description: 'PGS - Prime Gen Search'
});
//Default values
var defaults = {
    "prefs": 'my.prefs',
    "online": true,
};

//Add our Args
parser.addArgument(
  [ '-p', '--prefs' ],
  {
    help: 'Prefs file. Default: ' + defaults.prefs,
    defaultValue: defaults.prefs
  }
);
parser.addArgument(
  [ '-offline', '--offline' ],
  {
    help: 'Sets to offline mode',
    action: 'storeTrue'
  }
);
parser.addArgument(
  [ '-download', '--download' ],
  {
    help: 'Downloads the files into ./workloads/',
    action: 'storeTrue'
  }
);
parser.addArgument(
  [ '-remove', '--removeworkload' ],
  {
    help: 'Whether or not to delete.',
    action: 'storeTrue'
  }
);

//We store our parsed args
var args = parser.parseArgs();
//Store prefs file
var usrPrefs = JSON.parse(fs.readFileSync(args.prefs, 'utf8'));
var usr;
var db;
var queue = [];
var queueJobs = [];

fs.access(usrPrefs.PRIME_FILE, fs.F_OK, function(err) {
    if (!(!err)) {

        console.log("Error no prime file! Generating one now.");
        const pp = spawn("./lib.o", [usrPrefs.PRIME_FILE]);

        pp.stdout.on('data', (data) => {
            console.log(data.toString());
        });

        pp.on('close', (code) => {
            console.log(`PGSlib Has Finished`);
                if (!Boolean(args.offline)) {
                    runOnline();
                } else {
                    runOffline();
                }
            //process.exit(code)
        });
    } else {
        if (!Boolean(args.offline)) {
            runOnline();
        } else {
            runOffline();
        }
    }
});

//Runs and updates the database
function runOnline() {
    //Updated user data
    //Firebase configuration
    var config = {
        //Public key for my project
        apiKey: "AIzaSyC6R2fqZN9eRFzr88nebDqvA_VwNKtzJQY",
        authDomain: "pgsdb-c4faf.firebaseapp.com",
        databaseURL: "https://pgsdb-c4faf.firebaseio.com",
        storageBucket: "pgsdb-c4faf.appspot.com",
    };
    //Whole application
    var app = firebase.initializeApp(config);
    //update user prefs.
    firebase.auth().onAuthStateChanged(function (user) {
        usr = user;
    });
    db = firebase.database();
    signin(usrPrefs.email, usrPrefs.password, function() {
        var ref = db.ref('workloads');
        var nth = 0;
        for (var i = 0; i < usrPrefs.threads; ++i) {
            queue.push(new Queue(ref, function(data, progress, resolve, reject) {
                // Read and process task data
                console.log("Now Processing: ");
                console.dir(data);
                if (args.download) {
                    nth += 1;
                    fs.writeFileSync("./workloads/" + getWorkloadKey(data) + ".workload", JSON.stringify(data), 'utf8');
                    if (nth >= usrPrefs.threads) {
                        console.log("Done saving workloads to ./workloads/");
                        shutdownQueues();
                        process.exit(0);
                    }
                    resolve();
                } else {
                    var data_t = data;
                    data_t.timestamp = new Date().getTime();
                    var wref = db.ref('/user_data/' + usr.uid + "/current_workloads/").push(data_t);

                    var oncomplete = function() {
                        var timeElapsed = new Date().getTime() - data_t.timestamp;
                        data_t["timespent"] = timeElapsed;
                        db.ref('/user_data/' + usr.uid + "/workloads/").push(data_t);
                        db.ref("/user_data/" + usr.uid + "/timespent").once('value').then(function(snapshot) {
                            var data_v = snapshot.val();
                            db.ref('/user_data/' + usr.uid + "/timespent").set(data_v + timeElapsed);
                            wref.set({});
                            resolve(data_t);
                        });
                    };

                    progress(0);

                    doWorkload(data, false, oncomplete, progress);   
                }             
            }));
        }
    });
}

//Runs without looking for online jobs
function runOffline() {
    var work = getWorkloads();
    if (work.length == 0) { 
        console.log("No workloads found");
        console.log("   Try running without --offline");
        return;
    }
    console.log("Found files: ");
    console.dir(work);
    var eventEmitter = require('events').EventEmitter;
    var workloads_json = [];
    for (var s in work) {
        workloads_json.push(JSON.parse(fs.readFileSync("./workloads/" + work[s])));
    }
    var threads = usrPrefs.threads;
    console.log("Found workloads:");
    console.dir(workloads_json);
    var i = 0;
    var currentThreads;
    var ee = new eventEmitter;
    var next = function() {
        currentThreads += 1;
        doWorkload(workloads_json[i], true, function () { }, function (x) { });
    };
    ee.on('next', next);
    var complete = function () {
        ++i;
        currentThreads -= 1;
        if (i >= workloads_json.length) {
            console.log("Done with all")
            //return;
        }
        ee.emit('next');
    }
    for (var j = 0; j < threads; ++j) {
        ee.emit('next');
    }
}

//Runs workload from filename
function doWorkload(workload, offline, oncomplete, progFunc) {
    var execPath = usrPrefs.RUN_FILE;
    //var workloadPath = "./workloads/" + workload;
    const proc = spawn(execPath, [usrPrefs.PRIME_FILE, workload.ranges[0], workload.ranges[1], workload.ranges[2],
                                  workload.offsets[0], workload.offsets[1], workload.offsets[2]]);

    proc.stdout.on('data', function (data) {
        var output = data.toString().split("\n");
        var jsons = [];
        for (var i = 0;i < output.length; ++i) {
            if (output[i].startsWith("PGSO:")) {
                console.dir(jsonFunc(output[i]));
                jsons.push(jsonFunc(output[i]));
                fs.appendFile('./output/output.txt', output[i] + "\n" + getFuncKey(jsonFunc(output[i])) + "\n", 'utf8');
            }
            if (output[i].startsWith("PGSP:")) {
                console.dir(output[i]);
                progFunc(parseInt(output[i].replace("PGSP:", "")));
                fs.appendFile('./output/output.txt', output[i] + "\n");
            }
        }
        if (!offline) {
            if (jsons.length > 0) {
                console.log("Putting in firebase");
                putFunctionInFirebase(jsons);
            }     
        }
    });

    proc.stderr.on('data', function (data) {
        console.log(data.toString());
    });

    proc.on('close', function(code) {
        console.log(`PGS Has Finished`);
        fs.appendFile('./output/output.txt', "\nFinished workload: " + JSON.stringify(workload) + "\n\n");
        if (offline && args.removeworkload) {
            console.log("Deleting workload");
            fs.unlink(workloadPath);
        }
        oncomplete();
    });
}


//Gets a list of workloads
function getWorkloads() {
    var files = fs.readdirSync("./workloads/");
    var workloads = [];
    for (var i = 0; i < files.length; ++i) {
        if (files[i].endsWith('.workload')) {
            workloads.push(files[i]);
        }
    }
    return workloads;
}

//Returns function in json format
function jsonFunc(func) {
    func = func.replace("PGSO:", "");
    var parts = func.split(";");
    var part1 = parts[0].split(",");
    var cons = parseInt(part1[0]);
    var dist = parseInt(part1[1]);
    var equa = parts[1];
    equa = equa.replace("[", "");
    equa = equa.replace("]", "");
    var coef_str = equa.split(',');
    var coef_num = [];
    for (var i = 0; i < coef_str.length; ++i) {
        coef_num.push(parseInt(coef_str[i]));
    }
    var jsonFunc = {
        consecutive: cons,
        distinct: dist,
        equation: coef_num
    };
    return jsonFunc;
}

//Gets function key in firebase
function getFuncKey(func) {
    var nm = "";
    for (var k = 0; k < func.equation.length; ++k) {
        nm += "(" + func.equation[k] + ")";
        if (k != func.equation.length - 1) {
            nm += "-";
        }
    }
    return nm;
}

//Returns workload key
function getWorkloadKey(work) {
    var nm = "";
    var k;
    for (k = 0; k < work.offsets.length ; ++k) {
        nm += "(" + work.offsets[k] + ")";
        if (k != work.offsets.length - 1) {
            nm += "-";
        }
    }
    nm += ";";
    for (k = 0; k < work.ranges.length; ++k) {
        nm += "(" + work.ranges[k] + ")";
        if (k != work.ranges.length - 1) {
            nm += "-";
        }
    }
    return nm;
}

//Puts function in firebase
function putFunctionInFirebase(func) {
    var dbr = db.ref("/user_data/" + usr.uid + "/functions/");
    var i = 0;
    console.dir(func);
    for (i = 0; i < func.length; ++i) {
        dbr.child(getFuncKey(func[i])).set(func[i]);
    }
}

//Attempts to sign in
function signin(email, password, callback) {
    firebase.auth().signInWithEmailAndPassword(email, password).catch(function (error) {
        // Handle Errors here.
        var errorCode = error.code;
        var errorMessage = error.message;
        console.log(errorMessage);
    });
    setTimeout(function () { callback() }, 1000);
}

//Shuts down all queues
function shutdownQueues() {
    var j = 0;
    for (var i = 0; i < queue.length; ++i) {
        //queue[i].shutdown().then(function() {   
            console.log('Shutdown thread ' + j++);
            if (j == queue.length) {
               // console.dir(queue[i]);
                process.exit();
            }
        //});
    }
}

process.on('SIGINT', function() {
    console.log('Starting queue shutdown');
    shutdownQueues();
});
