<?php

//$date= date("Y-m-d");
//$time=date("H:m");
//$datetime=$date."T".$time;
$date=date("Y-m-d h:i:s");
//$ipaddress = $_SERVER["REMOTE_ADDR"];
 if (!empty($_SERVER['HTTP_CLIENT_IP'])) {
    $ip = $_SERVER['HTTP_CLIENT_IP'];
} elseif (!empty($_SERVER['HTTP_X_FORWARDED_FOR'])) {
    $ip = $_SERVER['HTTP_X_FORWARDED_FOR'];
} else {
    $ip = $_SERVER['REMOTE_ADDR'];
}

$PIN = $_POST["PIN"];
$PIN1 = $PIN ;


include_once('connection.php');

$sql1 = "INSERT INTO log(PIN,LogDate,IPAddress)VALUES ('$PIN',('$date'),'$ip')";
$result1 = mysql_query($sql1,$con);

$sql = "SELECT * FROM ATM.Verification WHERE PIN = '$PIN' ";
$result = mysql_query($sql,$con);
$count = mysql_num_rows($result);

if($count == true){
   
  
  
  while($row = mysql_fetch_array($result)){
	
	//echo "<td>". $row['FirstName'] . " </td>";
  	$firstName = $row['FirstName']; 
	$lastName = $row['LastName'];
	$mail = $row['Mail'];
	$balance = $row['Balance'];
	
	
	//echo 'Welcome, '. $firstName.' '.$lastName;
	
	//mysql_close();



	include_once('home.php');
	//include_once('connection.php');



$resultcount = mysql_query("SELECT * FROM atm.log", $con);
$num_rows = mysql_num_rows($resultcount);

//echo "$num_rows Rows\n";

$sql2 = "INSERT INTO logentry(LID,LEFristName,LEPin,LEBalance,IPAddress)VALUES ('$num_rows','$firstName','$PIN1','$balance','$ip')";
$result2 = mysql_query($sql2,$con);	


session_start();
$_SESSION["PIN"] = $PIN1;
$_SESSION["firstName"] = $firstName;
$_SESSION["lastName"] = $lastName;
$_SESSION["Mail"] = $mail;
$_SESSION["Balance"] = $balance;
//print_r($_SESSION["PIN"]);

 

  }
  
 
  
}
elseif($count != true){
	
	error_log("login fail\n", 3, "data.log");
	include_once('error.php');
	

}
  /*
  elseif ($result == false){
	  
	  echo "Sorry, No results found.";
  }
*/    //count the results and if no results then add it as if result=0 .....

?>