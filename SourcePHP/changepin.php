<html>
<head>
<link rel="stylesheet" type="text/css" href="main.css">


</head>
<body class="bg">
<center>
<br><br><br><br><br><br><br>
<br><br><br><br><br><br><br>
<div id="">

<form name="changepinform"  onsubmit ="allnumeric(NumberOnly)" action='changepinProcess.php' method='POST' >

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



<p> Please enter New Pin Number </p>

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

<input class="input" type="text" name="newpin" id="NumberOnly" required>

<input class="input" type="submit" name="submit" value="Change" >

</form>


</div>
</center>
</body>
</html>