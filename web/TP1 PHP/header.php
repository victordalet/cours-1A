<?php
	$name = "HOME";
	$links = ["Accueil" => "index.php", "Contact" => "contact.php", "Blog" => "blog.php"];

	function writeNavLine($name, $url) {
		return "<a href='".$url."''><li>".$name."</li></a>";
	}

	echo "<!DOCTYPE html>
			<html>
			<head>
				<meta charset='utf-8'>
				<meta name='viewport' content='width=device-width, initial-scale=1'>
				<title>".$name."</title>
				<link rel='stylesheet' type='text/css' href='site1/style.css'>
				<style>
					header,footer {
						width: 100vw;
						background : orange;
						color : #fff;
						text-align : center;
					}
					header a {
						color : #fff;
						text-decoration : none;
					}
					footer {
						position : absolute;
						bottom: 0px;
					}
				</style>
			</head>
			<body>
				<header>
					<nav>
						<ul>";
						foreach ($links as $key => $value) {
							echo writeNavLine($key,$value);
						}

						echo"</ul>
					</nav>
				</header>
			";




?>

