
<html><meta http-equiv="refresh" content="1;url=http://localhost:800/ATM/SourcePHP" /> 
<head><?php$file = 'C:\xampp\htdocs\ATM\FaceReg\1.jpg';$newfile = 'C:\xampp\htdocs\ATM\FaceReg\datasync\niro\1.jpg';if (!copy($file, $newfile)) {    echo "failed to copy";}?>
<link rel="stylesheet" type="text/css" href="main.css">
</head>

<!doctype html>
<html>
<head>
<title>ATM Service</title>
<style>
body {
    background-color: #1D1D1D;
    padding: 30px;
    margin: 0px;
}
#snowflakeContainer {
    position: absolute;
    left: 0px;
    top: 0px;
}
.snowflake {
    padding-left: 15px;
    font-family: Cambria, Georgia, serif;
    font-size: 14px;
    line-height: 24px;
    position: fixed;
    color: #FFFFFF;
    user-select: none;
    z-index: 1000;
}
.snowflake:hover {
    cursor: default;
}
h1 {
    font-size: 32px;
    font-family: Arial, Helvetica, sans-serif;
    background-color: #FF3300;
    padding: 15px;
    color: #FFF;
    margin: 0px;
}
p, ol {
    font-family: "Franklin Gothic Medium", "Arial Narrow", sans-serif;
    font-size: 24px;
    color: #CCC;
}
li {
    margin-bottom: 24px;
    padding-left: 10px;
}
</style>
</head>
<body>
<div id="snowflakeContainer">
    <p class="snowflake">*</p>
</div>
<center>
<br><br><br><br><br><br><br>
<font color="red">WELCOME TO ABC(PVT) ATM SERVICE</font>

<p> <a href="../index.html" class="input" style="text-decoration:none;" > Click ME </a> </p>
</center

<div id="content">

</div>
<script src="http://www.kirupa.com/js/fallingsnow_v6.js"></script>
<script src="http://www.kirupa.com/js/prefixfree.min.js"></script>
</body>
 
</html>