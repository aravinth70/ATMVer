create database ATM;
CREATE TABLE `atm`.`verification` (
  `id` INT NOT NULL AUTO_INCREMENT,
  `FirstName` VARCHAR(45) NOT NULL,
  `LastName` VARCHAR(45) NOT NULL,
  `Address` VARCHAR(200) NULL,
  `Contact` INT NOT NULL,
  `Mail` VARCHAR(100) NULL,
  `PIN` INT NOT NULL,
  PRIMARY KEY (`id`));

use ATM;
select * from verification;