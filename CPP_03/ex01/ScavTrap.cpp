/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 17:20:39 by mayoub            #+#    #+#             */
/*   Updated: 2023/04/02 18:12:34 by mayoub           ###   ########.fr       */
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
ScavTrap::ScavTrap( const std::string &name ) {

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
		if (this->_hit_points == 0)
		{
			std::cout << "\033[1mDefault ScavTrap\033[0m \033[1;31mIS FREAKING DEAD BRUH 💀\033[0m LOOK HIS Hit Points [ "
				<< this->_hit_points << " ] ! He can't move 😔" << std::endl;
			
			return ;
		}
		else
		{
			std::cout << "\033[1mDefault ScavTrap\033[0m attacks \033[1m"
					<< target << "\033[0m, causing \033[1;31m"
					<< this->_attack_damage << " points of damage\033[0m!" << std::endl;
			return ;
		}
	}

	if (this->_hit_points == 0)
	{
		std::cout << "ScavTrap \033[1m" << this->_name << "\033[0m \033[1;31mIS FREAKING DEAD BRUH 💀\033[0m LOOK HIS Hit Points [ "
			<< this->_hit_points << " ] ! He can't move 😔" << std::endl;

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
		if (this->_hit_points == 0)
		{
			std::cout << "\033[1mDefault ScavTrap\033[0m \033[1;31mIS FREAKING DEAD BRUH 💀\033[0m LOOK HIS Hit Points [ "
				<< this->_hit_points << " ] ! He can't move 😔" << std::endl;
			
			return ;
		}
		else
		{
			std::cout << "DEFAULT SCAVTRAP USE HIS SPECIAL ABILITY : GUARD GATE" << std::endl;
			return ;
		}
	}
	if (this->_hit_points == 0)
	{
		std::cout << "ClapTrap \033[1m" << this->_name << "\033[0m \033[1;31mIS FREAKING DEAD BRUH 💀\033[0m LOOK HIS Hit Points [ "
			<< this->_hit_points << " ] ! He can't move 😔" << std::endl;

		return ;
	}

	std::cout << "SCAVTRAP \033[1;37m" << this->_name << "\033[0m USE HIS SPECIAL ABILITY : GUARD GATE" << std::endl;

	return ;
}


/*########### OPERATORS OVERLOAD ##########*/
/*-------------- ASSIGNEMENT --------------*/
ScavTrap	&ScavTrap::operator=( ScavTrap const &rhs ) {

	this->_name = rhs._name;
	this->_attack_damage = rhs._attack_damage;
	this->_energy_points = rhs._energy_points;
	this->_hit_points = rhs._hit_points;

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
