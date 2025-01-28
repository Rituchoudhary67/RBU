<%@ page language="java" contentType="text/html; charset=UTF-8" %>
<!DOCTYPE html>
<html>
<head>
<title>User Input Form</title>
</head>
<body>
<h1>Enter User Details</h1>
<form action="display_1.jsp" method="post">
<label for="name">Name:</label>
<input type="text" name="name" id="name" required><br><br>

<label for="age">Age:</label>
<input type="number" name="age" id="age" required><br><br>

<button type="submit">Submit</button>
</form>
</body>
</html>