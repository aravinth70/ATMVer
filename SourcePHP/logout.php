




<?php

session_start();
session_unset();
session_destroy();


	

echo '<html> <head> <link rel="stylesheet" type="text/css" href="main.css"> </head> <body class="bg"> <center><br><br><br><br><br><br><br> <br><br><br><br><br><br><br> Thank you! Please come again! </center> </body> </html>';

echo '<html> <head> <link rel="stylesheet" type="text/css" href="main.css"> </head> 
<body class="bg"> <center> <p> <a style="text-decoration: none;" class="input" href="index.html" > Click here to exit. </a> </center> </body> </html>';


$file = "images/1.jpg";
if (!unlink($file))
  {
  echo ("Error deleting $file");
  }
else
  {
  echo ("");
  }
  
   
    /* ... SQL EXECUTION TO UPDATE DB ... */

    echo "<script>window.close();</script>";



	
?>