<?php

//Comment the session  due to error
//if(isset($_SESSION["PIN"])){
	//session_start();
	//print_r($_SESSION);
//if(isset($_SESSION["PIN"])){

	
include_once('connection.php');
session_start();
$PIN1 = $_SESSION["PIN"];
//print_r($_SESSION["PIN"]);
//$PIN1 = $_SESSION["PIN"];

$sql = "SELECT FirstName,LastName,Balance FROM ATM.Verification WHERE PIN = '$PIN1' ";

$result = mysql_query($sql,$con);
if($result == true){
  while($row = mysql_fetch_array($result)){
	
	//echo "<td>". $row['FirstName'] . " </td>";
  	$firstName = $row['FirstName']; 
	$lastName = $row['LastName'];
	//$balance = $row['Balance'];
	//session_start();
	
	//$_SESSION["balance"] = $balance;
	//print_r($_SESSION["balance"]);
	
	include_once('balanceStatus.php');
  }
}

/*
else{
	
		echo 'You are not authorized to view this page.';
	}
*/

	//mysql_close();
?>