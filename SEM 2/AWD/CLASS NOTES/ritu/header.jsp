<%-- header.jsp --%>



<%
String collegeName = "RBU Ramdeobaba University";
String currentDate = new java.text.SimpleDateFormat("EEEE, dd MMM yyyy").format(new java.util.Date());
%>

<h1><%=collegeName %></h1>
<p>Welcome! Today is <b><%=currentDate %></b>.</p>
<hr>