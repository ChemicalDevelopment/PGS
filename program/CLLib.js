// Dependency:
var fs = require("fs");
var path = require("path");
var nooocl = require("nooocl");
var ArgumentParser = require('argparse').ArgumentParser;
var ref = require("ref");

//Current working directory
var cwd = __dirname;
//Bunch of OpenCL stuff
var CLHost = nooocl.CLHost;
var CLContext = nooocl.CLContext;
var CLBuffer = nooocl.CLBuffer;
var CLCommandQueue = nooocl.CLCommandQueue;
var NDRange = nooocl.NDRange;
var CLError = nooocl.CLError;
//What int we are using. Is 32 bits
var int = ref.types.int;

//Constant ranges. Should always be 10
const localRange = 10;

//Parse the commandline args
var parser = new ArgumentParser({
  version: '0.0.0',
  addHelp: true,
  description: 'PGS-Node-CL - Prime Gen Search'
});

//Default values for args, example.workload
var defaults = {
    "workload": 'test.workload'
};

//Add our Args
parser.addArgument(
  [ '-w', '--workload' ],
  {
    help: 'Workload file. Default: ' + defaults.prefs,
    defaultValue: defaults.prefs
  }
);

//Parse them to JSON
var args = parser.parseArgs();

//JSON workload info
var workload = JSON.parse(fs.readFileSync("" + args.workload, 'utf8'));

//Parse range from workload. Most workloads issued from server will be 1000
var range = workload.ranges;

// Initialize OpenCL then we get host, device, context, and a queue
var host = CLHost.createV11();
var defs = host.cl.defs;

//Get 
var platforms = host.getPlatforms();
var device;
//Searches for hardware
function searchForDevice(hardware) {
    platforms.forEach(function (p) {
        var devices = hardware === "gpu" ? p.gpuDevices() : p.cpuDevices();
        if (devices.length) {
            device = devices[0];
        }
        if (device) {
            return false;
        }
    });
}

//tries to find cpu
searchForDevice("cpu");
if (!device) {
    console.warn("No CPU device has been found, searching for a fallback.");
    searchForDevice("default");
}

//Log info, or show Error
if (!device) {
    throw new Error("No capable OpenCL 1.1 device has been found.");
}
else {
    console.log("Running on device: " + device.name + " - " + device.platform.name);
}

//Create OpenCL context and queue
var context = new CLContext(device);
var queue = new CLCommandQueue(context, device);

//Read in synchronously our bin. Stored in little endian
var prime_dat = fs.readFileSync("./primes.dat");
console.log("Read in data");

//Going to clean this up a bit
var i = 0;
var b1, b2, b3, b4;
var primebuf = new Buffer(prime_dat.length);
for (i = 0; i < prime_dat.length / 4; i += 4) {
    b1 = prime_dat[i] >>> 0;  
    b2 = prime_dat[i + 1] << 8 >>> 0;
    b3 = prime_dat[i + 2] << 16 >>> 0;
    b4 = prime_dat[i + 3] << 24 >>> 0;
    primebuf.writeUInt32LE(b1 + b2 + b3 + b4, i);
}

console.log("Created prime buffer with data");

// Create device memory buffers
var primemem = new CLBuffer(context, defs.CL_MEM_READ_ONLY, prime_dat.length);

// Copy memory buffers
// Notice: the is no synchronous operations in NOOOCL,
// so there is no blocking_write parameter there.
// All writes and reads are asynchronous.
queue.enqueueWriteBuffer(primemem, 0, primebuf.length, primebuf);

var kernelSourceCode = fs.readFileSync(path.join(cwd, "kernel.c"), { encoding: "utf8" });
var program = context.createProgram(kernelSourceCode);

console.log("building kernel...");
// Building is always asynchronous
program.build("-cl-fast-relaxed-math").then(
    function () {
        var buildStatus = program.getBuildStatus(device);
        var buildLog = program.getBuildLog(device);
        console.log(buildLog);
        if (buildStatus < 0) {
            throw new CLError(buildStatus, "Build failed.");
        }
        console.log("Build completed.");

        //Main kernel name is test_quadratics
        var kernel = program.createKernel("test_quadratics");
        //var kernel = program.createKernel("foo");

        //Set buffer to bitset
        kernel.setArg(0, primemem);
        
        /*var localSize = new NDRange(10, 10, 10);
        var globalSize = new NDRange(1000, 1000, 1000);
        var offset = new NDRange(0, 0, 0);
        */

        var globalSize = new NDRange(range[0], range[1], range[2]);
        var localSize = new NDRange(localRange, localRange, localRange);
        var offset = new NDRange(workload.offsets[0], workload.offsets[1], workload.offsets[2]);

        console.log("Launching the kernel.");

        

        // Enqueue the kernel asynchronously
        //queue.enqueueNDRangeKernel(kernel, globalSize, localSize);
        //console.log(queue.enqueueNDRangeKernel.toString());
        queue.enqueueNDRangeKernel(kernel, globalSize, localSize, offset);

    });

console.log("(Everything after this point is asynchronous.)");