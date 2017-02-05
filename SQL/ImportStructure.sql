-- MySQL dump 10.13  Distrib 5.7.12, for Win64 (x86_64)
--
-- Host: 158.69.120.198    Database: db23958
-- ------------------------------------------------------
-- Server version	5.6.28

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8 */;
/*!40103 SET @OLD_TIME_ZONE=@@TIME_ZONE */;
/*!40103 SET TIME_ZONE='+00:00' */;
/*!40014 SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;

--
-- Table structure for table `Players`
--

DROP TABLE IF EXISTS `Players`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `Players` (
  `ID` int(11) NOT NULL AUTO_INCREMENT,
  `Name` varchar(128) DEFAULT NULL,
  `GUID` varchar(128) DEFAULT NULL,
  `LastSeen` varchar(128) DEFAULT NULL,
  `IP` varchar(128) DEFAULT NULL,
  `Comment` varchar(128) DEFAULT NULL,
  PRIMARY KEY (`ID`),
  UNIQUE KEY `UniquePlayerEntry` (`GUID`,`IP`)
) ENGINE=InnoDB AUTO_INCREMENT=23653 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `XG_LogKill`
--

DROP TABLE IF EXISTS `XG_LogKill`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `XG_LogKill` (
  `id` int(11) unsigned NOT NULL AUTO_INCREMENT,
  `victimUID` varchar(32) NOT NULL,
  `victimName` varchar(512) NOT NULL,
  `killerUID` varchar(32) NOT NULL,
  `killerName` varchar(512) NOT NULL,
  `killerWeapon` varchar(512) NOT NULL,
  `killerVehicle` varchar(512) NOT NULL,
  `distance` varchar(512) NOT NULL,
  KEY `id` (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `account`
--

DROP TABLE IF EXISTS `account`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `account` (
  `uid` varchar(32) NOT NULL,
  `clan_id` int(11) unsigned DEFAULT NULL,
  `name` varchar(64) NOT NULL,
  `score` int(11) NOT NULL DEFAULT '5100',
  `kills` int(11) unsigned NOT NULL DEFAULT '0',
  `deaths` int(11) unsigned NOT NULL DEFAULT '0',
  `locker` int(11) NOT NULL DEFAULT '100000',
  `first_connect_at` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `last_connect_at` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `last_disconnect_at` datetime DEFAULT NULL,
  `total_connections` int(11) unsigned NOT NULL DEFAULT '1',
  `whitelisted` int(1) unsigned NOT NULL DEFAULT '0',
  PRIMARY KEY (`uid`),
  KEY `clan_id` (`clan_id`),
  CONSTRAINT `account_ibfk_1` FOREIGN KEY (`clan_id`) REFERENCES `clan` (`id`) ON DELETE SET NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `clan`
--

DROP TABLE IF EXISTS `clan`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `clan` (
  `id` int(11) unsigned NOT NULL AUTO_INCREMENT,
  `name` varchar(64) NOT NULL,
  `leader_uid` varchar(32) NOT NULL,
  `created_at` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`),
  KEY `leader_uid` (`leader_uid`),
  CONSTRAINT `clan_ibfk_1` FOREIGN KEY (`leader_uid`) REFERENCES `account` (`uid`) ON DELETE CASCADE
) ENGINE=InnoDB AUTO_INCREMENT=10 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `clan_map_marker`
--

DROP TABLE IF EXISTS `clan_map_marker`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `clan_map_marker` (
  `id` int(11) unsigned NOT NULL AUTO_INCREMENT,
  `clan_id` int(11) unsigned NOT NULL,
  `markerType` tinyint(4) NOT NULL DEFAULT '-1',
  `positionArr` text NOT NULL,
  `color` varchar(255) NOT NULL,
  `icon` varchar(255) NOT NULL,
  `iconSize` float unsigned NOT NULL,
  `label` varchar(255) NOT NULL,
  `labelSize` float unsigned NOT NULL,
  PRIMARY KEY (`id`),
  KEY `clan_id` (`clan_id`),
  CONSTRAINT `clan_map_marker_ibfk_1` FOREIGN KEY (`clan_id`) REFERENCES `clan` (`id`) ON DELETE CASCADE
) ENGINE=InnoDB AUTO_INCREMENT=7 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `construction`
--

DROP TABLE IF EXISTS `construction`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `construction` (
  `id` int(11) unsigned NOT NULL AUTO_INCREMENT,
  `class` varchar(64) NOT NULL,
  `account_uid` varchar(32) NOT NULL,
  `spawned_at` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `position_x` double NOT NULL DEFAULT '0',
  `position_y` double NOT NULL DEFAULT '0',
  `position_z` double NOT NULL DEFAULT '0',
  `direction_x` double NOT NULL DEFAULT '0',
  `direction_y` double NOT NULL DEFAULT '0',
  `direction_z` double NOT NULL DEFAULT '0',
  `up_x` double NOT NULL DEFAULT '0',
  `up_y` double NOT NULL DEFAULT '0',
  `up_z` double NOT NULL DEFAULT '0',
  `is_locked` tinyint(1) NOT NULL DEFAULT '0',
  `pin_code` varchar(6) NOT NULL DEFAULT '000000',
  `damage` tinyint(1) unsigned DEFAULT '0',
  `territory_id` int(11) unsigned DEFAULT NULL,
  `last_updated_at` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  `deleted_at` datetime DEFAULT NULL,
  PRIMARY KEY (`id`),
  KEY `account_uid` (`account_uid`),
  KEY `territory_id` (`territory_id`),
  CONSTRAINT `construction_ibfk_1` FOREIGN KEY (`account_uid`) REFERENCES `account` (`uid`) ON DELETE CASCADE,
  CONSTRAINT `construction_ibfk_2` FOREIGN KEY (`territory_id`) REFERENCES `territory` (`id`) ON DELETE CASCADE
) ENGINE=InnoDB AUTO_INCREMENT=966 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `container`
--

DROP TABLE IF EXISTS `container`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `container` (
  `id` int(11) unsigned NOT NULL AUTO_INCREMENT,
  `class` varchar(64) NOT NULL,
  `spawned_at` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `account_uid` varchar(32) DEFAULT NULL,
  `is_locked` tinyint(1) NOT NULL DEFAULT '0',
  `position_x` double NOT NULL DEFAULT '0',
  `position_y` double NOT NULL DEFAULT '0',
  `position_z` double NOT NULL DEFAULT '0',
  `direction_x` double NOT NULL DEFAULT '0',
  `direction_y` double NOT NULL DEFAULT '0',
  `direction_z` double NOT NULL DEFAULT '0',
  `up_x` double NOT NULL DEFAULT '0',
  `up_y` double NOT NULL DEFAULT '0',
  `up_z` double NOT NULL DEFAULT '1',
  `cargo_items` text NOT NULL,
  `cargo_magazines` text NOT NULL,
  `cargo_weapons` text NOT NULL,
  `cargo_container` text NOT NULL,
  `last_updated_at` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  `pin_code` varchar(6) NOT NULL DEFAULT '000000',
  `territory_id` int(11) unsigned DEFAULT NULL,
  `deleted_at` datetime DEFAULT NULL,
  `money` int(11) unsigned NOT NULL DEFAULT '0',
  `abandoned` datetime DEFAULT NULL,
  PRIMARY KEY (`id`),
  KEY `account_uid` (`account_uid`),
  KEY `territory_id` (`territory_id`),
  CONSTRAINT `container_ibfk_1` FOREIGN KEY (`account_uid`) REFERENCES `account` (`uid`) ON DELETE CASCADE,
  CONSTRAINT `container_ibfk_2` FOREIGN KEY (`territory_id`) REFERENCES `territory` (`id`) ON DELETE CASCADE
) ENGINE=InnoDB AUTO_INCREMENT=155 DEFAULT CHARSET=utf8 ROW_FORMAT=COMPACT;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `infistar_logs`
--

DROP TABLE IF EXISTS `infistar_logs`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `infistar_logs` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `logname` char(50) NOT NULL,
  `logentry` text NOT NULL,
  `time` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=151195 DEFAULT CHARSET=latin1;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `kills`
--

DROP TABLE IF EXISTS `kills`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `kills` (
  `id` int(11) unsigned NOT NULL AUTO_INCREMENT COMMENT 'Identification number of each kill',
  `killer_name` varchar(50) NOT NULL DEFAULT 'Unkown' COMMENT 'Name of the Killer',
  `killer_uid` varchar(32) DEFAULT NULL COMMENT 'UID of the Killer',
  `victim_name` varchar(50) NOT NULL DEFAULT 'Unkown' COMMENT 'Name of the Person who died',
  `victim_uid` varchar(32) DEFAULT NULL COMMENT 'UID of the Victim',
  `weapon` varchar(50) NOT NULL DEFAULT 'Unkown' COMMENT 'Name of the weapon/vehicle or item used to kill',
  `distance` varchar(10) NOT NULL DEFAULT '0' COMMENT 'Number of distance in meters between the killer and the victim',
  `respect` varchar(10) DEFAULT '0' COMMENT 'Number of respect the killer earned',
  `died_at` datetime DEFAULT '0000-00-00 00:00:00' COMMENT 'Date and time the victim was killed',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=285 DEFAULT CHARSET=utf8 COMMENT='Kill Feeds by GR8\r\nWith Victom, Killer, distance and gun';
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `player`
--

DROP TABLE IF EXISTS `player`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `player` (
  `id` int(11) unsigned NOT NULL AUTO_INCREMENT,
  `name` varchar(64) NOT NULL,
  `account_uid` varchar(32) NOT NULL,
  `money` int(11) unsigned NOT NULL DEFAULT '0',
  `damage` double unsigned NOT NULL DEFAULT '0',
  `hunger` double unsigned NOT NULL DEFAULT '100',
  `thirst` double unsigned NOT NULL DEFAULT '100',
  `alcohol` double unsigned NOT NULL DEFAULT '0',
  `temperature` double NOT NULL DEFAULT '37',
  `wetness` double unsigned NOT NULL DEFAULT '0',
  `oxygen_remaining` double unsigned NOT NULL DEFAULT '1',
  `bleeding_remaining` double unsigned NOT NULL DEFAULT '0',
  `hitpoints` varchar(255) NOT NULL DEFAULT '[]',
  `direction` double NOT NULL DEFAULT '0',
  `position_x` double NOT NULL DEFAULT '0',
  `position_y` double NOT NULL DEFAULT '0',
  `position_z` double NOT NULL DEFAULT '0',
  `spawned_at` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `assigned_items` text NOT NULL,
  `backpack` varchar(64) NOT NULL,
  `backpack_items` text NOT NULL,
  `backpack_magazines` text NOT NULL,
  `backpack_weapons` text NOT NULL,
  `current_weapon` varchar(64) NOT NULL,
  `goggles` varchar(64) NOT NULL,
  `handgun_items` text NOT NULL,
  `handgun_weapon` varchar(64) NOT NULL,
  `headgear` varchar(64) NOT NULL,
  `binocular` varchar(64) NOT NULL,
  `loaded_magazines` text NOT NULL,
  `primary_weapon` varchar(64) NOT NULL,
  `primary_weapon_items` text NOT NULL,
  `secondary_weapon` varchar(64) NOT NULL,
  `secondary_weapon_items` text NOT NULL,
  `uniform` varchar(64) NOT NULL,
  `uniform_items` text NOT NULL,
  `uniform_magazines` text NOT NULL,
  `uniform_weapons` text NOT NULL,
  `vest` varchar(64) NOT NULL,
  `vest_items` text NOT NULL,
  `vest_magazines` text NOT NULL,
  `vest_weapons` text NOT NULL,
  `last_updated_at` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`),
  KEY `player_uid` (`account_uid`),
  CONSTRAINT `player_ibfk_1` FOREIGN KEY (`account_uid`) REFERENCES `account` (`uid`) ON DELETE CASCADE
) ENGINE=InnoDB AUTO_INCREMENT=846 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `player_history`
--

DROP TABLE IF EXISTS `player_history`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `player_history` (
  `id` int(11) unsigned NOT NULL AUTO_INCREMENT,
  `account_uid` varchar(32) NOT NULL,
  `name` varchar(64) NOT NULL,
  `died_at` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `position_x` double NOT NULL,
  `position_y` double NOT NULL,
  `position_z` double NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=760 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `territory`
--

DROP TABLE IF EXISTS `territory`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `territory` (
  `id` int(11) unsigned NOT NULL AUTO_INCREMENT,
  `owner_uid` varchar(32) NOT NULL,
  `name` varchar(64) NOT NULL,
  `position_x` double NOT NULL,
  `position_y` double NOT NULL,
  `position_z` double NOT NULL,
  `radius` double NOT NULL,
  `level` int(11) NOT NULL,
  `flag_texture` varchar(255) NOT NULL,
  `flag_stolen` tinyint(1) NOT NULL DEFAULT '0',
  `flag_stolen_by_uid` varchar(32) DEFAULT NULL,
  `flag_stolen_at` datetime DEFAULT NULL,
  `created_at` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `last_paid_at` datetime DEFAULT CURRENT_TIMESTAMP,
  `xm8_protectionmoney_notified` tinyint(1) NOT NULL DEFAULT '0',
  `build_rights` varchar(640) NOT NULL DEFAULT '0',
  `moderators` varchar(320) NOT NULL DEFAULT '0',
  `deleted_at` datetime DEFAULT NULL,
  PRIMARY KEY (`id`),
  KEY `owner_uid` (`owner_uid`),
  KEY `flag_stolen_by_uid` (`flag_stolen_by_uid`),
  CONSTRAINT `territory_ibfk_1` FOREIGN KEY (`owner_uid`) REFERENCES `account` (`uid`) ON DELETE CASCADE,
  CONSTRAINT `territory_ibfk_2` FOREIGN KEY (`flag_stolen_by_uid`) REFERENCES `account` (`uid`) ON DELETE SET NULL
) ENGINE=InnoDB AUTO_INCREMENT=12 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `trader_log`
--

DROP TABLE IF EXISTS `trader_log`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `trader_log` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `playerid` varchar(50) DEFAULT NULL,
  `item_sold` varchar(100) DEFAULT NULL,
  `poptabs` int(50) DEFAULT NULL,
  `respect` varchar(50) DEFAULT NULL,
  `time_sold` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  KEY `Index 1` (`id`),
  KEY `Index 2` (`item_sold`),
  KEY `Index 3` (`playerid`),
  KEY `Index 5` (`time_sold`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `trader_recycle_log`
--

DROP TABLE IF EXISTS `trader_recycle_log`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `trader_recycle_log` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `playerid` varchar(50) DEFAULT NULL,
  `item_sold` varchar(100) DEFAULT NULL,
  `poptabs` int(50) DEFAULT NULL,
  `respect` varchar(50) DEFAULT NULL,
  `transactionid` int(100) DEFAULT NULL,
  `vehicleclass` varchar(50) DEFAULT NULL,
  `soldvehicle` varchar(50) DEFAULT NULL,
  `time_sold` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  KEY `Index 1` (`id`),
  KEY `Index 2` (`item_sold`),
  KEY `Index 3` (`playerid`),
  KEY `Index 5` (`time_sold`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `vehicle`
--

DROP TABLE IF EXISTS `vehicle`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `vehicle` (
  `id` int(11) unsigned NOT NULL AUTO_INCREMENT,
  `class` varchar(64) NOT NULL,
  `spawned_at` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `account_uid` varchar(32) DEFAULT NULL,
  `is_locked` tinyint(1) NOT NULL DEFAULT '0',
  `fuel` double unsigned NOT NULL DEFAULT '0',
  `damage` double unsigned NOT NULL DEFAULT '0',
  `hitpoints` text NOT NULL,
  `position_x` double NOT NULL DEFAULT '0',
  `position_y` double NOT NULL DEFAULT '0',
  `position_z` double NOT NULL DEFAULT '0',
  `direction_x` double NOT NULL DEFAULT '0',
  `direction_y` double NOT NULL DEFAULT '0',
  `direction_z` double NOT NULL DEFAULT '0',
  `up_x` double NOT NULL DEFAULT '0',
  `up_y` double NOT NULL DEFAULT '0',
  `up_z` double NOT NULL DEFAULT '1',
  `cargo_items` text NOT NULL,
  `cargo_magazines` text NOT NULL,
  `cargo_weapons` text NOT NULL,
  `cargo_container` text NOT NULL,
  `last_updated_at` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
  `pin_code` varchar(6) NOT NULL DEFAULT '000000',
  `deleted_at` datetime DEFAULT NULL,
  `money` int(11) unsigned NOT NULL DEFAULT '0',
  `vehicle_texture` text NOT NULL,
  `ammo` text NOT NULL,
  `territory_id` int(11) unsigned DEFAULT NULL,
  PRIMARY KEY (`id`),
  KEY `account_uid` (`account_uid`),
  KEY `vehicle_ibfk_2` (`territory_id`),
  CONSTRAINT `vehicle_ibfk_1` FOREIGN KEY (`account_uid`) REFERENCES `account` (`uid`) ON DELETE CASCADE,
  CONSTRAINT `vehicle_ibfk_2` FOREIGN KEY (`territory_id`) REFERENCES `territory` (`id`) ON DELETE CASCADE
) ENGINE=InnoDB AUTO_INCREMENT=134 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Table structure for table `virtual_garage`
--

DROP TABLE IF EXISTS `virtual_garage`;
/*!40101 SET @saved_cs_client     = @@character_set_client */;
/*!40101 SET character_set_client = utf8 */;
CREATE TABLE `virtual_garage` (
  `id` int(11) unsigned NOT NULL AUTO_INCREMENT,
  `class` varchar(64) NOT NULL,
  `account_uid` varchar(32) DEFAULT NULL,
  `fuel` double unsigned NOT NULL DEFAULT '0',
  `damage` double unsigned NOT NULL DEFAULT '0',
  `hitpoints` text NOT NULL,
  `pin_code` varchar(6) NOT NULL DEFAULT '000000',
  `position_x` double NOT NULL DEFAULT '0',
  `position_y` double NOT NULL DEFAULT '0',
  `position_z` double NOT NULL DEFAULT '0',
  `direction_x` double NOT NULL DEFAULT '0',
  `direction_y` double NOT NULL DEFAULT '0',
  `direction_z` double NOT NULL DEFAULT '0',
  `up_x` double NOT NULL DEFAULT '0',
  `up_y` double NOT NULL DEFAULT '0',
  `up_z` double NOT NULL DEFAULT '1',
  `vehicle_texture` text NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=889 DEFAULT CHARSET=utf8;
/*!40101 SET character_set_client = @saved_cs_client */;

--
-- Dumping events for database 'db23958'
--

--
-- Dumping routines for database 'db23958'
--
/*!40103 SET TIME_ZONE=@OLD_TIME_ZONE */;

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
/*!40014 SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
/*!40111 SET SQL_NOTES=@OLD_SQL_NOTES */;

-- Dump completed on 2017-01-11 17:40:50
