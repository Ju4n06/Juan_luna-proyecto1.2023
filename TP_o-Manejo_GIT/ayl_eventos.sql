-- phpMyAdmin SQL Dump
-- version 5.0.2
-- https://www.phpmyadmin.net/
--
-- Servidor: 127.0.0.1
-- Tiempo de generación: 18-09-2021 a las 03:38:38
-- Versión del servidor: 10.4.11-MariaDB
-- Versión de PHP: 7.2.31

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Base de datos: `ayl_eventos`
--
CREATE DATABASE IF NOT EXISTS `ayl_eventos` DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci;
USE `ayl_eventos`;

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `combos`
--

CREATE TABLE `combos` (
  `id` int(11) NOT NULL,
  `cantVariedades` int(11) NOT NULL,
  `cantEntradas` int(11) NOT NULL,
  `cantEntradasEspeciales` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Volcado de datos para la tabla `combos`
--

INSERT INTO `combos` (`id`, `cantVariedades`, `cantEntradas`, `cantEntradasEspeciales`) VALUES
(1, 8, 0, 0),
(2, 10, 1, 0),
(3, 12, 2, 0),
(4, 14, 2, 1);

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `comentarios`
--

CREATE TABLE `comentarios` (
  `id` int(11) NOT NULL,
  `titulo` varchar(60) NOT NULL,
  `comentario` text NOT NULL,
  `nombre` varchar(60) NOT NULL,
  `fecha` date NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Volcado de datos para la tabla `comentarios`
--

INSERT INTO `comentarios` (`id`, `titulo`, `comentario`, `nombre`, `fecha`) VALUES
(2, 'Excelente', 'Muy buen servicio.', 'Agustin', '0000-00-00'),
(3, 'Excelente', 'Muy buen servicio.', 'Agustin', '0000-00-00'),
(4, 'Muy bueno', 'comentariocomentariocomentario', 'Carlos', '2021-09-07'),
(5, 'Excelente!!!', 'Espectacular todo!! cumpleaños para 60 chicos!! muy buen precioso por la calidad y calidez del servicio!! muy recomendable!! gracias!!!!', 'Laura', '2020-10-10'),
(6, 'askmdkask', 'kdfakafsdpkapfk1', 'Juan', '2021-09-10'),
(7, 'fafsda', 'sadasdsda', 'RODRIGO', '2021-09-21'),
(8, 'gfdsdfsgsfgd', 'fgdfgdsfdgfgds', 'Karina', '2021-09-01');

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `entradas`
--

CREATE TABLE `entradas` (
  `id` int(1) NOT NULL,
  `entrada` varchar(45) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Volcado de datos para la tabla `entradas`
--

INSERT INTO `entradas` (`id`, `entrada`) VALUES
(1, 'Empanadas'),
(2, 'Canastitas'),
(3, 'Chips de Jamón y Queso'),
(4, 'Medialunas de Jamón y Queso'),
(5, 'Salchichitas Envueltas');

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `entradasespeciales`
--

CREATE TABLE `entradasespeciales` (
  `id` int(11) NOT NULL,
  `entradaEspecial` varchar(45) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Volcado de datos para la tabla `entradasespeciales`
--

INSERT INTO `entradasespeciales` (`id`, `entradaEspecial`) VALUES
(1, 'Sandwiches de Matambre'),
(2, 'Sandwiches de Vitel Toné'),
(3, 'Arrollado de Pollo');

-- --------------------------------------------------------

