<?php

	function main() {
		$valid_pseudo = "admin";
		$valid_password = "php";
		$user_pseudo = $_POST['pseudo'];
		$user_password = $_POST['password'];

		if ($valid_pseudo == $user_pseudo & $user_password == $valid_password) {
			echo "Bonjour, vous êtes connecté";
		}
		else {
			echo "identifiants inconnus";
			echo "<a href='index.php'>Back to home.</a>";
		}
	}

	
	echo "		
		<!DOCTYPE html>
			<html>
			<head>
				<meta charset='utf-8'>
				<meta name='viewport' content='width=device-width, initial-scale=1'>
				<link rel='stylesheet' type='text/css' href='style.css'>
				<title>TP formulaire</title>
			</head>
			<body>".main()."</body></hmtl>";


?>
