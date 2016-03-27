<html>
<head>
<link rel="stylesheet" type="text/css" href="main.css">
</head>
<body class="bg">
<center>
<br><br><br><br><br><br><br>

<div id="">
<form name="withdraw" action='paymentProcess.php' method='POST'>

<p> Your Balance is 


<?php 

session_start();

echo $_SESSION["Balance"]; 


?>
</p>


<p> Your Name


<?php

echo $_SESSION['firstName'];

?>
</p>

</br></br>

<p><B> Please enter the amount for Payment </B></p>
<div>
Payment Company 
<select id="company" name="company">
  <option value="Mobile Bill">Mobile Bill</option>
  <option value="Electricity">Electricity</option>
  <option value="Water Board">Water Board</option>
  <option value="Credit Card">Credit Card</option>
</select>  </br>
</br></br>
</div>
Account Number <input class="input" type="text" name="account"required <br><br><br>
Payment Amount <input class="input" type="text" name="amount" required><br><br>

<input class="input" type="submit" name="submit" value="DoPayment" >

</form>


</div>
</center>
</body>
</html>