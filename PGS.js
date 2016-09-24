//Parse our arguments
var ArgumentParser = require('argparse').ArgumentParser;

//File depends
var fs = require('fs');


//Firebase related depends
var firebase = require('firebase');
var Queue = require('firebase-queue');

//Event emitter - like local queue
var EventEmitter = require('events').EventEmitter;


//Process related depends
const spawn = require('child_process').spawn;

/*

Constants

*/
const PRIME_FILE = "./primes.dat";


//Create Parser
var parser = new ArgumentParser({
  version: 'v2.0.0',
  addHelp: true,
  description: 'PGS - Prime Gen Search'
});

//Add our Args
parser.addArgument(
  [ '-prefs', '--prefs' ],
  {
    help: 'Prefs file. Default: my.prefs',
    defaultValue: 'my.prefs'
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
var prefs = JSON.parse(fs.readFileSync(args.prefs, 'utf8'));

//Firebase objects
var usr;
var db;
var queue;

//Progress functions
var reject_funcs;

console.dir(args);

//Callback to run.
var callback = function () {
    if (args.download > 0) {
        log("Downloaded all. Exiting");
        process.exit(0);
    } else if (!args.offline) {
        initFirebase(runOnline);
    } else {
        runOffline();
    }
}

var start_run = function() {
    try {
        fs.access(PRIME_FILE).then(function() {
            callback();
        });
    } catch (e) {
        //Run error
        error("Error no prime file! Generating one now.");
        error(e);
        //Spawn
        const pp = spawn("./lib.o", [PRIME_FILE]);
        //When it closes, handle it
        pp.on('close', function (code) {
            log("lib Has finished generating primes.dat");
            callback();
        });
    }
}

error("Started running at " + new Date().toString());

if (args.download > 0) {
    initFirebase(function () {
        downloadWorkloads(args.download);
    });
} else {
    start_run();
}


//Main run function
function runOffline() {
    log("Running offline using " + prefs.threads + " threads");
    var work_names = getLocalWorkloads();
    var workloads = [];
    for (f in work_names) {
        var workload_str = fs.readFileSync("./workloads/" + work_names[f]);
        workloads.push(JSON.parse(workload_str));
    }
    var ee = new EventEmitter;
    var currentThreads = 0;
    var i = 0;
    var oncomplete = function () {
        currentThreads -= 1;
        if (i >= workloads.length) {
            log("No more workloads");
            if (currentThreads == 0) {
                log("Last thread has finished");
                shutdown();
            }
        } else {
            ee.emit('next');
        }
    }
    var next = function() {
        if (i < workloads.length) {
            log("Now running workload: " + JSON.stringify(workloads[i]));
            doWorkload(workloads[i], true, oncomplete, function() {});
            ++i;
            currentThreads += 1;
        } else {
            log("Thread finished. There are " + currentThreads + " threads are still running.");
        }
    };
    ee.on('next', next);
    for (var j = 0; j < prefs.threads; ++j) {
        ee.emit('next');
    }
}

function runOnline() {
    var ref = db.ref("/workloads/");
    var options = {
        numWorkers: prefs.threads
    };
    reject_funcs = [];
    queue = new Queue(ref, options, function(data, progress, resolve, reject) {
        reject_funcs.push(reject);
        var oncomplete = function () {
            log("Done with workload " + data);
            reject_funcs.splice(reject_funcs.indexOf(reject), 1);
            resolve();
        }
        doWorkload(data, false, oncomplete, progress);
    });
    //log(queue.numWorkers());
}

//Runs json workload
function doWorkload(workload, offline, oncomplete, progFunc) {
    log("Staring workload: " + JSON.stringify(workload));
    //We spawn a process
    const proc = spawn("./run.sh", [PRIME_FILE, workload.ranges[0], workload.ranges[1], workload.ranges[2],
                                  workload.offsets[0], workload.offsets[1], workload.offsets[2]])

    //The process should print out info.
    proc.stdout.on('data', function (data) {
        handleOutput(data, offline, progFunc);
    });

    //On error, we print and log
    proc.stderr.on('data', function (data) {
        error(data.toString());
    });

    //On close, we delete the workload if the flag is set, and then we call our callback
    proc.on('close', function(code) {
        log('Finished workload: ' + JSON.stringify(workload));
        oncomplete();
    });
}
//Handles string output normally from stdout, but could be from file
function handleOutput(data, offline, progFunc) {
    var output = data.toString().split("\n");
    //Strips down things that start with keyworkds
    for (var i = 0; i < output.length; ++i) {
        if (output[i].startsWith("PGSO:")) {
            var jsonFunc = getFunctionFromString(output[i]);
            log_find(output[i]);
            if (!offline) {
                submitFunction(getFunctionFromString(output[i]));
            }
        } else if (output[i].startsWith("PGSP:")) {
            var prog = output[i].replace("PGSP:", "");
            log_progress(prog);
            progFunc(prog);
        }
    }
}
//Get a string ID used in firebase
function getWorkloadIdentifier(work) {
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
//Downloads and stores workloads
function downloadWorkloads(n) {
    log("Downloading " + n  + " workloads");
    var workloadsDownloaded = 0;
    var ref = db.ref("/workloads/");
    queue = new Queue(ref, function(data, progress, resolve, reject) {
        workloadsDownloaded += 1;
        log("Downloaded " + getWorkloadIdentifier(data));
        fs.writeFileSync("./workloads/" + getWorkloadIdentifier(data) + ".workload", JSON.stringify(data), 'utf8');
        if (workloadsDownloaded >= n) {
            log("Downloaded all workloads");
            shutdown();
        } else {
            resolve();
        }
    });
}
//Gets a list of workloads
function getLocalWorkloads() {
    var files = fs.readdirSync("./workloads/");
    var workloads = [];
    for (var i = 0; i < files.length; ++i) {
        if (files[i].endsWith('.workload')) {
            workloads.push(files[i]);
        }
    }
    return workloads;
}
//Deletes a workload
function deleteLocalWorkload(path) {
    log("Deleting workload");
    fs.unlinkSync("./workloads/" + path);
}
//Get an string ID
function getFunctionIdentifier(func) {
    var nm = "";
    for (var k = 0; k < func.equation.length; ++k) {
        nm += "(" + func.equation[k] + ")";
        if (k != func.equation.length - 1) {
            nm += "-";
        }
    }
    return nm;
}
//Returns function in json format
function getFunctionFromString(text) {
    text = text.replace("PGSO:", "");
    var parts = text.split(";");
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
    return {
        consecutive: cons,
        distinct: dist,
        equation: coef_num
    };
}
//Logs function to firebase
function submitFunction(func) {
    var dbr = db.ref("/user_data/" + usr.uid + "/functions/");
    for (var i = 0; i < func.length; ++i) {
        log("Adding function to firebase: " + JSON.stringify(func[i]));
        dbr.child(getFunctionIdentifier(func[i])).set(func[i]);
    }
}
function initFirebase(callback) {
    var config = {
        //Public key for my project
        apiKey: "AIzaSyC6R2fqZN9eRFzr88nebDqvA_VwNKtzJQY",
        authDomain: "pgsdb-c4faf.firebaseapp.com",
        databaseURL: "https://pgsdb-c4faf.firebaseio.com",
        storageBucket: "pgsdb-c4faf.appspot.com",
    };
    var app = firebase.initializeApp(config);
    firebase.auth().onAuthStateChanged(function (user) {
        log("Auth changed");
        usr = user;
    });
    db = firebase.database();
    signin(prefs.email, prefs.password, callback);
}
//Attempts to sign in, then runs callback
function signin(email, password, callback) {
    firebase.auth().signInWithEmailAndPassword(email, password).then(function (data) {
        usr = data;
        callback();
    });
}
//Logs info
function log(txt) {
    console.log(txt);
    fs.appendFileSync('./output/output.txt', txt + "\n", 'utf8');
}
//Logs error info
function error(txt) {
    log("error: "+ txt);
    fs.appendFileSync('./output/error.txt', "\n" + txt + "\n", 'utf8');
}
//Logs a found function
function log_find(txt) {
    log("found: "+ txt);
    fs.appendFileSync('./output/finds.txt', txt + "\n", 'utf8');
}
//Logs progress
function log_progress(txt) {
    log("Progress: " + txt + "%");
}

var isShutdown = false;

function shutdown() {
    log("Shutting down");
    if (isShutdown) {
        process.exit(0);
    }
    isShutdown = true;
    var final = function () {
        error("Stopped running at " + new Date().toString());
        process.exit(0);
    }
    if (queue) {
        queue.shutdown().then(function () {
            for (var f in reject_funcs) {
                reject_funcs[f]("Shut down");
            }
            final();
        });
    } else {
        final();
    }
}

//Handle sig int
process.on('SIGINT', function() {
    error("SIGINT sent");
    shutdown();
});

//Keep alive
setInterval(function(){
    log("Ooh ooh ooh ooh stayin` alive, stayin` alive");
}, 4 * 60 * 1000);