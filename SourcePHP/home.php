<html>
<head>

<span class="wb-sessto" data-wb-sessto='{"inactivity": 1200000, "reactionTime": 30000, "sessionalive": 1200000, "logouturl": "./", "refreshCallbackUrl": "./"}'></span>
<link rel="stylesheet" type="text/css" href="main.css">
</head>
<body class="bg">
<center>
<div id="">


<br><br><br><br><br><br><br>
<br><br><br><br><br><br><br>

<p> <a style="text-decoration: none;" class="input" href="balance.php"> Check Balance </a> 
 <a style="text-decoration: none;" class="input"  href="withdraw.php"> Cash Withdrawal </a> 
<a style="text-decoration: none;" class="input" href="report.php"> Statement </a>
<a style="text-decoration: none;" class="input" href="payment.php"> Online Payment </a>
<a style="text-decoration: none;" class="input" href="changepin.php"> Change PIN </a>
</p> 


<?




//session_start();
// print_r($_SESSION); ?>


<body onload="getLocation()">

<p id="demo"> Your position.</p>



<div id="mapholder"></div>

<script>
var x = document.getElementById("demo");

function getLocation() {
    if (navigator.geolocation) {
        navigator.geolocation.getCurrentPosition(showPosition, showError);
    } else {
        x.innerHTML = "Geolocation is not supported by this browser.";
    }
}

function showPosition(position) {
    var latlon = position.coords.latitude + "," + position.coords.longitude;

    var img_url = "http://maps.googleapis.com/maps/api/staticmap?center="
    +latlon+"&zoom=14&size=400x300&sensor=false";
    document.getElementById("mapholder").innerHTML = "<img src='"+img_url+"'>";
}

function showError(error) {
    switch(error.code) {
        case error.PERMISSION_DENIED:
            x.innerHTML = "User denied the request for Geolocation."
            break;
        case error.POSITION_UNAVAILABLE:
            x.innerHTML = "Location information is unavailable."
            break;
        case error.TIMEOUT:
            x.innerHTML = "The request to get user location timed out."
            break;
        case error.UNKNOWN_ERROR:
            x.innerHTML = "An unknown error occurred."
            break;
    }
}
</script>

</body>



















</center>
</body>
</html>
