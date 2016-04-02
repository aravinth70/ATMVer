

function [person_index,maxlogpseq] = facerec(filename,myDatabase,minmax)

I = imread(filename);
try
    I = rgb2gray(I);                
end
I = imresize(I,[56 46]);

I = ordfilt2(I,1,true(3));
 
min_coeffs = minmax(1,:);
max_coeffs = minmax(2,:);
delta_coeffs = minmax(3,:);
seq = zeros(1,52);

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

%[maxlogpseq,person_index] = max(results);
%fprintf(['This person is ',myDatabase{1,person_index},'.']);
r=(myDatabase{1,person_index});


%r=([myDatabase{1,person_index},'.html']);
%url = ['file:///C:\xampp\htdocs\ATM\UserSite',r];



%URL For host file debug
%url=['http://220.247.235.186/ATM/',r];


%URL For host file debug
%url=['http://faceatm.site88.net/SourcePHP/',r];


%URL For host file
url=['http://localhost/ATM/\SourcePHP/UserSite/',r];
%url=['http://localhost/ATM/\SourcePHP/'];
%url=['http://220.247.235.186/ATM/',r];
 web(url, '-browser')
 
 mkdir('C:\xampp\htdocs\ATM\FaceReg\datasync',r)
 
 
 

% Sync image to datasync folder
% Sync image to WEB PORTAL
Input_folder = '.\Capture\'; % folder with big images
Output_folder = 'C:\xampp\htdocs\ATM\FaceReg\datasync\captured\';
Output_folder2 = 'C:\xampp\htdocs\ATM\SourcePHP\images\';
D = dir([Input_folder '1.jpg']);
Inputs = {D.name}';
Outputs = Inputs; % preallocate
Outputs2 = Inputs; 

for k = 1:length(Inputs)
    X = imread([Input_folder Inputs{k}]);
    idx = k; % index number
    Outputs{k} = regexprep(Outputs{k}, 'big', ['small_' num2str(idx)]);
    Outputs2{k} = regexprep(Outputs2{k}, 'big', ['small_' num2str(idx)]);
    imwrite(X, [Output_folder Outputs{k}],'jpg')
    imwrite(X, [Output_folder2 Outputs2{k}],'jpg')
end





