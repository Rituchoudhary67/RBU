<!DOCTYPE html>
<html>
<head>
    <title>JSP Web Page</title>
</head>
<body>
    <h1>Hello From JSP page</h1>
    <%!
       public String getHEllo(){
        return "Hello Purva and Ritu from JSP page";
       }
       public int getSum(int a, int b){
        return a+b;
       }
       
    %>
    <p>Greeting Message: <%= getHEllo() %></p>
    <p>The Sum of 4 and 6 = <%= getSum(4,6) %></p>
</body>
</html>