<?php
	
	session_start();
	
	include 'header.php';

	if (isset($_COOKIE['mail'])) {
		echo "Voici votre contenu privé";
	}
	else {
		echo "Contenu non disponible";
	}

	if (isset($_SESSION['email'])) {
		echo $_SESSION['email'];
	}


	include 'footer.php';
	

?>