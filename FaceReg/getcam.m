

function I = getcam()
vid = videoinput('winvideo', 1, 'RGB24_320x240');
preview(vid);
choice=menu('Capture Frame',...
            '   Capture   ',...
            '     Exit    ');
I = [];        
if (choice == 1)
    I = getsnapshot(vid);
    try
        I = rgb2gray(I);  % convert to grey because to extract the feature 
    end
    I = I(8:231,68:251); % capture the face zoom
    I = imresize(I,[112 92]); % resiz it
end
closepreview(vid);