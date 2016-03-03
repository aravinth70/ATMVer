 
<?php
$file = 'C:\xampp\htdocs\ATM\FaceReg\data\aravinth\1.jpg';
$newfile = 'C:\xampp\htdocs\ATM\FaceReg\datasync\aravinth\1.jpg';

if (!copy($file, $newfile)) {
    echo "failed to copy";
}
