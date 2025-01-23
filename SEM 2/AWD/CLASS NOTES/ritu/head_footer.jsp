<%@ include file="header.jsp" %>
<%@ include file="login.jsp" %>
<main>
    <%
    String[] department = {
        "Department of computer science",
        "Department of Mechanical",
        "Department of Musics",
        "Department of Socail work",
        "Department of Education"
    };
    %>
    <ul>
        <% for(String dept: department) { %>
            <li><%= dept %></li>
        <% } %>
    </ul>
</main>

<%@ include file="footer.jsp" %>