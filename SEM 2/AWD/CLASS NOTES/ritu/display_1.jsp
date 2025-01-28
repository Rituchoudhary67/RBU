<%@ page language="java" contentType="text/html; charset=UTF-8" %>
<%@ page import="com.example.User" %>
<!DOCTYPE html>
<html>
    <head>
        <title>User Details</title>
    </head>
    <body>
        <h1>User Details</h1>
        <!-- create the javabean  -->
         <jsp:useBean id="user" class="com.example.User" scope="request" />

         <!-- set the properties from the form data  -->
        <jsp:setProperty name="user" property="*" />

        <!-- Display the properties  -->
        <p><Strong>Name:</Strong><jsp:getProperty name="user" property="name"/></p>
        <p><strong>Age:</strong><jsp:getProperty name="user" property="age"/></p>
    </body>
</html>