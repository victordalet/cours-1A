<?php



	if (empty($_POST['mail'])) {
		header('Location: inscription.php?msg=email vide');
		exit;
	}

	if (empty($_POST['password'])) {
		header('Location: inscription.php?msg=mdp vide');
		exit;
	}

	if (strlen($_POST['password']) < 6) {
		header('Location: inscription.php?msg=mdp trop courts');
		exit;
	}

	if (strlen($_POST['password']) > 12) {
		header('Location: inscription.php?msg=mdp trop long');
		exit;
	}

	if (!filter_var($_POST['mail'], FILTER_VALIDATE_EMAIL)) {
		header('Location: inscription.php?msg=email non valide');
		exit;
	}

	if (!extension_loaded ('PDO')) {
		header('Location: inscription.php?msg= PDO KO');
		exit;
	}

    $mail = $_POST['mail'];
    $pass = hash("sha512",$_POST["password"]);

    try {
        $bdd = new PDO("mysql:host=localhost;dbname=site3", "root", "");
        $req = $bdd->prepare("SELECT email FROM users");
        $array_email = $req->fetchAll();
        foreach ($array_email as $key => $value) {
            if ($value == $mail) {
                header("Location: inscription.php?msg=mail deja utilise");
            }
        }
        $request = $bdd->prepare("INSERT INTO users(email,password) VALUES ($mail,$pass)");
        $request->execute();
    }

    catch (Exception $e) {
        header('Location: inscription.php?msg=bug bdd');
        exit;
    }

    setcookie('mail',$_POST['mail'],time() + 365*24*3600);
    session_start();
    $_SESSION['email'] = "l'utilisateur est connecté" ;
    header('Location: index.php');
    exit;



?>