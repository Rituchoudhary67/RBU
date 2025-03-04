<%@ page session="true"%>
<%@ page import = "java.util.List , java.util.ArrayList" %>
<% 
    //Retrive from Data
    String username= request.getParameter("username");
     String password= request.getParameter("password");

     //Validate credentials (for demonstration purpose)
     if("admin".equals(username) && "password".equals(password)) {
        //store user in session
        session.setAttribute("username",username);

        //add username to the global list of logged-in users
        synchronized (getServletContext()) {
            List<String> loggedInUsers = (List<String>) getServletContext().getAttribute("loggedInUsers");
                if(loggedInUsers == null) {
                    loggedInUsers = new ArrayList<>();
                }
                if(!loggedInUsers.contains(username)) {
                    loggedInUsers.add(username);
                }
                getServletContext().setAttribute("loggedInUsers", loggedInUsers);
        }
        //Display user-specific dashboard
        out.println("<h1> Welcome, " + username + "!</h1>");
        out.println("<a href='info.jsp'> View Logged-In Users</a><br/>");
        out.println("<a href='logout.jsp'>Logout</a>");
     } else {
        out.println("<h1> Invalid login. Please try again.</h1>");
        out.println("<a href='login.jsp'>Back to Login</a>");
     }

    %>