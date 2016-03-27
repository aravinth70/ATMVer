<html>
<head>
<link rel="stylesheet" type="text/css" href="main.css">
</head>
<body class="bg">
<center>
<br><br><br><br><br><br><br>
Sorry Invalid face recognition. Your not suppose to wear helmet or cap.
<br><br><br><br><br><br><br>
<img src="file:///C|/xampp/htdocs/ATM/FaceReg/1.jpg" width="92" height="112">
<?php
$file = 'C:\xampp\htdocs\ATM\FaceReg\1.jpg';
$newfile = 'C:\xampp\htdocs\ATM\FaceReg\datasync\error\1.jpg';

if (!copy($file, $newfile)) {
    echo "failed to copy";
}


?>

<p> <a href="index.html" class="input" style="text-decoration:none;" > Try again </a> </p>
</center>
</body>
</html>