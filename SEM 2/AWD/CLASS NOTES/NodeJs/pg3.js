console.log("Start operation");
function sleep(milliseconds) {
    let startTime = new Date().getTime();
    console.log("operation is runnning");
    while(new Date().getTime() < (startTime + milliseconds)) {
        console.log("In Progress");
    }
    console.log("operation done");
}
sleep(3);
console.log("do something else");