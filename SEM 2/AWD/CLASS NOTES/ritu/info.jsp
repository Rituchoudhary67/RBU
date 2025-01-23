<%@ page session="true"%>
<%@ page import="java.util.List , java.util.ArrayLisy" %>

<html>
<head>
    <title>Logged-In Users</title>
</head>
<body>
    <h1>Currently Logged-In Users</h1>
    <ul>
        <% 
        List<String> loggedInUsers = (List<String>) getServletContext().getAttribute("loggedInUsers");
        if(loggedInUsers != null && !loggedInUsers.isEmpty()) {
            for(String user : loggedInUsers) {
                out.println("<li>" + user + "</li>");
            }
        } else {
            out.print("<p> No users are currently logged in.</p>");
        }    
        %>
    </ul>
    <a href="dashboard.jsp">Back to Dashboard</a>
</body>
</html>