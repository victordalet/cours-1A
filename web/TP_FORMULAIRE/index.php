<?php

	function display_message() {
		if (isset($_POST['message']) && !empty($_POST['message'])) {
			echo htmlspecialchars($_POST['message']);
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
		<body>

			<main>
				
				<form action='index.php' method='POST'>
					<input type='text' name='message' placeholder='your text'>
					<input type='submit' value='submit'>
				</form>

				<div>
					 ".display_message()." 
				</div>


				<form action='check.php' method='POST'>
					<input type='text' name='pseudo' placeholder='pseudo'>
					<input type='text' name='password' placeholder='password'>
					<input  type='submit' value='Login'>
				</form>

			</main>

		</body>
		</html>

	";

?>

