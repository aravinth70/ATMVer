<?php

$PIN = 3;

//$PINN = $PIN;

echo"<a href='test2.php' > click </a> ";


session_start();
$_SESSION['PIN'] = $PIN;
print_r($_SESSION['PIN']);

?>