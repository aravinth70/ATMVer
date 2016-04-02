<html>
<meta http-equiv="refresh" content="10;url=http://localhost/ATM/SourcePHP" /> 
<head>
<link rel="stylesheet" type="text/css" href="../../css/main.css">
</head>
<body class="bg">

<center>
<br><br><br><br><br><br><br><br><br><br><br>
<div>
 <br><br><br><br>
<div>
<p id="demo"></p>
<br><br>
<script>
document.getElementById("demo").innerHTML = Date();
</script>

 
  <label><B>WELCOME ARAVINTH TO ABC PVT BANK</B></label> <br><br>

  <img src="../../images/1.jpg" width="92" height="112" alt="userimage">

</div>



<?php
$regname ='aravinth';
$file = 'C:\xampp\htdocs\ATM\FaceReg\Capture\1.jpg';
$newfile = 'C:\xampp\htdocs\ATM\FaceReg\datasync\aravinth\1.jpg';

if (!copy($file, $newfile)) {
    echo "failed to copy";
}


?>



</center>


</body>
<!DOCTYPE html>
<html>

<body onload ="getLocation()">

<p id="demo"></p>



</body>

</html>




</html>