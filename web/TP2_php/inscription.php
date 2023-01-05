<?php
	
	include 'header.php';

	echo "

		<form action='verification_inscription.php' method='POST'>
			<input type='text' name='mail' placeholder='mail'>
			<input type='text' name='password' placeholder='password'>
			<input  type='submit' value='Login'>
		</form>
		<br>
		<a href='connexion.php'>Connexion</a>

	";

	if (isset($_GET['msg'])) {
		echo "<div class='msg'>⚠️".$_GET['msg']."</div>";
	}

	include 'footer.php';


?>

