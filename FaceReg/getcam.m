

%function for open USB Webcam
function I = getcam()
 delete('C:\xampp\htdocs\ATM\FaceReg\Capture\*.jpg')
try
    
% Video preview in colour    

vid = videoinput('winvideo', 1, 'RGB24_320x240');
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

preview(vid);


choice=menu('Capture Frame',...
            '   Capture   ',...
            '     Exit    ');
I = [];        
if (choice == 1)
 % snapshot code
    I = getsnapshot(vid);
    try
        I = rgb2gray(I);  % convert to grey because to extract the feature 
       
    end
    I = I(8:231,68:251); % face identify by zoom the image
    
    I = imresize(I,[112 92]); % resiz it for memory process
 
    % show converted image 
    imshow(I)
end
closepreview(vid);

catch err
   %open file
   fid = fopen('Error/errorFile','a+');
   % write the error to file
   % first line: message
   c = clock
   fprintf(fid,'.\n' );
   fprintf(fid,'%s\n',err.message );
   fprintf(fid,'USB WEBCAM IS NOT CONNECTED');

   % close file
   fclose(fid)
   
end


%%%%% Reading of a RGB image

l=imread('C:\xampp\htdocs\ATM\SourcePHP\images\1.jpg');
%I=rgb2gray(i);
BW=im2bw(l);
figure,imshow(BW)

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%% minimisation of background portion

[n1 n2]=size(BW);
r=floor(n1/10);
c=floor(n2/10);
x1=1;x2=r;
s=r*c;

for l=1:10
    y1=1;y2=c;
    for j=1:10
        if (y2<=c | y2>=9*c) | (x1==1 | x2==r*10)
            loc=find(BW(x1:x2, y1:y2)==0);
            [o p]=size(loc);
            pr=o*100/s;
            if pr<=100
                BW(x1:x2, y1:y2)=0;
                r1=x1;r2=x2;s1=y1;s2=y2;
                pr1=0;
            end
            imshow(BW);
        end
            y1=y1+c;
            y2=y2+c;
    end
    
 x1=x1+r;
 x2=x2+r;
end
 figure,imshow(BW)
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%% detection of face object

L = bwlabel(BW,8);
BB  = regionprops(L, 'BoundingBox');
BB1=struct2cell(BB);
BB2=cell2mat(BB1);

[s1 s2]=size(BB2);
mx=0;
for k=3:4:s2-1
    p=BB2(1,k)*BB2(1,k+1);
    if p>mx & (BB2(1,k)/BB2(1,k+1))<1.8
        mx=p;
        j=k;
    end
end
%figure,imshow(l);
hold on;
rectangle('Position',[BB2(1,j-2),BB2(1,j-1),BB2(1,j),BB2(1,j+1)],'EdgeColor','r' )








