/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 18:06:43 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/02 18:21:57 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*############# CONST / DEST ##############*/
/*---------- DEFAULT CONSTRUCTOR ----------*/
DiamondTrap::DiamondTrap( void ) {

	this->_name = "Default DiamondTrap";

	ClapTrap::_name = "Default_clap_name";
	this->diamond_hit_points = FragTrap::_hit_points;
	this->diamond_energy_points = ScavTrap::_energy_points;
	this->diamond_attack_damage = FragTrap::_attack_damage;

	std::cout << "\033[1mDefault DiamondTrap\033[0m is \033[1;32mconstruct\033[0m 🤖" << std::endl;

	return ;
}
/*-----------------------------------------*/

/*----------- INIT CONSTRUCTOR ------------*/
DiamondTrap::DiamondTrap( const std::string &name ) {

    this->_name = name;

	ClapTrap::_name = name + "_clap_name";
	this->diamond_hit_points = FragTrap::_hit_points;
	this->diamond_energy_points = ScavTrap::_energy_points;
	this->diamond_attack_damage = FragTrap::_attack_damage;

	std::cout << "Init \033[1mDiamondTrap " << _name << "\033[0m is \033[1;32mconstruc\033[0mt 🤖" << std::endl;

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
		return ;
	}
	std::cout << "DiamondTrap \033[1m" << this->_name << "\033[0m is \033[1;31mdestruct\033[0m 🛠" << std::endl;

	return ;
}
/*-----------------------------------------*/
/*#########################################*/


void	DiamondTrap::whoAmI( void ) {

	std::cout << "My name is : " << this->_name << std::endl;
	std::cout << "My grand-father name is : " << ClapTrap::_name << std::endl;
}

void	DiamondTrap::attack( const std::string &target ) {

	ScavTrap::attack(target);
}


/*############### ACCESSORS ###############*/
/*---------------- GETERS -----------------*/
/*-----------------------------------------*/

/*---------------- SETERS -----------------*/
/*-----------------------------------------*/
/*#########################################*/


/*########### OPERATORS OVERLOAD ##########*/
/*-------------- ASSIGNEMENT --------------*/
DiamondTrap	&DiamondTrap::operator=( DiamondTrap const &rhs ) {

	this->_name = rhs._name;
	this->_attack_damage = rhs._attack_damage;
	this->_energy_points = rhs._energy_points;
	this->_hit_points = rhs._hit_points;

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

