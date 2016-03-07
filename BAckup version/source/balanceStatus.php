<html>
<head>
<link rel="stylesheet" type="text/css" href="main.css">
</head>
<body class="bg">
<center>
<br><br><br><br><br><br><br>
<br><br><br><br><br><br><br>
<div id="">
<?php
echo 'Welcome, '. $_SESSION["firstName"].' '.$_SESSION["lastName"].'!';
?>

<p> Available Balance </p>
<input class="input" style="text-decoration: none;" type="text" value="<?php echo $_SESSION["Balance"]; ?>" required>

<p> <a class="input" style="text-decoration: none;" href="home.php"> Return </a>  <a style="text-decoration: none;" class="input" href="withdraw.php"> Withdraw </a> </p>
 

</center>
</body>
</html>