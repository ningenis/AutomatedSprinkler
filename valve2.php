<?php
$onoroff2 = $_GET["state2"]; // Declares the request from index.html as a variable
$textfile2 = "VALVE2state.txt"; // Declares the name and location of the .txt file
 
$fileLocation2 = "$textfile2";
$fh2 = fopen($fileLocation2, 'w   ') or die("Something went wrong!"); // Opens up the .txt file for writing and replaces any previous content
$stringToWrite2 = "$onoroff2"; // Write either 1 or 0 depending on request from index.html
fwrite($fh2, $stringToWrite2); // Writes it to the .txt file
fclose($fh2); 

header("Location: index.html"); // Return to frontend (index.html)
?>