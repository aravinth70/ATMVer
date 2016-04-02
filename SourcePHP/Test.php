<?php

 //Unit test for Login and User Table----------------------------------
 include_once("connection.php");
$sqlLogin = "INSERT INTO log(PIN,LogDate,IPAddress)VALUES('$PIN',('$date'),'$ip')";
$resultLogin = mysql_query($sqlLogin,$con);

$sql = "SELECT * FROM ATM.Verification WHERE PIN = '$PIN' ";

$result = mysql_query($sql,$con);
$count = mysql_num_rows($result);

if($count == true){

 echo"Login Test Passed";
}

else{

        echo"Login Test Failed";

}

 //Unit Test Update ATM Table----------------------------------

 $sql = "UPDATE ATM.Verification SET  Balance='10000000' WHERE PIN='1234'";
$result = mysql_query($sql,$con);

 if(!$result){
        echo "Unit Test Failed";

}


 else{

         echo "Unit Test Passed";

 }
 ?>