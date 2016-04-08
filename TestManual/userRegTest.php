


<?php

/* $con = mysql_connect('localhost','root','');
$db = mysql_select_db('atm');
if(!$con and !$db)
{


 die("could not connect to sql");


}

else
{

 */
 
 
 include_once('../SourcePHP/connection.php');


$username = 'Test';
$lastname = 'testlast';
$address = 'testAddress';
$telephone='123456';
$mail = 'test@debugisp.net';
$password = '000000';
$balance = 100000;



$sql = "INSERT INTO verification(FirstName,LastName,Address,Contact,Mail,PIN,Balance)
 VALUES ('$username' ,'$lastname' ,'$address','$telephone','$mail','$password ','$balance') ";
$result = mysql_query($sql,$con);


if(!$result)

{

echo "Invalid query";

}


else
{
echo "Insert successfully";

//header('location:../SolurcePHP/userreg.php');
}



?>
</body>
</html>