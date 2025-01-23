<%@ page session="true" %>
<html>
<head>
    <title>Login Page</title>
    <style>
        form {
            border: 1px solid black;
            padding:20px;
            background-color: rgb(197, 235, 235);
            border-radius: 10px;
            width: 28rem;
        }

        button {
            background-color: rgb(2, 110, 110);;
            color: white;
            border:none;
            padding: 5px;
            border-radius: 5px;
        }
    </style>
</head>
<body>
    <form method="post" action="head_footer.jsp">
       Name <input type="text" placeholder="first name"/> <input type="text" placeholder="last name"/> <br/> <br>
       Select Branch <select name="" id="">
        <option value="">Select your branch</option>
        <option value="">MCA</option>
        <option value="">BCA</option>
        <option value="">Civil Engineering</option>
        <option value="">Electrical Engineering</option>
        <option value="">Mechanical Engineering</option>
        <option value="">Computer Science Engineering</option>
       </select> <br> <br>
       Student's DoB  : <input type="date"> <br><br>
       Parent/Guardian Name <input type="text" placeholder="first name"/> <input type="text" placeholder="last name"/> <br/> <br>
       Current Address <input type="text" name="" id="" placeholder="Street Address"> <input type="text" name="" id="" placeholder="City"> <br/>
       <br><input type="text" name="" placeholder="Zip Code" id=""> <input type="text" name="" placeholder="Country" id=""> <br><br>
       Phone <input type="number" placeholder="##### #####" name="" id=""> <br> <br>
       Email <input type="email" name="" placeholder="Enter your mail id" id="">
       <br><br><button>Submit</button>
    </form>
</body>
</html>