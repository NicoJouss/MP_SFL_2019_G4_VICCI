-- phpMyAdmin SQL Dump
-- version 4.9.2
-- https://www.phpmyadmin.net/
--
-- Hôte : 127.0.0.1:3306
-- Généré le :  Dim 24 mai 2020 à 15:53
-- Version du serveur :  10.4.10-MariaDB
-- Version de PHP :  7.3.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Base de données :  `vicci`
--

-- --------------------------------------------------------

--
-- Structure de la table `météo`
--

DROP TABLE IF EXISTS `météo`;
CREATE TABLE IF NOT EXISTS `météo` (
  `Temps` int(11) NOT NULL,
  `Température` int(11) NOT NULL,
  `ID` int(11) NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Structure de la table `playlist`
--

DROP TABLE IF EXISTS `playlist`;
CREATE TABLE IF NOT EXISTS `playlist` (
  `ID` int(11) NOT NULL,
  `Nom` text NOT NULL,
  `Artiste` text NOT NULL,
  `Durée` double NOT NULL,
  `Genre` text NOT NULL
) ENGINE=MyISAM DEFAULT CHARSET=latin1;

--
-- Déchargement des données de la table `playlist`
--

INSERT INTO `playlist` (`ID`, `Nom`, `Artiste`, `Durée`, `Genre`) VALUES
(1, 'Rap God', 'Eminem', 6, 'Rap'),
(2, 'Back In Black', 'AC/DC', 4, 'Rock'),
(3, 'Désaccordé', 'Vald', 4, 'Rap'),
(4, 'California Soul', 'Marlena Shaw', 3, 'Jazz'),
(5, 'And The Beat Goes On', 'The Whispers', 5, 'Soul'),
(6, 'Give Me The Night', 'George Benson', 5, 'Soul'),
(7, 'The eye of Truth', 'Driver', 3, 'Hip-Hop'),
(8, 'You ain\'t ready', 'Skillet', 3, 'Rock'),
(9, 'Black Betty', 'Ram Jam', 2, 'Rock'),
(10, 'Africa', 'Toto', 4, 'Pop'),
(11, 'Till I Collapse', 'Eminem', 5, 'Rap'),
(12, 'September', 'Earth Wind and Fire', 3, 'Pop');
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
