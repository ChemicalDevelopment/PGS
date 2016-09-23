//Dependencies
var fs = require('fs');
var fileExists = require('file-exists');
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
  [ '-submit', '--submit' ],
  {
    help: 'Submits ./output/finds.txt to the server',
    action: 'storeTrue'
  }
);
parser.addArgument(
  [ '-download', '--download' ],
  {
    help: 'Downloads the files into ./workloads/',
    defaultValue: -1
  }
);
parser.addArgument(
  [ '-remove', '--remove' ],
  {
    help: 'Whether or not to delete workloads onces they have been ran',
    action: 'storeTrue'
  }
);

//We store our parsed args
var args = parser.parseArgs();
var startMill = new Date().getTime();

//Store prefs file
var usrPrefs = JSON.parse(fs.readFileSync(args.prefs, 'utf8'));
var usr;
var db;
var isShutdown = false;
var queue = {};
var rejectFuncs = [];

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
    fs.appendFileSync('./output/output.txt', "\nRunning online at " + new Date().getTime() + "ms\n", 'utf8');
    console.log("Running online, using " + usrPrefs.threads + " threads.");
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
        console.log("Auth changed");
        usr = user;
    });
    //Create  a reference
    db = firebase.database();
    //Signin with callback
    signin(usrPrefs.email, usrPrefs.password, function(e) {
        if (e) {
            console.log("error");
            console.dir(e);
        }
        if (args.submit) {
            var findsTxt = "./output/finds.txt";
            console.log("Submitting finds: " + findsTxt);
            if (fileExists(findsTxt)) {
                var output = fs.readFileSync(findsTxt).toString().split("\n");
                setTimeout(function() {
                    for (var i = 0; i < output.length; ++i) {
                        if (output[i] && jsonFunc(output[i]) && jsonFunc(output[i]) != {}) {
                            putFunctionInFirebase([jsonFunc(output[i])]);
                        }
                    }
                }, 1000);
            } else {
                console.log(findsTxt + " does not exist!");
                process.exit(1);
            }
        } else {
            //Get our workloads ref. Used with queue
            var ref = db.ref('workloads');
            //Used for downloading workloads
            var nth = 0;
            //Set the number of workers
            var options = {
                'numWorkers': usrPrefs.threads,
            };
            //Init the global var
            queue = new Queue(ref, options, function(data, progress, resolve, reject) {
                // Read and process task data
                console.log("Now Processing: ");
                console.dir(data);
                //If we are supposed to download
                if (args.download > 0) {
                    //Add to how many we've done
                    nth += 1;
                    //Write JSON to file 
                    fs.writeFileSync("./workloads/" + getWorkloadKey(data) + ".workload", JSON.stringify(data), 'utf8');
                    //Resolve, mark that we will do it.
                    resolve();
                    //Set the progress to -1
                    progress(-1)
                    if (nth >= args.download) {
                        //If we have saved the amount.
                        console.log("Done saving workloads to ./workloads/");
                        shutdown();
                    }
                //If we are shutting down, or it is over max time, we mark it so that the backend can process it
                } else if (isShutdown || (usrPrefs.time && usrPrefs.time >= 0 && new Date().getTime() - startMill >= usrPrefs.time * 60 * 1000)) {
                    console.log("Past the max time specified. Not getting another workload");
                    shutdownWorker();
                    if (!isShutdown && getWorkerCount() == 0) {
                        shutdown();
                    }
                } else {
                console.log(getWorkerCount() + " queue workers running.");
                //Create a data afterwards
                var data_t = data;
                //Set the timestamp
                data_t.timestamp = new Date().getTime();
                //Add to active workloads
                var wref = db.ref('/user_data/' + usr.uid + "/current_workloads/").push(data_t);
                //Add the reject to an array so it can be called by shutdown
                rejectFuncs.push(reject);

                //Our callback
                var oncomplete = function() {
                    //Remove it from reject funcs
                    rejectFuncs.splice(rejectFuncs.indexOf(reject), 1);
                    //Create a time elapsed
                    var timeElapsed = new Date().getTime() - data_t.timestamp;
                    //Appedn this to output
                    fs.appendFileSync('./output/output.txt', "\nWorkload done in " + timeElapsed + "ms\n", 'utf8');
                    //Set the time elapsed
                    data_t["timespent"] = timeElapsed;
                    //Push ref - Left commented now.
                    //db.ref('/user_data/' + usr.uid + "/workloads/").push(data_t);
                    //Get value
                    db.ref("/user_data/" + usr.uid + "/timespent").once('value').then(function(snapshot) {
                        var data_v = snapshot.val();
                        //Get time spent
                        db.ref('/user_data/' + usr.uid + "/timespent").set(data_v + timeElapsed);
                            //Get blocks
                            db.ref("/user_data/" + usr.uid + "/blocksdone").once('value').then(function(i_snapshot) {
                                var i_data_v = i_snapshot.val();
                                //Update both
                                db.ref('/user_data/' + usr.uid + "/blocksdone").set(i_data_v + 1);
                                db.ref('/user_data/' + usr.uid + "/timespent").set(data_v + timeElapsed);
                                //Remove the current workloads
                                wref.remove();
                                //Resolve
                                resolve(data_t);
                                //If we have passed the max time
                                if (usrPrefs.time && usrPrefs.time >= 0 && new Date().getTime() - startMill >= usrPrefs.time * 60 * 1000) {
                                    console.log("Past the max time specified. Quitting");
                                    shutdown();
                                }
                        });
                    });
                };
                //Start at 0
                progress(0);
                //Invoke the process
                doWorkload(data, "", oncomplete, progress); 
                }  
            });
        }
    });
}

