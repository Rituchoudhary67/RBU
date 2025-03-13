var http = require('http');
var dt = require('./pg1');

//var add = require('./pg1');

http.createServer(function(req,res){
    res.writeHead(200,{'content-type' : 'text/html'});
    res.write("The current date and time : " + dt.myDateTime() );
    res.end();
}).listen(8080);


