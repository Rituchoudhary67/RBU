var http = require('http');
http.createServer(function(req,res){
    //res.end('Hello World from node.js i am ritu');
    res.end('<h1>Hello world</h1> <h2>I am Ritu Choudhary</h2> <input type="text" placeholder="Enter your name.."/> <br> <br><button style="background-color:green; color:white; border:none; padding:10px; border-radius:10px">Submit</button>');
}).listen(1337,'127.0.01');

console.log("server running at http://127.0.01:1337/");