//Runs without looking for online jobs
function runOffline() {
    fs.appendFileSync('./output/output.txt', "\nRunning offline at " + new Date().getTime() + "ms\n", 'utf8');
    var work = getWorkloads();
    var threads = usrPrefs.threads;
    console.log("Running offline, using " + threads + " threads.");
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
    console.log("Found workloads:");
    console.dir(workloads_json);
    var i = 0;
    var startMill = new Date().getTime();
    var currentThreads = 0;
    var ee = new eventEmitter;
    var complete = function () {
        currentThreads -= 1;
        if (currentThreads == 0 && i >= workloads_json.length) {
            console.log("Done with all workloads. Shutting down.");
            shutdown();
        }
        else if (new Date().getTime() - startMill >= usrPrefs.time * 60 * 1000) {
            console.log("Out of time. Not starting another load.");
        } else {
            ee.emit('next');
        }
    }
    var next = function() {
        if (i < workloads_json.length) {
            doWorkload(workloads_json[i], work[i], complete, function (x) {  });
            ++i;
            currentThreads += 1;
        } else {
            console.log("This thread finished. " + currentThreads + " threads are still running.");
        }
    };
    ee.on('next', next);

    for (var j = 0; j < threads; ++j) {
        ee.emit('next');
    }
}

//Runs workload from filename
function doWorkload(workload, path, oncomplete, progFunc) {
    var execPath = usrPrefs.RUN_FILE;
    //We spawn a process
    const proc = spawn(execPath, [usrPrefs.PRIME_FILE, workload.ranges[0], workload.ranges[1], workload.ranges[2],
                                  workload.offsets[0], workload.offsets[1], workload.offsets[2]])
    
    //The process should print out info.
    proc.stdout.on('data', function (data) {
        submitOutput(data, path != "", progFunc);
    });

    //On error, we print and log
    proc.stderr.on('data', function (data) {
        console.log(data.toString());
        fs.appendFileSync('./output/error.txt', data.toString() + "\n", 'utf8');
    });
    //On close, we delete the workload if the flag is set, and then we call our callback
    proc.on('close', function(code) {
        console.log(`PGS Has Finished`);
        fs.appendFileSync('./output/output.txt', "\nFinished workload: " + JSON.stringify(workload) + "\n");
        if (path != "" && args.remove) {
            fs.appendFileSync('./output/output.txt', "Deleting...\n");
            console.log("Deleting workload");
            fs.unlinkSync("./workloads/" + path);
        }
        oncomplete();
    });
}

//Handles string output normally from stdout, but could be from file
function submitOutput(data, offline, progFunc) {
    var output = data.toString().split("\n");
    var jsons = [];
    //Strips down things that start with keyworkds
    for (var i = 0;i < output.length; ++i) {
        if (output[i].startsWith("PGSO:")) {
            console.dir(jsonFunc(output[i]));
            jsons.push(jsonFunc(output[i]));
            //Log to finds.txt
            fs.appendFileSync('./output/output.txt', output[i] + "\n" + getFuncKey(jsonFunc(output[i])) + "\n", 'utf8');
            fs.appendFileSync('./output/finds.txt', output[i] + "\n", 'utf8');
        }
        if (output[i].startsWith("PGSP:")) {
            console.dir(output[i]);
            progFunc(parseInt(output[i].replace("PGSP:", "")));
            fs.appendFileSync('./output/output.txt', output[i] + "\n");
        }
    }
    if (!offline) {
        if (jsons.length > 0) {
            console.log("Putting in firebase: ");
            putFunctionInFirebase(jsons);
        }     
    }
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
    //      console.dir(func);
    for (i = 0; i < func.length; ++i) {
        console.log("Putting function online: ");
        console.dir(func[i]);
        console.log("\n");
        dbr.child(getFuncKey(func[i])).set(func[i]);
    }
}

//Attempts to sign in
function signin(email, password, callback) {
    firebase.auth().signInWithEmailAndPassword(email, password).catch(function (error) {
        // Handle Errors here.
        var errorCode = error.code;
        var errorMessage = error.message;
        //Log the message
        console.log(errorMessage);
    });
    callback();
}

//Shutsdown
function shutdown() {
    isShutdown = true;
    console.log("Shutting down");
    fs.appendFileSync('./output/output.txt', "\nShutting down.", 'utf8');
    if (queue && queue.shutdown) {
        console.log('Starting queue shutdown');
        for (f in rejectFuncs) {
            rejectFuncs[f]("Shut down");
        }
        queue.shutdown().then(function() {
            console.log('Finished queue shutdown');
            process.exit(0);
        });
    } else {
        console.log("Exiting");
        process.exit(0);
    }
}

process.on('SIGINT', function() {
    console.log("SIGINT sent");
    fs.appendFileSync('./output/output.txt', "\nSIGINT sent\n", 'utf8');
    shutdown();
});