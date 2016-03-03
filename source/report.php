<!DOCTYPE html>
<html>
<body>
<form action="export.php">
    <input type="submit" name="insert" value="export to excel" onclick="insert()" />
</form>
<?php
function select(){
   echo "The select function is called.";
}
function insert(){
   echo "The insert function is called.";
}
?>

<?php

	
session_start();

//echo $_SESSION["balance"];
$balance = $_SESSION["Balance"];
$PIN = $_SESSION["PIN"];
//print_r($_SESSION["balance"]);
//$amount = $_POST['amount'];
//print_r($_POST['amount']);
$name=$_SESSION['firstName'];



//$finalBalance = $balance - $amount;
//$_SESSION['finalBalance'] = $finalBalance;
//$_SESSION['amount'] = $amount;





echo "<table style='border: solid 1px black;'>";
echo "<tr><th>Date</th><th>Balance</th><th>Method</th><th>WithDraw</th><th>Current Balance</th></tr>";  

class TableRows extends RecursiveIteratorIterator { 
     function __construct($it) { 
         parent::__construct($it, self::LEAVES_ONLY); 
     }

     function current() {
         return "<td style='width: 150px; border: 1px solid black;'>" . parent::current(). "</td>";
     }

     function beginChildren() { 
         echo "<tr>"; 
     } 

     function endChildren() { 
         echo "</tr>" . "\n";
     } 
} 

$servername = "localhost";
$username = "root";
$password = "";
$dbname = "atm";

try {
     $conn = new PDO("mysql:host=$servername;dbname=$dbname", $username, $password);
     $conn->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
     $stmt = $conn->prepare("select WDTime,WDBalance,WDCredit,WDAmount,WDCurBalance From withdraw where WDFirstName='$name' order by WDTime"); 
     $stmt->execute();

     // set the resulting array to associative
     $result = $stmt->setFetchMode(PDO::FETCH_ASSOC); 

     foreach(new TableRows(new RecursiveArrayIterator($stmt->fetchAll())) as $k=>$v) { 
         echo $v;
     }
}
catch(PDOException $e) {
     echo "Error: " . $e->getMessage();
}
$conn = null;
echo "</table>";

//New


























?>  



 

</body>
</html>
