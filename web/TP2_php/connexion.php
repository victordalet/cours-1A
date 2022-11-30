<?php
	include 'header.php';
	echo "

	<form action='verification.php' method='POST'>
		<input type='text' name='mail' placeholder='mail'>
		<input type='text' name='password' placeholder='password'>
		<input  type='submit' value='Login'>
	</form>

	";
	if (isset($_GET['msg'])) {
		echo "<div class='msg'>⚠️".$_GET['msg']."</div>";
	}
	include 'footer.php';


?>