%function for face recognition

function [person_index,maxlogpseq] = facerec(filename,myDatabase,minmax)

%read the selected image
I = imread(filename);
try
    
%Converted into grey
    I = rgb2gray(I);                
end
%Resize due to memory process
I = imresize(I,[56 46]);

%blured the image due to light effects
I = ordfilt2(I,1,true(3));

%verable for min and max coeffs
min_coeffs = minmax(1,:);
max_coeffs = minmax(2,:);
delta_coeffs = minmax(3,:);
seq = zeros(1,52);

%Vector formula 
for blk_begin=1:52    
    blk = I(blk_begin:blk_begin+4,:);    
    [U,S,V] = svd(double(blk));
    blk_coeffs = [U(1,1) S(1,1) S(2,2)];
    blk_coeffs = max([blk_coeffs;min_coeffs]);        
    blk_coeffs = min([blk_coeffs;max_coeffs]);                    
    qt = floor((blk_coeffs-min_coeffs)./delta_coeffs);
    label = qt(1)*7*10+qt(2)*7+qt(3)+1;                   
    seq(1,blk_begin) = label;
    imshow(I)
end     

%define number of persone in databas
number_of_persons_in_database = size(myDatabase,2);
results = zeros(1,number_of_persons_in_database);
for i=1:number_of_persons_in_database    
    TRANS = myDatabase{6,i}{1,1};
    EMIS = myDatabase{6,i}{1,2};
    [ignore,logpseq] = hmmdecode(seq,TRANS,EMIS);    
    P=exp(logpseq);
    results(1,i) = P;
end


[maxlogpseq,person_index] = max(results);
fprintf(['This person is ',myDatabase{1,person_index},'.\n']);


%verable for recognized person
reco_person=(myDatabase{1,person_index});


%r=([myDatabase{1,person_index},'.html']);
%url = ['file:///C:\xampp\htdocs\ATM\UserSite',r];



%URL For host file debug
%url=['http://220.247.235.186/ATM/',r];


%URL For host file debug
%url=['http://faceatm.site88.net/SourcePHP/',r];


% url=['http://localhost/ATM/\SourcePHP/UserSite/',reco_person];
%  web(url, '-browser')
% Sync image to datasync folder
% Sync image to WEB PORTAL


Input_folder = '.\Capture\'; % folder with big images
Output_folder = ['C:\xampp\htdocs\ATM\FaceReg\data\',reco_person,'\'];
Output_folder_Log ='C:\xampp\htdocs\ATM\FaceReg\CaptureLog\';
%D = dir([Input_folder '1.jpg']);
D = dir([Input_folder '*.jpg']);
Inputs = {D.name}';
Outputs = Inputs; % preallocate
OutputsLog = Inputs; 


for k = 1:length(Inputs)
    X = imread([Input_folder Inputs{k}]);
    idx = k; % index number
    Outputs{k} = regexprep(Outputs{k}, 'big', ['small_' num2str(idx)]);
    OutputsLog{k} = regexprep(OutputsLog{k}, 'big', ['small_' num2str(idx)]);
    imwrite(X, [Output_folder Outputs{k}],'jpg')
     fprintf('1.overright the database');
    imwrite(X, [Output_folder_Log OutputsLog{k}],'jpg')
     fprintf('2.Log file updated');
end


filenameLog = ['./CaptureLog/',reco_person,'.jpg'];
 fprintf('3.Log file updated real image');
imwrite(I,filenameLog);



% n veriable assinged to recognized person
n = reco_person;

switch n
    case 'error_blank'
  url=['http://localhost/ATM/\SourcePHP/error.php'];
  web(url, '-browser')
   
    case 'error_fullhelmet'
  url=['http://localhost/ATM/\SourcePHP/error.php'];
  web(url, '-browser')
  
    case 'errror_facemask'
  url=['http://localhost/ATM/\SourcePHP/error.php'];
  web(url, '-browser')
  
  
      case 'errror_handcover'
  url=['http://localhost/ATM/\SourcePHP/error.php'];
  web(url, '-browser')
  
  
     case 'errror_sunclass'
  url=['http://localhost/ATM/\SourcePHP/error.php'];
  web(url, '-browser')
  
  
    otherwise
        url=['http://localhost/ATM/\SourcePHP'];
  web(url, '-browser')
end




