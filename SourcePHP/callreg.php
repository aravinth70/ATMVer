


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
 
 
 include_once('connection.php');


$username = $_POST['username'];
$lastname = $_POST['lastname'];
$address = $_POST['address'];
$telephone=$_POST['telephone'];
$mail = $_POST['mail'];
$password = $_POST['password'];
$balance = $_POST['balance'];



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

header('location:userreg.php');
}



?>
</body>
</html>