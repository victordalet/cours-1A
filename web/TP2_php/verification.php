<?php

	function give_data($msg) {
		$url = "log.txt";
		$fic = fopen($url, "a+");
		$date = date('l jS \of F Y h:i:s A ');
		$new_data = "\n".$date.$msg;
		fputs($fic ,$new_data);
		fclose($fic);
	}

	function main() {

		if (!empty($_POST['mail'])) {
			setcookie('mail',$_POST['mail'],time() + 365*24*3600);
		}

		if (empty($_POST['mail']) && empty($_POST['password'])) {
			header('Location: connexion.php?msg=email ou password vide ');
			exit;
		}

		if (!filter_var($_POST['mail'], FILTER_VALIDATE_EMAIL)) {
			header('Location: connexion.php?msg=email non valide');
			exit;
		}

        $bdd = new PDO("mysql:host=localhost;dbname=site3", "root", "");
        $req = $bdd->prepare("SELECT email FROM table");
        $array_email = $req->fetchAll();
        $reqP = $bdd->prepare("SELECT password FROM table");
        $array_pass = $reqP->fetchAll();
        $mdp = $_POST["password"];
        foreach ($array_email as $key => $value) {
            if ($value == $_POST["mail"]) {
                if ( $array_pass[$key] == hash("sha512, $mdp")) {
                    session_start();
                    $_SESSION['email'] = "l'utilisateur est connecté" ;
                    give_data("connexion reussis");
                    header('Location: index.php');
                    exit;
                }
                else {
                    header("Location: connexion.php?msg=mdp eronne");
                    give_data("connexion echoue");
                    exit;
                }
            }
        }

		header('Location: connexion.php?msg=email eronne');
		give_data("connexion echoue");
		exit;
		

	}

	main();

?>