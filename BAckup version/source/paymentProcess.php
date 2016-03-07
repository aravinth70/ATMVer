

<?php


 if (!empty($_SERVER['HTTP_CLIENT_IP'])) {
    $ip = $_SERVER['HTTP_CLIENT_IP'];
} elseif (!empty($_SERVER['HTTP_X_FORWARDED_FOR'])) {
    $ip = $_SERVER['HTTP_X_FORWARDED_FOR'];
} else {
    $ip = $_SERVER['REMOTE_ADDR'];
}
session_start();

//echo $_SESSION["balance"];
$balance = $_SESSION["Balance"];
$PIN = $_SESSION["PIN"];
//print_r($_SESSION["balance"]);

$amount = $_POST['amount'];
//print_r($_POST['amount']);

$name=$_SESSION['firstName'];

$account = $_POST['account'];
//print_r($_POST['account']);

$company = $_POST['company'];
//print_r($_POST['comapany']);


$finalBalance = $balance - $amount;
$_SESSION['finalBalance'] = $finalBalance;
$_SESSION['amount'] = $amount;



include_once('connection.php');

if($amount > $balance){
	
	echo "Sorry insufficient balance";
	echo "<p> <a href='withdraw.php' >Try again </a>";
}

else{
$sql = "UPDATE ATM.Verification SET  Balance='$finalBalance' WHERE PIN='$PIN'";
$result = mysql_query($sql,$con);



$sql1 = "insert into ATM.withdraw (WDFirstName,WDPin,WDBalance,WDAmount,WDCurBalance,WDIPAddress,WDCredit) value ('$name','$PIN','$balance','$amount',('$balance'-'$amount'),'$ip','Payment')";
$result1 = mysql_query($sql1,$con);



$sql2 = "insert into ATM.payment (PCompany,PAccount,PAmount,PName) value ('$company','$account','$amount','$name')";
$result2 = mysql_query($sql2,$con);




if(!$result){
	echo "Invalid amount";
	
}
else{
	
echo '<html> <head> <link rel="stylesheet" type="text/css" href="main.css"> </head> <body class="bg"> <center> <br><br><br><br><br><br><br> <br><br><br><br><br><br><br> Withdrawal successful!. Currently your account balance is '.$finalBalance.' . </center> </body> </html>';
	echo '<html> <head> <link rel="stylesheet" type="text/css" href="main.css"> </head> <body class="bg"> <center> <p> <a class="input" style="text-decoration: none" href="logout.php" >End Transaction </a> </body> </html>';
	include_once('send.php');
	
}
}
?>