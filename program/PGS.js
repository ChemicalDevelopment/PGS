//Our database
var firebase = require('firebase');

//File reading
var fs = require('fs');

//Parsing arguments
var ArgumentParser = require('argparse').ArgumentParser;
//Spawning processes
const spawn = require('child_process').spawn;

//Create Parser
var parser = new ArgumentParser({
  version: '0.0.0',
  addHelp: true,
  description: 'PGS - Prime Gen Search'
});

//Default values for args, example.$end
var defaults = {
    "credentials": 'example.credentials',
    "prefs": 'example.prefs',
    "online": true,
};

//Add our Args
parser.addArgument(
  [ '-c', '--credentials' ],
  {
    help: 'Credentials file. Default: ' + defaults.credentials,
    defaultValue: defaults.credentials
  }
);
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
    help: 'Online mode. Default: ' + defaults.online,
    action: 'storeTrue'
  }
);

//We store our parsed args
var args = parser.parseArgs();

var usrPrefs = JSON.parse(fs.readFileSync("" + args.prefs, 'utf8'));

if (!Boolean(args.offline)) {
    runOnline();
} else {
    runOffline();
}

//signin(firebase, );
/*
const ls = spawn('ls', ['-lh', '/usr']);

ls.stdout.on('data', (data) => {
  console.log(`stdout: ${data}`);
});

ls.stderr.on('data', (data) => {
  console.log(`stderr: ${data}`);
});

ls.on('close', (code) => {
  console.log(`PGS Has Finished ${code}`);
});*/

var usr;
var db;

//Runs and updates the database
function runOnline() {
    var usrCreds = JSON.parse(fs.readFileSync("" + args.credentials, 'utf8'));
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
    signin(usrCreds.email, usrCreds.password);
    var work = getWorkloads();
    if (work.length == 0) {
        console.log("No workloads found");
        console.log("   Getting some now");
    }
    console.log("Found workloads:");
    console.dir(work);
    doWorkload(work[0], false);
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

//Gets a list of workloads
function getWorkloads() {
    var files = fs.readdirSync(usrPrefs.BASE_DIR + usrPrefs.WORKLOAD_DIR);
    var workloads = [];
    for (var i = 0; i < files.length; ++i) {
        if (files[i].endsWith('.workload')) {
            workloads.push(files[i]);
        }
    }
    return workloads;
}

//Attempts to sign in
function signin(email, password) {
    firebase.auth().signInWithEmailAndPassword(email, password).catch(function (error) {
        // Handle Errors here.
        var errorCode = error.code;
        var errorMessage = error.message;
        console.log(errorMessage);
    });
}


function doWorkload(workload, offline) {
    var execPath = usrPrefs.BASE_DIR + usrPrefs.RUN_FILE;
    var workloadPath = usrPrefs.BASE_DIR + usrPrefs.WORKLOAD_DIR + workload;
    const proc = spawn(execPath, [workloadPath]);

    proc.stdout.on('data', (data) => {
        var output = data.toString().split("\n");
        for (var i = 0;i < output.length; ++i) {
            if (output[i].startsWith("PGSO:")) {
                if (offline) {
                    console.log(output[i]);
                } else {
                    putFunctionInFirebase(output[i]);
                }
            }
        }
    });
    proc.on('close', (code) => {
        console.log(`PGS Has Finished`);
    });
}

function putFunctionInFirebase(func) {
    if (func.toString().startsWith("PGSO:")) {
        func = func.replace("PGSO:", "");
        var parts = func.split(";");
        var part1 = parts[0].split(",");
        var cons = parseInt(part1[0]);
        var dist = parseInt(part1[1]);
        var equa = parts[0];
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
        putFunctionInFirebase(jsonFunc);
    } else {
        db.ref("/user_data/" + usr.uid + "/functions").push(func);
    }
}
