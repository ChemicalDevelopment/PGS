
console.log(process.stdout.on.toString());

process.stdout.on('data', function (data) {
    console.log("hello");
});
