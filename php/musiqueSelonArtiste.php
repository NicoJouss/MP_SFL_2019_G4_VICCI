<?php 

$bdd = new PDO('mysql:host=127.0.0.1;dbname=vicci', 'root', '');

$req = $bdd->prepare("SELECT * FROM `playlist`");
$req->execute();

$response[] = array();

$response["success"] = false;

while($info = $req->fetch()){
	$response["success"] = true;
	$response["ID"] = $info["ID"];
	$response["Artiste"] = $info["Artiste"];
}

echo json_encode($response);

?>
