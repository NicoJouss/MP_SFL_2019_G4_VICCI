-- phpMyAdmin SQL Dump
-- version 4.9.2
-- https://www.phpmyadmin.net/
--
-- Hôte : 127.0.0.1:3306
-- Généré le :  mer. 03 juin 2020 à 09:53
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
-- Structure de la table `playlist`
--

DROP TABLE IF EXISTS `playlist`;
CREATE TABLE IF NOT EXISTS `playlist` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `Nom` text NOT NULL,
  `Genre` text NOT NULL,
  `Artiste` text NOT NULL,
  `Durée` double NOT NULL,
  PRIMARY KEY (`ID`) USING BTREE
) ENGINE=MyISAM AUTO_INCREMENT=13 DEFAULT CHARSET=latin1;

--
-- Déchargement des données de la table `playlist`
--

INSERT INTO `playlist` (`ID`, `Nom`, `Genre`, `Artiste`, `Durée`) VALUES
(1, 'Rap God', 'Rap', 'Eminem', 6.1),
(2, 'Till I Collapse', 'Rap', 'Eminem', 4.58),
(3, 'California Soul', 'Jazz', 'Marlena Shaw', 3.02),
(4, 'And the beats goes on', 'Soul', 'The Whispers', 4.57),
(5, 'Back In Black', 'Rock', 'AC/DC', 4.15),
(6, 'Thunderstruck', 'Rock', 'AC/DC', 4.53),
(7, 'Believer', 'Pop Rock', 'Imagine Dragons', 3.37),
(8, 'Natural', 'Pop Rock', 'Imagine Dragons', 3.1),
(9, 'Africa', 'Pop', 'Toto', 4.35),
(10, 'The eye of truth', 'Hip-Hop', 'Driver', 2.42),
(11, 'Come and get your love', 'Classic Rock', 'Redbone', 3.27),
(12, 'September', 'Pop', 'Earth Wind and Fire', 3.36);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
