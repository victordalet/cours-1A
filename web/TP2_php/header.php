<?php

echo"

<!DOCTYPE html>
<html>
<head>
	<meta charset='utf-8'>
	<meta name='viewport' content='width=device-width, initial-scale=1'>
	<link rel='stylesheet' type='text/css' href='style.css'>
	<title>SITE 3</title>
</head>
<body>
	<header>
	
		<nav>
			
			<ul>
				
				<li>".( (isset($_SESSION['email'])) ? "<a href='deconnexion.php'>Deconnexion</a>" :  "<a href='connexion.php'>Login</a>")."</li>

			</ul>

		</nav>

	</header>

";

?>