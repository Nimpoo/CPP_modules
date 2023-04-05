/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 10:20:53 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/05 13:44:12 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/*############# CONST / DEST ##############*/
/*---------- DEFAULT CONSTRUCTOR ----------*/
Cure::Cure( void ) { this->_type = "cure"; }
/*-----------------------------------------*/

/*----------- COPY CONSTRUCTOR ------------*/
Cure::Cure( Cure const &src ) { *this = src; }
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
Cure::~Cure( void ) { }
/*-----------------------------------------*/
/*#########################################*/


AMateria	*Cure::clone( void ) const {

	return (new Cure());
}

void	Cure::use( ICharacter &target ) {

	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}


/*########### OPERATORS OVERLOAD ##########*/
/*-------------- ASSIGNEMENT --------------*/
Cure	&Cure::operator=( Cure const &rhs ) {

	this->_type = rhs._type;

	return (*this);
}
/*-----------------------------------------*/

/*--------------- STREAM OUT --------------*/
std::ostream	&operator<<( std::ostream &o, Cure const &i ) {

	o << i.getType();

	return (o);
}
/*-----------------------------------------*/
/*#########################################*/
