

choice=menu('WelCome To Face Recognition ATM system',...
                '1.Admin Login',...
                '2.User',...
                '3.exit'  );      
               
    if(choice == 1)
       passwordlog();  
    end
    if (choice == 2)
    usermenu();
    end;
     if (choice == 3)
close(code)
    
 end;