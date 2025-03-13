const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("Enter first number: ", function(a) {
    rl.question("Enter second number: ", function(b) {
        a = Number(a);
        b = Number(b);
        console.log(`Sum: ${a + b}`);
        console.log(`Difference: ${a - b}`);
        console.log(`Product: ${a * b}`);
        console.log(`Quotient: ${a / b}`);
        rl.close();
    });
});


