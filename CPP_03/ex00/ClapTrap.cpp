/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 01:07:05 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/02 18:05:14 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*############# CONST / DEST ##############*/
/*---------- DEFAULT CONSTRUCTOR ----------*/
ClapTrap::ClapTrap( void ) : _name( "Default ClapTrap" ), _hit_points( 10 ), _energy_points( 10 ), _attack_damage( 0 ) {

	std::cout << "\033[1mDefault ClapTrap\033[0m is \033[1;32mconstruct\033[0m 🤖" << std::endl;

	return ;
}
/*-----------------------------------------*/

/*----------- INIT CONSTRUCTOR ------------*/
ClapTrap::ClapTrap( const std::string &name ) : _name( name ), _hit_points( 10 ), _energy_points( 10 ), _attack_damage( 0 ) {

	std::cout << "Init \033[1mClapTrap " << _name << " \033[0m is \033[1;32mconstruc\033[0mt 🤖" << std::endl;

	return ;
}
/*-----------------------------------------*/

/*----------- COPY CONSTRUCTOR ------------*/
ClapTrap::ClapTrap( ClapTrap const &src ) {

	std::cout << "\033[1mCopy ClapTrap\033[0m is \033[1;32mconstruct\033[0m 🤖" << std::endl;
	*this = src;

	return ;
}
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
ClapTrap::~ClapTrap( void ) {

	if (!this->_name.compare("Default ClapTrap")) {
		std::cout << "\033[1mDefault ClapTrap\033[0m is \033[1;31mdestruct\033[0m 🛠" << std::endl;
		return;
	}
	std::cout << "ClapTrap \033[1m" << this->_name << "\033[0m is \033[1;31mdestruct\033[0m 🛠" << std::endl;

	return ;
}
/*-----------------------------------------*/
/*#########################################*/


/*############### ACCESSORS ###############*/
/*---------------- GETERS -----------------*/
unsigned int	ClapTrap::getHitPoints( void ) {

	return (this->_hit_points);
}

unsigned int	ClapTrap::getEnergyPoints( void ) {

	return (this->_energy_points);
}

unsigned int	ClapTrap::getAttackDamage( void ) {

	return (this->_attack_damage);
}
/*-----------------------------------------*/
/*#########################################*/


void	ClapTrap::attack( const std::string &target ) {

	if (this->_name.compare("Default Claptrap"))
	{
		if (this->_hit_points == 0)
		{
			std::cout << "\033[1mDefault ClapTrap\033[0m \033[1;31mIS FREAKING DEAD BRUH 💀\033[0m LOOK HIS Hit Points [ "
				<< this->_hit_points << " ] ! He can't move 😔" << std::endl;
			
			return ;
		}
	
		else
		{
			std::cout << "\033[1m Default ClapTrap\033[0m attacks \033[1m"
					<< target << "\033[0m, causing \033[1;31m"
					<< this->_attack_damage << " points of damage\033[0m!" << std::endl;
			return ;
		}
	}
	if (this->_hit_points == 0)
	{
		std::cout << "ClapTrap \033[1m" << this->_name << "\033[0m \033[1;31mIS FREAKING DEAD BRUH 💀\033[0m LOOK HIS Hit Points [ "
			<< this->_hit_points << " ] ! He can't move 😔" << std::endl;

		return ;
	}
	else
	{
		std::cout << "ClapTrap \033[1m" << this->_name
				<< "\033[0m attacks \033[1m" << target
				<< "\033[0m, causing \033[1;31m" << this->_attack_damage
				<< " points of damage\033[0m!" << std::endl;

	return ;
	}
}

void	ClapTrap::takeDamage( unsigned int amount ) {

	if (this->_name.compare("Default Claptrap"))
	{
		if (this->_hit_points == 0)
		{
			std::cout << "\033[1mDefault ClapTrap\033[0m \033[1;31mIS FREAKING DEAD BRUH 💀\033[0m LOOK HIS Hit Points [ "
				<< this->_hit_points << " ] ! He can't move 😔" << std::endl;

			return ;
		}
		else
		{
			std::cout << "\033[1mDefault ClapTrap\033[0m \033[1;31mtakes "
				<< amount << " points of damage\033[0m!" << std::endl;
			this->_hit_points -= amount;
			return ;
		}
	}

	if (this->_hit_points == 0)
	{
		std::cout << "ClapTrap \033[1m" << this->_name << "\033[0m \033[1;31mIS FREAKING DEAD BRUH 💀\033[0m LOOK HIS Hit Points [ "
			<< this->_hit_points << " ] ! He can't move 😔" << std::endl;
		
		return ;
	}
	else
	{
		std::cout << "ClapTrap \033[1m"
				<< this->_name << "\033[0m \033[1;31mtakes "
				<< amount << " points of damage\033[0m!" << std::endl;

		this->_hit_points -= amount;
		return ;
	}
}

void	ClapTrap::beRepaired( unsigned int amount ) {

	if (this->_energy_points)
	{
		if (!this->_name.compare("Default ClapTrap"))
		{
			if (this->_hit_points == 0)
			{
				std::cout << "\033[1mDefault ClapTrap\033[0m \033[1;31mIS FREAKING DEAD BRUH 💀\033[0m LOOK HIS Hit Points [ "
					<< this->_hit_points << " ] ! He can't move 😔" << std::endl;

				return ;
			}
			std::cout << "\033[1mDefault ClapTrap\033[0m was \033[1;32mrepared [ " << amount << " ] hit point\033[0m !" << std::endl;
			this->_energy_points -= 1;
			this->_hit_points += amount;
		}
		else
		{
			std::cout << "ClapTrap \033[1m"
					<< this->_name << "\033[0m was \033[1m\033[1;32mrepared [ " << amount << " ] hit point\033[0m !"
					<< std::endl;
			this->_energy_points -= 1;
			this->_hit_points += amount;
		}

		return ;
	}
	std::cout << "ClapTrap \033[1m" << this->_name
			<< "Cannot be repared cause \033[1m\033[30mhe has [ 0 ] energy points 💀 !\033[0m"
			<< std::endl;

	return ;
}


/*########### OPERATORS OVERLOAD ##########*/
/*-------------- ASSIGNEMENT --------------*/
ClapTrap	&ClapTrap::operator=( ClapTrap const &rhs ) {

	this->_name = rhs._name;
	this->_attack_damage = rhs._attack_damage;
	this->_energy_points = rhs._energy_points;
	this->_hit_points = rhs._hit_points;

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
