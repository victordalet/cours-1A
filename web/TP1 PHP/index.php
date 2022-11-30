<?php
	/* *********************************************************************** */
	/*                                                                         */
	/* OBJECTIVE : TP 1 PHP                    #####      ###    ###    #      */
	/* AUTHOR :  VICTOR DALET                  #         #      #       #      */
	/* CREATED : 03 11 2022                    ####      #      #  ##   #      */
	/* UPDATE  : 03 11 2022                    #         #      #   #   #      */
	/*                                         ####    ###      #####   #.fr   */
	/* *********************************************************************** */

	include 'header.php';
	$message  = "Salut";
	$age = 17;
	$table = ["Banane", "Fraise", "Orange", "Kiwi"];
	//var_dump($table);
	echo "<h1>".$message."</h1>";
	echo "<h2>Tu as ".$age."an".(($age>1) ? "s." : ".")."</h2>";
	if ($age<18){
		echo "<h2>Tu es mineur.</h2>";
	}
	else {
		echo "<h2>Tu es majeur.</h2>";
	}
	echo "<ul>";
	foreach ($table as $key => $value) {
		echo "<li>".$value."</li>";
	}
	echo "</ul>";
	//table
	echo"	<table>
				<thead>
				<tr>
					<th>NOM</th>
					<th>COULEUR</th>
				</tr>
			</thead>
			<tbody>";
	foreach ($table as $key => $value){
		switch ($value) {
			case 'Banane':
				$couleur = "yellow";
				break;
			case 'Fraise':
				$couleur = 'red';
				break;
			case 'Orange':
				$couleur = 'orange';
				break;
			case 'Kiwi':
				$couleur = "green";
				break;
			
		}
		echo "	<tr>
					<td>".$value."</td>
					<td style='color:".$couleur."'>".$couleur."</td>
				</tr>
					";
	}
	echo"
			</tbody>
			</table>";

	$user1  = ["name"=>"dalet","firstname"=>"victor","email"=>"victordalet@protonmail.com"];
	$user2  = ["name"=>"dalet","firstname"=>"victor","email"=>"victordalet@protonmail.com"];
	$user3  = ["name"=>"dalet","firstname"=>"victor","email"=>"victordalet@protonmail.com"];

	echo"	<div class='container-table'>
			<table>
				<thead>
				<tr>
					<th>Name</th>
					<th>Firstname</th>
					<th>Email</th>
				</tr>
			</thead>
			<tbody>";
	echo "<tr>";
	echo"<td>".$user1["name"]."</td>";
	echo"<td>".$user1["firstname"]."</td>";
	echo"<td><a href=mailto:".$user1["email"].">".$user1["email"]."</a></td>";
	echo"</tr>";
	echo "<tr>";
	echo"<td>".$user2["name"]."</td>";
	echo"<td>".$user2["firstname"]."</td>";
	echo"<td><a href=mailto:".$user2["email"].">".$user2["email"]."</a></td>";
	echo"</tr>";
	echo "<tr>";
	echo"<td>".$user3["name"]."</td>";
	echo"<td>".$user3["firstname"]."</td>";
	echo"<td><a href=mailto:".$user3["email"].">".$user3["email"]."</a></td>";
	echo"</tr></table></div>";


	include "footer.php";


?>