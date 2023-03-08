/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 01:07:05 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/08 02:41:19 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*############# CONST / DEST ##############*/
/*---------- DEFAULT CONSTRUCTOR ----------*/
ClapTrap::ClapTrap( void ) : _name( "Default ClapTrap" ), _hit_points( 10 ), _energy_points( 10 ), _attack_damage( 0 ) {

	std::cout << "\033[1mDefault ClapTrap\033[0m is construct 🤖" << std::endl;

	return ;
}
/*-----------------------------------------*/

/*----------- INIT CONSTRUCTOR ------------*/
ClapTrap::ClapTrap( std::string name ) : _name( name ), _hit_points( 10 ), _energy_points( 10 ), _attack_damage( 0 ) {

	std::cout << "Init \033[1mClapTrap " << _name << " \033[0m is construct 🤖" << std::endl;

	return ;
}
/*-----------------------------------------*/

/*----------- COPY CONSTRUCTOR ------------*/
ClapTrap::ClapTrap( ClapTrap const &src ) {

	std::cout << "\033[1mCopy ClapTrap\033[0m is construct 🤖" << std::endl;
	*this = src;

	return ;
}
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
ClapTrap::~ClapTrap( void ) {

	if (!this->_name.compare("Default ClapTrap")) {
		std::cout << "\033[1mDefault ClapTrap\033[0m is destruct 🛠" << std::endl;
		return;
	}
	std::cout << "ClapTrap \033[1m" << this->_name << "\033[0m is destruct 🛠" << std::endl;

	return ;
}
/*-----------------------------------------*/
/*#########################################*/


/*############### ACCESSORS ###############*/
/*#########################################*/


void	ClapTrap::attack( const std::string &target ) {

	this->_energy_points -= 1;

	return ;
}

void	ClapTrap::takeDamage( unsigned int amount ) {

	this->_hit_points -= amount;

	return ;
}

void	ClapTrap::beRepaired( unsigned int amount ) {

	if (this->_energy_points)
	{	
		this->_energy_points -= 1;
		this->_hit_points += amount;
		if (!this->_name.compare("Default ClapTrap"))
			std::cout << "\033[1mDefault ClapTrap\033[0m was \033[1m\033[32repared [ 1 ] hit point\033[0m !" << std::endl;
		else
			std::cout << "ClapTrap \033[1m" << this->_name << "\033[1m was \033[1m\033[32repared [ 1 ] hit point\033[0m !" << std::endl;

		return ;
	}
	std::cout << "ClapTrap \033[1m" << this->_name << "Cannot be repared cause \033[1m\033[30mhe has [ 0 ] energy points 💀 !\033[0m" << std::endl;

	return ;
}


/*########### OPERATORS OVERLOAD ##########*/
/*-------------- ASSIGNEMENT --------------*/
ClapTrap	&ClapTrap::operator=( ClapTrap const &rhs ) {

	(void) rhs;

	return (*this);
}
/*-----------------------------------------*/

/*--------------- STREAM OUT --------------*/
std::ostream	&operator<<( std::ostream &o, ClapTrap const &i ) {

	(void) i;
	return (o);
}
/*-----------------------------------------*/
/*#########################################*/
