// importing required packages 
const express = require("express");
const app = express();
const port = 8080;
const path = require("path");

// setting up middleware
app.use(express.urlencoded({extended : true}));

app.set("view engine", "ejs");
app.set("views", path.join(__dirname, "views"));
app.set(express.static(path.join(__dirname,"public")));

// creating an array for storing post data 
let posts = [
    {
        username : "ritu",
        topic : "web dev",
        content : "learning web dev",
    },
    {
        username : "shweta",
        topic : "frontend",
        content : "she is learning frontend",
    }
]


//get request for root rout
app.get("/posts", (req,res) => {
    res.render("index.ejs", {posts});
})

app.listen(port, () => {
    console.log("listening to port : 8080");
});