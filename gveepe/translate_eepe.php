<?php
/*

phPo Translator - Version 0.1.1
Copyright 2008 by Andrew Ferguson (andrew@fergcorp.com)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/


?>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Translate eePe</title>
</head>

<body>
<h1>Translate eePe</h1>
<?php

$emailTo = "erezraviv@gmail.com"; // the address where the errors reports and translations should be sent to

$poFileName = "http://eepe.googlecode.com/svn/trunk/src/eepe_.po";
$poFileArray = @file($poFileName) or die("No such file!");


if(isset($_POST['Submit'])){

foreach($poFileArray as $key=>$value){
	if(isset($_POST[$key]))
		$translatedPo[$key]="msgstr \"".$_POST[$key]."\"";
	else
		$translatedPo[$key]=$poFileArray[$key];

}

	$prepareEmail = "Name: ".$_POST['name']."\r\n";
	$prepareEmail .= "Email: ".$_POST['email']."\r\n";
	$prepareEmail .= "URL: ".$_POST['url']."\r\n";
	$prepareEmail .= "Language: ".$_POST['lang']."\r\n";


foreach($translatedPo as $key=>$value){
	//echo $value."<br />";
	$prepareEmail .= $value;
}

mail($emailTo, "Translated: $poFileName", $prepareEmail);

echo "<p>Thanks for translating!</p>";

}
else{

	echo '<form action="" method="post">';

	echo "<p>What is your name (for credit):<br />";
	echo '<input name="name" type="text" /></p>';

	echo "<p>What is your email address:<br />";
	echo '<input name="email" type="text" /></p>';

	echo "<p>Do you have a url that I should link to when I credit you:<br />";
	echo '<input name="url" type="text" /></p>';

	echo "<p>What language are you translating to:<br />";
	echo '<input name="lang" type="text" /></p>';

	echo "<hr><p>Translating <strong>$poFileName</strong>:</p>";

	foreach($poFileArray as $key=>$value){
		if(preg_match("/msgid/", $value)){
			if(preg_match("/msgid \"\"/", $value)){}
			else{
				echo "<p>";
				echo htmlentities(preg_replace("/^msgid \"(.*?)\"$/", "\\1", $value));
				echo "<br />";
				echo "<textarea name='".($key+1)."' cols='80' rows='3'></textarea>";
				echo "</p>";
				$msgidArray[$key+1] = $value;
			}
		}
	}
	echo '<input name="Submit" type="submit" value="Submit" />';
	echo "</form>";

}

?>
<br><br>
<font size=-1>
<p></i>Based on <a href="http://andrewferguson.net/2008/03/21/phpo-translator-online-po-translator/">phpo-translator-online-po-translator</a></i></p>
</font>
</body>
</html>
