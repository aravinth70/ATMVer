

clear all;
close all;
clc;

if (exist('DATABASE.mat','file'))
    load DATABASE.mat;
end
while (1==1)
    choice=menu('WelCome To Face Recognition ATM',...
                '1.Generate Database',...
                '2.Calculate Recognition Rate',...
                '3.Recognize from Image',...
                '4.Recognize from Webcam',...
                '5.Upload the Image',....
                '6.Register account',....
                '7.Exit');
            
    if (choice ==1)
        if (~exist('DATABASE.mat','file'))
            [myDatabase,minmax] = gendata();        
        else
            pause(0.1);    
            choice2 = questdlg('Generating a new database will remove any previous trained database. Are you sure?', ...
                               'Warning...',...
                               'Yes', ...
                               'No','No');            
            switch choice2
                case 'Yes'
                    pause(0.1);
                    [myDatabase minmax] = gendata();        
                case 'No'
            end
        end        
    end
    if (choice == 2)
        if (~exist('myDatabase','var'))
            fprintf('Please generate database first!\n');
        else
            recognition_rate = testsys(myDatabase,minmax);                
        end                        
    end    
    if (choice == 3)
        if (~exist('myDatabase','var'))
            fprintf('Please generate database first!\n');
        else            
            pause(0.1);            
            [file_name file_path] = uigetfile ({'*.pgm';'*.jpg';'*.png'});
            if file_path ~= 0
                filename = [file_path,file_name];                
                facerec (filename,myDatabase,minmax);                        
            end
        end
    end
    if (choice == 4)
        
         
        I = getcam();
        if (~isempty(I))           
            filenamePHP = ['C:\xampp\htdocs\ATM\SourcePHP\images\','1.jpg'];
            filename = ['./Capture/',num2str(floor(rand()*10)+1),'.jpg'];
            imwrite(I,filename);
            imwrite(I,filenamePHP);

            if (exist('myDatabase','var'))
                facerec (filename,myDatabase,minmax);
            end
        end
    end
    
    
     if (choice == 5)
        I = getcam();
        H = FaceDetection();
        if (~isempty(I))           
            filename = ['./upload/',num2str(floor(rand()*10)+1),'.jpg'];
            imwrite(I,filename);
           % if (exist('myDatabase','var'))
              %  facerec (filename,myDatabase,minmax);
           % end
        end
     end
    
    
    
       if (choice == 6)
       
url=['http://localhost/ATM/\SourcePHP/userreg.php'];
web(url, '-browser')
 
       end    
    
     
     
    if (choice == 7)
        clear choice choice2
        
        login();
    end    
    
 
    
    
    
end