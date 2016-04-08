-- phpMyAdmin SQL Dump
-- version 4.5.1
-- http://www.phpmyadmin.net
--
-- Host: 127.0.0.1
-- Generation Time: Apr 08, 2016 at 08:34 PM
-- Server version: 10.1.10-MariaDB
-- PHP Version: 5.5.33

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `atm`
--

-- --------------------------------------------------------

--
-- Table structure for table `log`
--

CREATE TABLE `log` (
  `id` int(11) NOT NULL,
  `PIN` int(11) NOT NULL,
  `FirstName` varchar(45) NOT NULL,
  `LogDate` timestamp NULL DEFAULT NULL,
  `Stamp` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `IPAddress` text NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `logentry`
--

CREATE TABLE `logentry` (
  `LEID` int(11) NOT NULL,
  `LID` int(11) NOT NULL,
  `LEFristName` varchar(200) NOT NULL,
  `LEDate` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `LEPIN` int(11) NOT NULL,
  `LEBalance` float NOT NULL,
  `IPAddress` text NOT NULL,
  `Location` text NOT NULL,
  `LEAccount` varchar(200) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `payment`
--

CREATE TABLE `payment` (
  `PID` int(11) NOT NULL,
  `PCompany` varchar(11) NOT NULL,
  `PAccount` int(11) NOT NULL,
  `PAmount` int(11) NOT NULL,
  `PName` varchar(200) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `verification`
--

CREATE TABLE `verification` (
  `id` int(11) NOT NULL,
  `FirstName` varchar(45) NOT NULL,
  `LastName` varchar(45) NOT NULL,
  `Address` varchar(200) DEFAULT NULL,
  `Contact` int(11) NOT NULL,
  `Mail` varchar(100) DEFAULT NULL,
  `PIN` int(11) NOT NULL,
  `Balance` float DEFAULT NULL,
  `Account` varchar(200) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `verification`
--

INSERT INTO `verification` (`id`, `FirstName`, `LastName`, `Address`, `Contact`, `Mail`, `PIN`, `Balance`, `Account`) VALUES
(1, 'Aravinth', 'Naga', 'B9/7 Mattakuliya', 773399054, 'aragetride@gmail.com', 1231, 90, '0'),
(2, 'NIro', 'Mariadas', '12', 77, 'niro@gmail.com', 1577, 6889, '0'),
(3, 'Sanjeewa', 'Herath', '42 lane wellawatta', 773659713, 'sanjeewa@debugisp.net', 12211, 50000, ''),
(15, 'test', '', '', 0, '', 12211, 100000, ''),
(16, 'Ajeewan', 'Pillai', '12 mattakuliya colombo 15', 772092982, 'ajeewan.aru@gmail.com', 12211, 102000, ''),
(17, 'Ali', 'minath', '12 new kolanawa road moragas mulla', 775667443, 'minath@gmail.com', 12211, 120000, ''),
(18, 'ann', 'hansika', '42 lane wellawatte', 117520000, 'ann@debugisp.net', 12211, 2000, ''),
(19, 'Asok', 'friend', '42 lane wellawatta', 117520000, 'asok@gmail.com', 12211, 230000, ''),
(20, 'bandara', 'priyantha', '42 lane wellawata', 7520000, 'bandara@debugisp.net', 12211, 2000000, ''),
(21, 'cawsal', 'cawsal', '42 Lane wellawatta', 7520000, 'cawsal@debugisp.net', 12211, 50000, ''),
(22, 'chandan', 'Director', '42 Lane wellawatta', 7520000, 'chandana@debugisp.net', 12211, 200000, ''),
(23, 'chula', 'Kariyawasam', '325 borella colombo-09', 773914760, 'chulanga@debugisp.net', 12211, 145000, ''),
(24, 'colen', 'colen', 'b9/7 mattakuliaya', 2521286, 'colen@gmail.com', 12211, 30000, ''),
(25, 'danial', 'danial', '56 farm road mattakuliya', 2521286, 'danial@gmail.com', 12211, 100000, ''),
(26, 'danush', 'Thushanth', 'b9/7 crowisland', 112521286, 'nthushanth@gmail.com', 12211, 100000, ''),
(27, 'darshan', 'darshan', '667, kollupitiya', 777338899, 'darshan@gmail.com', 12211, 211200, ''),
(28, 'deman', 'deman', '12 rajagiriya colombo', 2147483647, 'deman@debugisp.net', 12211, 20000, ''),
(29, 'devid', 'devid', '', 0, 'devid@gmail.com', 12211, 25000, ''),
(30, 'dinesh', 'dinesh', '23 mount levaniya', 0, 'dinesh@gmail.com', 12211, 60000, ''),
(31, 'fazli', 'fazli', '42 lane wellawatta', 775771811, 'fazli@debugisp.net', 12211, 9000, ''),
(32, 'gihan', 'gihan', '12 new kolanwa, rajagiriya', 112521989, 'gihan@debugisp.net', 12211, 399900, ''),
(33, 'harikaran', 'harikaran', 'maligawatta', 0, 'harikaran@gmail.com', 12211, 40500, ''),
(34, 'hemal', 'Silva', '32 lane wattla', 775771611, 'hemal@debugisp.net', 12211, 600000, ''),
(35, 'ilango', 'raman', '45 kotehena colombo 10', 775666711, 'ilango@gmail.com', 12211, 300600, ''),
(36, 'indu', 'Nithy', '234 farm road mattakuliya', 112521287, 'induma@gmail.com', 12211, 500000, ''),
(37, 'infaz', 'mohamed', '43c maligawatta', 23345667, 'infaz@gmail.com', 12211, 500000, ''),
(38, 'jack', 'Titan', '13 new city kotehena', 0, 'jack@debugisp.net', 12211, 1212000, ''),
(39, 'JohnSteve', 'Steve', '', 0, 'JohnSteve@gmail.com', 12211, 234700, ''),
(40, 'kandi', 'Steve', '42 lane wellawatta', 0, 'kandi@debugisp.net', 12211, 356900, ''),
(41, 'kariyavasam', 'Chula', 'borella colombo 10', 0, 'kariyavasam@gmail.com', 12211, 5600000, ''),
(42, 'kiruba', 'Amala', 'kotehena new chetty steeet', 755562333, 'kiruba@debugisp.net', 12211, 124000, ''),
(43, 'madhava', 'Perera', 'amar street colombo 10', 775655663, 'madhava@debugisp.net', 12345678, 123000, ''),
(44, 'manish', 'Gunathilaka', '42 lane wellawatta colombo', 7520000, 'manish@debugisp.net', 12211, 30000, ''),
(45, 'manisha', 'perera', '55 crow island', 775771088, 'manisha@debugisp.net', 12211, 10000, ''),
(46, 'mudha', 'mohamed', '12 hemiltan', 112521472, 'mudha@gmail.com', 12211, 12000, ''),
(47, 'Nageswaran', 'Rasiha', 'b9/7 crowiland mattakkuliya', 0, 'nnageswaran@gmail.com', 12211, 100000, ''),
(48, 'naveen', 'Dev', '', 0, 'naveen@debugisp.net', 12345678, 1006000, ''),
(49, 'niranjan', 'Alis', '42 lane debug wellawatta', 752000, 'niranjan@debugisp.net', 988, 123000, ''),
(50, 'niroshan', 'QA', '42 land wellawatta', 7520000, 'niroshan@debugisp.net', 124345, 1479000, ''),
(51, 'omer', 'Mohamed', '43 new street mattakuliaya', 0, 'omer@gmail.com', 9237121, 12579000, ''),
(52, 'osheda', 'Debug', '566 Maligaroad ratmalana', 0, 'osheda@debugisp.net', 21496, 100000, ''),
(53, 'prashanth', 'nageswaran', '', 0, 'prashanth@gmail.com', 2170, 459000, ''),
(54, 'ranuka', 'Ekannaya', '567 ratmalana', 0, 'ranuka@debugisp.net', 64377, 50000, ''),
(55, 'rizwan', 'mohamed', '65 kandy road ', 0, 'rizwan@debugisp.net', 345000, 509000, ''),
(56, 'sajith', 'Perera', '50 lane road ', 0, 'sajith@debugisp.net', 14578, 108700, ''),
(57, 'sanjee', 'prasath', '', 0, 'sanjee@debugisp.net', 470922, 127000, ''),
(58, 'siraj', 'Ramnan', '42 lane wellawatta', 0, 'siraj@debugisp.net', 37322, 390000, ''),
(59, 'Stephan', 'Stephan', '', 75992112, 'Stephan@debugisp.net', 446677, 7000, ''),
(60, 'taniya', 'De silva', 'ratmalane colombo', 0, 'taniya@debugisp.com', 44112233, 80000, ''),
(61, 'vicky', 'Kokki', '', 0, 'vicky@gmail.com', 39873, 800000, ''),
(62, 'vinochan', 'Samuvel', '75 rajagiriya', 2147483647, 'vinochan@gmail.com', 432687, 40000, ''),
(63, 'visva', 'Perera', '31 palliyawatta hendala', 723457900, 'visva@hotmail.com', 248433, 24000, ''),
(64, 'vivek', 'Manoharan', '', 0, 'vivek@gmail.com', 23973, 32000, ''),
(65, 'praneeth', 'Debug', '42 lane debug wellwatta', 117520000, 'praneeth@debugisp.net', 1256, 13000, ''),
(66, 'thilina', 'weerasuriya', '42 lane wellawatta', 0, 'thilina@debugisp.net', 3921, 120000, ''),
(67, 'justin', 'Arun', '34 crowisland mattakulia', 0, 'justin@debugisp.net', 21999, 10440, ''),
(68, 'krishanth', 'Onvi', '34 onvi street wellawatta', 0, 'krishanth@debugisp.net', 1244, 1213, ''),
(69, 'nimesh', 'css', '', 0, 'nimesh@debugisp.net', 2198, 29900, ''),
(70, 'ervin', 'Fernando', '24 lane wellawatta', 0, 'ervin@debugisp.net', 28991, 100800, ''),
(71, 'gaje', 'Surioya', '', 0, 'gaje@debugisip.net', 18990, 100100, ''),
(72, 'harsha', 'Fernando', '77 crowisland mattakuliay', 773232212, 'harsha@debugisp.net', 12990, 100212, ''),
(73, 'udesh', 'D', '44 maragama', 712121763, 'udesh@debugisp.net', 9977, 100320, ''),
(74, 'ayesh', 'Sanjee', '23 1st cross st colombo', 72191821, 'ayesh@debugisp.net', 12232, 2323, ''),
(75, 'charith', 'perera', '22 2nd cross street colombo', 75121211, 'charith@debugisp.net', 1978, 20001, ''),
(76, 'dilara', 'dilara', '37 kesal street', 755727711, 'dilara@debugisp.net', 123456678, 12344600, ''),
(77, 'rohan', 'rohan', '77 new colombo grandpass', 721121212, 'rohan@debugisp.net', 884455, 90000, ''),
(78, 'madava', 'madava', 'madava', 0, 'madava@debugisp.net', 990044, 990055, ''),
(79, 'chatura', 'chatura', '45 farm road mattkaulia', 757771111, 'chatura@debugisp.net', 445566, 445566, ''),
(80, 'ravi', 'idas', '42 lane colombo ', 777757211, 'ravi@debugisp.net', 9055, 96002, ''),
(81, 'lihiru-idas', 'idas', '42 lane wellawatte', 117520000, 'lihiru@debugisp.net', 9822, 107777, ''),
(82, 'rukshan', 'rukshan', '77 new beach park mattkauliya', 0, 'rukshan@debugisp.net', 9757777, 977777, ''),
(83, 'balesh', 'Audi', '43 hale street colombo', 112521287, 'balesh@debugisp.net', 661100, 660055, ''),
(84, 'anil', 'kumbel', '55 fox street colombo', 712121763, 'anil@debugisp.net', 128899, 1202190, '');

-- --------------------------------------------------------

--
-- Table structure for table `withdraw`
--

CREATE TABLE `withdraw` (
  `WDID` int(11) NOT NULL,
  `WDPin` int(11) NOT NULL,
  `WDFirstName` varchar(200) NOT NULL,
  `WDBalance` float NOT NULL,
  `WDAmount` float NOT NULL,
  `WDTime` timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `WDLocation` varchar(200) NOT NULL,
  `WDCurBalance` float NOT NULL,
  `WDIPAddress` varchar(200) NOT NULL,
  `WDAccount` varchar(200) NOT NULL,
  `WDCredit` varchar(100) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Indexes for dumped tables
--

--
-- Indexes for table `log`
--
ALTER TABLE `log`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `logentry`
--
ALTER TABLE `logentry`
  ADD PRIMARY KEY (`LEID`,`LID`);

--
-- Indexes for table `payment`
--
ALTER TABLE `payment`
  ADD PRIMARY KEY (`PID`);

--
-- Indexes for table `verification`
--
ALTER TABLE `verification`
  ADD PRIMARY KEY (`id`);

--
-- Indexes for table `withdraw`
--
ALTER TABLE `withdraw`
  ADD PRIMARY KEY (`WDID`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `log`
--
ALTER TABLE `log`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT;
--
-- AUTO_INCREMENT for table `logentry`
--
ALTER TABLE `logentry`
  MODIFY `LEID` int(11) NOT NULL AUTO_INCREMENT;
--
-- AUTO_INCREMENT for table `payment`
--
ALTER TABLE `payment`
  MODIFY `PID` int(11) NOT NULL AUTO_INCREMENT;
--
-- AUTO_INCREMENT for table `verification`
--
ALTER TABLE `verification`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=85;
--
-- AUTO_INCREMENT for table `withdraw`
--
ALTER TABLE `withdraw`
  MODIFY `WDID` int(11) NOT NULL AUTO_INCREMENT;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
