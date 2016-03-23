<html>
<head>
<link rel="stylesheet" type="text/css" href="main.css">


</head>
<body class="bg">
<center>
<br><br><br><br><br><br><br>
<br><br><br><br><br><br><br>
<div id="">

<form name="withdraw"  onsubmit ="allnumeric(NumberOnly)" action='withdrawalProcess.php' method='POST' >

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

<script type="text/javascript">
function allnumeric(uzip)
{
	var number =/^[0-9]+$/;
	if (uzip.value.match(number))
	{
		return true;
	}
	
	else
	{
		alert ("vales only");
	}
	uzip.focus();
    return false;
}

</script>

<input class="input" type="text" name="amount" id="NumberOnly" required>

<input class="input" type="submit" name="submit" value="Withdraw" >

</form>


</div>
</center>
</body>
</html>