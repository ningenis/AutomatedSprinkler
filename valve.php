<?php
$onoroff = $_GET["state1"]; // Deklarasi permintaan untuk mendapatkan nilai variabel
$textfile = "VALVE1state.txt"; // Deklarasi nama file txt
 
$fileLocation = "$textfile";
$fh = fopen($fileLocation, 'w   ') or die("Something went wrong!"); // Buka file txt untuk ditulis
$stringToWrite = "$onoroff"; // Tulis string ke file txt
fwrite($fh, $stringToWrite); 
fclose($fh); 

header("Location: index.html"); // Kembali ke index.html
?>