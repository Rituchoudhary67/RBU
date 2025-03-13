var http = require('http');

http.createServer(function(req,res){
    res.end('<html><body><marquee>Welcome to web development</marquee><div style="border:1px solid black; padding:20px; width:40%; border-radius:5px; box-shadow:10px 8px rgba(12, 56, 250, 0.32)"><h1>I am Ritu Choudhary</h1><input type="text" placeholder="Enter your name"/><br><br><button style="background-color:blue;color:white; padding:10px; box-shadow:10px 10px 8px blue; border-radius:5px; border:1px solid white;">Submit</button></div> <br><br><div style="border:1px solid black; padding:20px; width:40%; border-radius:5px; box-shadow:10px 8px rgb(197, 240, 217)"><h1>Hello from Nagpur</h1><input type="text" placeholder="Enter your city"/><br><br><button style="background-color:green;color:white; padding:10px; box-shadow:10px 10px 8px green; border-radius:5px;">Submit</button></div></body></html>');
}).listen(1337,'127.0.0.1');
console.log('server running ar http://localhost:1337');