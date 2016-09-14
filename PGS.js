//Dependencies
var fs = require('fs');
var firebase = require('firebase');
var ArgumentParser = require('argparse').ArgumentParser;
const spawn = require('child_process').spawn;

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
  [ '-remove', '--removeworkload' ],
  {
    help: 'Whether or not to delete.',
    action: 'storeTrue'
  }
);

//We store our parsed args
var args = parser.parseArgs();
//Store prefs file
var usrPrefs = JSON.parse(fs.readFileSync("" + args.prefs, 'utf8'));
var usr;
var db;

fs.access(usrPrefs.PRIME_FILE, fs.F_OK, function(err) {
    if (!(!err)) {

        console.log("Error no prime file! Generating one now.");
        const pp = spawn("./lib.o", ["2000000000", usrPrefs.PRIME_FILE]);

        pp.stdout.on('data', (data) => {
            console.log(data.toString());

        });

        proc.on('close', (code) => {
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
        var fn = function(w) {
            console.dir(w);
            doWorkload(w, false);
        }
        var work = getWorkloads();
        var workload;
        if (work.length == 0) {
            console.log("No workloads found");
            console.log("   Getting some now");
            getWorkloadOnline(fn);
        } else {
            workload = JSON.parse(fs.readFileSync("./workloads/" + work[0], 'utf8'));
            console.log("Found workload:");
            fn(workload);
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
    console.log("Found workloads:");
    console.dir(work);
    doWorkload(work[0], true);
}

function getWorkloadOnline(fn) {
    var type = usrPrefs.workload_preference.toLowerCase();
    console.log("Finding workload from server using method: "  + type);
    var jobs;
    var workload;
    db.ref("/workloads/").once('value').then(function(snapshot) {
        jobs = snapshot.val();
        console.log("Got response");
        switch (type) {
            default:
                var i;
                var max = 0;
                for (i in jobs) {
                    workload = jobs[i];
                    ++max;
                }
                var rnd = Math.floor(Math.random() * (max + 1));
                var j;
                for (i in jobs) {
                    if (j == rnd) {
                        workload = jobs[i];
                    }
                    ++j;
                }
        }
        fn(workload);
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

//Runs workload from filename
function doWorkload(workload, offline) {
    var execPath = usrPrefs.RUN_FILE;
    //var workloadPath = "./workloads/" + workload;
    const proc = spawn(execPath, [usrPrefs.PRIME_FILE, workload.ranges[0], workload.ranges[1], workload.ranges[2],
                                  workload.offsets[0], workload.offsets[1], workload.offsets[2]]);

    proc.stdout.on('data', (data) => {
        var output = data.toString().split("\n");
        var jsons = [];
        for (var i = 0;i < output.length; ++i) {
            if (output[i].startsWith("PGSO:")) {
                console.dir(jsonFunc(output[i]));
                jsons.push(jsonFunc(output[i]));
                fs.appendFile('./output/output.txt', output[i] + "\n");
            }
        }
        if (!offline) {
            if (jsons.length > 0) {
                console.dir("reporting to server");
                putFunctionInFirebase(jsons);
            }     
        }
    });


    proc.on('close', (code) => {
        console.log(`PGS Has Finished`);
        if (offline && args.removeworkload) {
            console.log("Deleting workload");
            fs.unlink(workloadPath);
        }
        //process.exit(code)
    });
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

//Puts function in firebase
function putFunctionInFirebase(func) {
    var dbr = db.ref("/user_data/" + usr.uid + "/functions");
    var isd = true;
    var i = 0;
    var nm;
    for (i = 0; i < func.length; ++i) {
        nm = "";
        for (var k = 0; k < func[i].equation.length; ++k) {
            nm += "(" + func[i].equation[k] + ")";
            if (k != func[i].equation.length - 1) {
                nm += "-";
            }
        }
        var cre = dbr.child(nm);
        cre.set(func[i]);
    }
}
