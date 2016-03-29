

<!DOCTYPE html>

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
    <style type="text/css">
        .auto-style1
        {
            text-align: center;
        }
        .auto-style2
        {
            width: 117px;
        }
        .auto-style3
        {
            width: 117px;
            height: 31px;
        }
        .auto-style4
        {
            height: 31px;
        }
        .auto-style5
        {
            width: 117px;
            height: 30px;
        }
        .auto-style6
        {
            height: 30px;
        }
    #form1 div div .auto-style1 strong h1 {
	color: #FFF;
}
    #form1 div div table tr .auto-style2 strong {
	color: #FFF;
}
    #form1 div div table tr .auto-style5 strong {
	color: #FFF;
}
    #form1 div div table tr .auto-style3 strong {
	color: #FFF;
}
    #form1 div div p {
	color: #FFF;
}
    #form1 div div p {
	color: #F00;
}
    #form1 div div h4 strong a {
	color: #FFF;
}
    #form1 div div h3 a strong {
	color: #FFF;
}
    </style>
    

<script >
function formValidation() 
{  
var us = document.forms["form1"]["username"].value;
var pa= document.forms["form1"]["password"].value;



if (us==null || us=="")

{
	alert ("Please User Name");
	
	return false;
	}
	
	if (pa==null || pa=="")

{
	alert ("Please enter password");
	
	return false;
	}
	

	
}
</script>    
    
</head>
<body>
    <form id="form1"  onSubmit="formValidation()" method="post" action="callreg.php">
    <div>
        <div style ="position: absolute; top: 83px; left: 17px; height: 556px; width: 440px;">
          <div class="auto-style1"><strong>
          <h1>CREATE YOUR ACCOUNT</h1>
          <br />
                </strong>
    <br />
          </div>
        <table width="440" height="461" style="height: 154px; width: 437px">
            <tr>
                <td height="32" class="auto-style2"><strong>First Name</strong></td>
                <td><strong>
                        <input name="username" type="text" id="username" required="">
                </strong></td>
            </tr>
			
			            <tr>
                <td class="auto-style5"><strong>Last name</strong></td>
              <td class="auto-style6"><strong>
                             <input type="text" name="lastname" id="lastname">
              </strong></td>

            </tr>
			
			
		  <tr><td class="auto-style3"><strong>Address</strong></td>
                <td class="auto-style4"><strong>
                 
                </strong>
                  <p>
                    <strong>
                    <textarea name="address" id="address2"></textarea>
                  </strong></p>
                  <p>&nbsp;</p>
                </td>
            </tr>

		 <tr><td class="auto-style3"><strong>Telephone</strong></td>
                <td class="auto-style4"><strong>
                   
                  <span class="auto-style6">
                  <input type="text" name="telephone" id="telephone">
                </span></strong></td>
            </tr>

			
			
			 <tr><td class="auto-style3"><strong>E-mail ID</strong></td>
                <td class="auto-style4"><strong>
                                 
                  <span class="auto-style6">
                  <input type="email" name="mail" id="mail">
                </span></strong></td>
            </tr>

			
            <tr><td height="33" class="auto-style2"><strong>PIN</strong></td>
                <td><strong>
                <input type="password" name="password" id="password" required="">
                </strong></td>
            </tr>



          
  <tr><td class="auto-style3"><strong>Balance</strong></td>
                <td class="auto-style4"><strong>
                 
                  <span class="auto-style6">
                  <input type="text" name="balance" id="balance" required="">
                </span></strong></td>
          </tr>
		  
		  
		  
		  
       <tr>
                <td height="39" class="auto-style2"><strong>
                  <asp:Label ID="lblMessage" runat="server" ForeColor="Red" /></strong></td>
               
                  
</tr>


</table>
        <p>	
          <input type="submit" name="signin" id="signin" value="Submit">
          
          
         
         
        </p>
        <h3><strong><a href="tea-site.php"> &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</a></strong><a href="index.html"><strong>&nbsp;&nbsp;  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;  &nbsp;&nbsp;&nbsp; <span class="auto-style1"> CLICK HERE TO HOME PAGE</span></strong></a></h3>
        </div>

       
    <img  style= height="100%"  ; width ="100%" src="images/faceatm.jpg"/>
    </div>
    </form>
</body>
</html>
