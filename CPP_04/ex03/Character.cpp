/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 23:41:58 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/16 16:58:53 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*############# CONST / DEST ##############*/
/*---------- DEFAULT CONSTRUCTOR ----------*/
Character::Character( void ) : _name( "Default" ) {

	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}
/*-----------------------------------------*/

/*----------- INIT CONSTRUCTOR ------------*/
Character::Character( std::string const &name ) : _name( name ) {

	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}
/*-----------------------------------------*/

/*----------- COPY CONSTRUCTOR ------------*/
Character::Character( Character const &src ) { *this = src; }
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
Character::~Character( void ) { }
/*-----------------------------------------*/
/*#########################################*/


void    Character::equip( AMateria *m ) {

	if (m == NULL)
	{
		std::cout << "[ " << this->_name << " ]	>> " << "Can't equip this UNEXPECTED MATERIA." << std::endl;
		return ;
	}

	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] == NULL)
		{
			std::cout << "[ " << this->_name << " ]	>> " << "The new MATERIA : " << m->getType() << " is EQUIP." << std::endl;
			this->_inventory[i] = m;
			return ;
		}
	}
	std::cout << "[ " << this->_name << " ]	>> " << "Can't equip " << m->getType() << ". YOUR INVENTORY IS FULL !" << std::endl;
}

void    Character::unequip( int idx ) {

	if (idx < 0 || idx > 3)
	{
		std::cout << "[ " << this->_name << " ] >> Inventory overflow" << std::endl;
		return ;
	}

	if (this->_inventory[idx])
	{
		std::cout << "[ " << this->_name << " ]	>> " << "the MATERIA : " << this->_inventory[idx]->getType() << " is UNEQUIP." << std::endl;
		this->_inventory[idx] = NULL;
	}
	else
		std::cout << "[ " << this->_name << " ]	>> The MATERIA is not equip." << std::endl;
}

void    Character::use( int idx, ICharacter &target ) {

	if (idx < 0 || idx > 3)
	{
		std::cout << "[ " << this->_name << " ] >> Inventory overflow" << std::endl;
		return ;
	}

	if (this->_inventory[idx])
	{
		std::cout << "[ " << this->_name << " ]	>> " << "The MATERIA : " << this->_inventory[idx]->getType() << " is USED !" << std::endl;
		this->_inventory[idx]->use(target);
	}
	else
		std::cout << "[ " << this->_name << " ]	>> Can't use this MATERIA" << std::endl;
}


/*############### ACCESSORS ###############*/
/*---------------- GETERS -----------------*/
std::string const   &Character::getName( void ) const { return ( this->_name ); }
/*-----------------------------------------*/

/*---------------- SETERS -----------------*/
/*-----------------------------------------*/
/*#########################################*/


/*########### OPERATORS OVERLOAD ##########*/
/*-------------- ASSIGNEMENT --------------*/
Character    &Character::operator=( Character const &rhs ) {

	this->_name = rhs._name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = rhs._inventory[i];

	return (*this);
}
/*-----------------------------------------*/

/*--------------- STREAM OUT --------------*/
std::ostream	&operator<<( std::ostream &o, Character const &i ) {

	o << i.getName();

	return (o);
}
/*-----------------------------------------*/
/*#########################################*/
