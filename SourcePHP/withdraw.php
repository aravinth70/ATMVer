<html>
<head>
<link rel="stylesheet" type="text/css" href="main.css">
</head>
<body class="bg">
<center>
<br><br><br><br><br><br><br>
<br><br><br><br><br><br><br>
<div id="">
<form name="withdraw" action='withdrawalProcess.php' method='POST'>

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



<p> Please enter the amount, you wish to withdraw </p>

<input class="input" type="text" name="amount" required>

<input class="input" type="submit" name="submit" value="Withdraw" >

</form>


</div>
</center>
</body>
</html>