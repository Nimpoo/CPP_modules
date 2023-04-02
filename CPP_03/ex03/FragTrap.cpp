/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 00:46:19 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/02 18:17:13 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*############# CONST / DEST ##############*/
/*---------- DEFAULT CONSTRUCTOR ----------*/
FragTrap::FragTrap( void ) {

	this->_name = "Default FragTrap";
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;

	std::cout << "\033[1mDefault FragTrap\033[0m is \033[1;32mconstruct\033[0m 🤖" << std::endl;

	return ;
}
/*-----------------------------------------*/

/*----------- INIT CONSTRUCTOR ------------*/
FragTrap::FragTrap( const std::string &name ) {

	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;

	std::cout << "Init \033[1mFragTrap " << _name << " \033[0m is \033[1;32mconstruc\033[0mt 🤖" << std::endl;

	return ;
}
/*-----------------------------------------*/

/*----------- COPY CONSTRUCTOR ------------*/
FragTrap::FragTrap( FragTrap const &src ) {

	std::cout << "\033[1mCopy FragTrap\033[0m is \033[1;32mconstruct\033[0m 🤖" << std::endl;
	*this = src;

	return ;
}
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
FragTrap::~FragTrap( void ) {

	if (!this->_name.compare("Default FragTrap")) {
		std::cout << "\033[1mDefault FragTrap\033[0m is \033[1;31mdestruct\033[0m 🛠" << std::endl;
		return;
	}
	std::cout << "FragTrap \033[1m" << this->_name << "\033[0m is \033[1;31mdestruct\033[0m 🛠" << std::endl;

	return ;
}
/*-----------------------------------------*/
/*#########################################*/


void	FragTrap::attack( const std::string &target ) {

	if (!this->_name.compare("Default FragTrap"))
	{
		if (this->_hit_points == 0)
		{
			std::cout << "\033[1mDefault FragTrap\033[0m \033[1;31mIS FREAKING DEAD BRUH 💀\033[0m LOOK HIS Hit Points [ "
				<< this->_hit_points << " ] ! He can't move 😔" << std::endl;
			
			return ;
		}
		std::cout << "\033[1mDefault ClapTrap\033[0m attacks \033[1m"
				<< target << "\033[0m, causing \033[1;31m"
				<< this->_attack_damage << " points of damage\033[0m!" << std::endl;
		return ;
	}
	if (this->_hit_points == 0)
	{
		std::cout << "FragTrap \033[1m" << this->_name << "\033[0m \033[1;31mIS FREAKING DEAD BRUH 💀\033[0m LOOK HIS Hit Points [ "
			<< this->_hit_points << " ] ! He can't move 😔" << std::endl;

		return ;
	}
	std::cout << "FragTrap \033[1m" << this->_name
			<< "\033[0m attacks \033[1m" << target
			<< "\033[0m, causing \033[1;31m" << this->_attack_damage
			<< " points of damage\033[0m!" << std::endl;

	return ;
}

void	FragTrap::highFivesGuys( void ) {

	if (!this->_name.compare("Default FragTrap"))
	{
		if (this->_hit_points == 0)
		{
			std::cout << "\033[1mDefault FragTrap\033[0m \033[1;31mIS FREAKING DEAD BRUH 💀\033[0m LOOK HIS Hit Points [ "
				<< this->_hit_points << " ] ! He can't move 😔" << std::endl;
			
			return ;
		}
		std::cout << "DEFAULT FRAGTRAP USE HIS SPECIAL ABILITY : HIGH FIVES GUYS" << std::endl;
		return ;
	}
	if (this->_hit_points == 0)
	{
		std::cout << "FragTrap \033[1m" << this->_name << "\033[0m \033[1;31mIS FREAKING DEAD BRUH 💀\033[0m LOOK HIS Hit Points [ "
			<< this->_hit_points << " ] ! He can't move 😔" << std::endl;

		return ;
	}
	std::cout << "FragTrap \033[1;37m" << this->_name << "\033[0m USE HIS SPECIAL ABILITY : HIGH FIVES GUYS" << std::endl;

	return ;
}


/*########### OPERATORS OVERLOAD ##########*/
/*-------------- ASSIGNEMENT --------------*/
FragTrap	&FragTrap::operator=( FragTrap const &rhs ) {

	this->_name = rhs._name;
	this->_attack_damage = rhs._attack_damage;
	this->_energy_points = rhs._energy_points;
	this->_hit_points = rhs._hit_points;

	return (*this);
}
/*-----------------------------------------*/

/*--------------- STREAM OUT --------------*/
std::ostream	&operator<<( std::ostream &o, FragTrap const &i ) {

	(void) i;
	return (o);
}
/*-----------------------------------------*/
/*#########################################*/
