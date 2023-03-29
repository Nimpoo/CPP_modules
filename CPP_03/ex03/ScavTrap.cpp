/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 18:05:23 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/29 18:05:24 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*############# CONST / DEST ##############*/
/*---------- DEFAULT CONSTRUCTOR ----------*/
ScavTrap::ScavTrap( void ) {

	this->_name = "Default ScavTrap";
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;

	std::cout << "\033[1mDefault ScavTrap\033[0m is \033[1;32mconstruct\033[0m 🤖" << std::endl;

	return ;
}
/*-----------------------------------------*/

/*----------- INIT CONSTRUCTOR ------------*/
ScavTrap::ScavTrap( std::string name ) {

	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;

	std::cout << "Init \033[1mScavTrap " << _name << " \033[0m is \033[1;32mconstruc\033[0mt 🤖" << std::endl;

	return ;
}
/*-----------------------------------------*/

/*----------- COPY CONSTRUCTOR ------------*/
ScavTrap::ScavTrap( ScavTrap const &src ) {

	std::cout << "\033[1mCopy ScavTrap\033[0m is \033[1;32mconstruct\033[0m 🤖" << std::endl;
	*this = src;

	return ;
}
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
ScavTrap::~ScavTrap( void ) {

	if (!this->_name.compare("Default ScavTrap")) {
		std::cout << "\033[1mDefault ScavTrap\033[0m is \033[1;31mdestruct\033[0m 🛠" << std::endl;
		return;
	}
	std::cout << "ScavTrap \033[1m" << this->_name << "\033[0m is \033[1;31mdestruct\033[0m 🛠" << std::endl;

	return ;
}
/*-----------------------------------------*/
/*#########################################*/


void	ScavTrap::attack( const std::string &target ) {

	if (!this->_name.compare("Default ScavTrap"))
	{
		std::cout << "\033[1mDefault ClapTrap\033[0m attacks \033[1m"
				<< target << "\033[0m, causing \033[1;31m"
				<< this->_attack_damage << " points of damage\033[0m!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap \033[1m" << this->_name
			<< "\033[0m attacks \033[1m" << target
			<< "\033[0m, causing \033[1;31m" << this->_attack_damage
			<< " points of damage\033[0m!" << std::endl;

	return ;
}

void	ScavTrap::guardGate( void ) {

	if (!this->_name.compare("Default ScavTrap"))
	{
		std::cout << "DEFAULT SCAVTRAP USE HIS SPECIAL ABILITY : GUARD GATE" << std::endl;
		return ;
	}
	std::cout << "SCAVTRAP \033[1;37m" << this->_name << "\033[0m USE HIS SPECIAL ABILITY : GUARD GATE" << std::endl;

	return ;
}


/*########### OPERATORS OVERLOAD ##########*/
/*-------------- ASSIGNEMENT --------------*/
ScavTrap	&ScavTrap::operator=( ScavTrap const &rhs ) {

	(void) rhs;

	return (*this);
}
/*-----------------------------------------*/

/*--------------- STREAM OUT --------------*/
std::ostream	&operator<<( std::ostream &o, ScavTrap const &i ) {

	(void) i;
	return (o);
}
/*-----------------------------------------*/
/*#########################################*/
