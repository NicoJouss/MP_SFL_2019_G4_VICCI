<?php 

$bdd = new PDO('mysql:host=10.6.0.1;dbname=meteo', 'meteo', 'Nantes44');

$req = $bdd->prepare("SELECT * FROM `trame` WHERE artiste = ? ORDER BY `date_heure` DESC LIMIT 1");
$req->execute();

$response[] = array();

$response["success"] = false;

while($info = $req->fetch()){
	$response["success"] = true;
	$response["id"] = $info["id"];
	$response["date"] = $info["date_heure"];
	$response["trame"] = $info["trame"];
}

echo json_encode($response);

?>
