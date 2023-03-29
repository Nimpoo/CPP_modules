/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 18:06:43 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/29 18:12:04 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*############# CONST / DEST ##############*/
/*---------- DEFAULT CONSTRUCTOR ----------*/
DiamondTrap::DiamondTrap( void ) {

    this->_name = "Default FragTrap";
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;

	std::cout << "\033[1mDefault DiamondTrap\033[0m is \033[1;32mconstruct\033[0m 🤖" << std::endl;

	return ;
}
/*-----------------------------------------*/

/*----------- INIT CONSTRUCTOR ------------*/
DiamondTrap::DiamondTrap( std::string name ) {

    this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;

	std::cout << "Init \033[1mDiamondTrap " << _name << " \033[0m is \033[1;32mconstruc\033[0mt 🤖" << std::endl;

	return ;
}
/*-----------------------------------------*/

/*----------- COPY CONSTRUCTOR ------------*/
DiamondTrap::DiamondTrap( DiamondTrap const &src ) {

	std::cout << "\033[1mCopy DiamondTrap\033[0m is \033[1;32mconstruct\033[0m 🤖" << std::endl;
	*this = src;

	return ;
}
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
DiamondTrap::~DiamondTrap( void ) {

	if (!this->_name.compare("Default DiamondTrap")) {
		std::cout << "\033[1mDefault DiamondTrap\033[0m is \033[1;31mdestruct\033[0m 🛠" << std::endl;
		return;
	}
	std::cout << "DiamondTrap \033[1m" << this->_name << "\033[0m is \033[1;31mdestruct\033[0m 🛠" << std::endl;

	return ;
}
/*-----------------------------------------*/
/*#########################################*/


/*############### ACCESSORS ###############*/
/*---------------- GETERS -----------------*/
/*-----------------------------------------*/
/*---------------- SETERS -----------------*/
/*-----------------------------------------*/
/*#########################################*/


/*########### OPERATORS OVERLOAD ##########*/
/*-------------- ASSIGNEMENT --------------*/
DiamondTrap	&DiamondTrap::operator=( DiamondTrap const &rhs ) {

	(void) rhs;

	return (*this);
}
/*-----------------------------------------*/

/*--------------- STREAM OUT --------------*/
std::ostream	&operator<<( std::ostream &o, DiamondTrap const &i ) {

	(void) i;
	return (o);
}
/*-----------------------------------------*/
/*#########################################*/

