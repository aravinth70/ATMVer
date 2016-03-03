<?php
//session_start();
$mail = $_SESSION["Mail"];
$amount = $_SESSION["amount"];
$finalBalance = $_SESSION["finalBalance"];

$to ='$mail';
$subject = 'There was a transaction occurred in your ATM account  ';
$msg = "You have successfully withdrawn Rs.".$amount." from your account. <p> Currently you have Rs.".$finalBalance." in your account. If there is any issues, please do not hesitate to contact the customer care. Thank you.</p>";
$body = "You have successfully withdrawn Rs.".$amount." from your account. <p> Currently you have Rs.".$finalBalance." in your account. If there is any issues, please do not hesitate to contact the customer care. Thank you.</p>";
$headers ="From: ATM Bank ";
$scc = 'Email sent';
$err = "Invalid transaction";
$er = 'Problem occurred while sending email.';


if($mail == null){
echo $err;
}
else{

$mailing=mail($to,$subject,$msg,$body);
}

if($mailing==1)
 {
	//echo $mail;
	//echo $scc ;
	}
	
         else{
echo $er;
}
?>

	