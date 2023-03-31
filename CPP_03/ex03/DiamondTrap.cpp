/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 18:06:43 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/31 02:22:16 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*############# CONST / DEST ##############*/
/*---------- DEFAULT CONSTRUCTOR ----------*/
DiamondTrap::DiamondTrap( void ) :
ClapTrap( "Default DiamondTrap_clap_trap" ),
ScavTrap( "Default DiamondTrap_scav_trap" ),
FragTrap( "Default DiamondTrap_frag_trap" ) {

	this->_name = "Default DiamondTrap";

	std::cout << "\033[1mDefault DiamondTrap\033[0m is \033[1;32mconstruct\033[0m 🤖" << std::endl;

	return ;
}
/*-----------------------------------------*/

/*----------- INIT CONSTRUCTOR ------------*/
DiamondTrap::DiamondTrap( std::string name ) :
ClapTrap( name + "_clap_trap" ),
ScavTrap( name + "_clap_trap" ),
FragTrap( name + "_clap_trap" ) {


    this->_name = name;

	std::cout << "Init \033[1mDiamondTrap " << _name << " \033[0m is \033[1;32mconstruc\033[0mt 🤖" << std::endl;

	return ;
}
/*-----------------------------------------*/

/*----------- COPY CONSTRUCTOR ------------*/
DiamondTrap::DiamondTrap( DiamondTrap const &src ) :
ClapTrap( src.getName() ),
ScavTrap( src.getName() + "_scav_trap" ),
FragTrap( src.getName() + "_clap_trap" ) {

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

