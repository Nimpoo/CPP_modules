/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 08:45:56 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/05 13:43:51 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/*############# CONST / DEST ##############*/
/*---------- DEFAULT CONSTRUCTOR ----------*/
Ice::Ice( void ) { this->_type = "ice"; }
/*-----------------------------------------*/

/*----------- COPY CONSTRUCTOR ------------*/
Ice::Ice( Ice const &src ) { *this = src; }
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
Ice::~Ice( void ) { }
/*-----------------------------------------*/
/*#########################################*/


AMateria	*Ice::clone( void ) const {

	return (new Ice());
}

void	Ice::use( ICharacter &target ) {

	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}


/*########### OPERATORS OVERLOAD ##########*/
/*-------------- ASSIGNEMENT --------------*/
Ice	&Ice::operator=( Ice const &rhs ) {

	this->_type = rhs._type;

	return (*this);
}
/*-----------------------------------------*/

/*--------------- STREAM OUT --------------*/
std::ostream	&operator<<( std::ostream &o, Ice const &i ) {

	o << i.getType();

	return (o);
}
/*-----------------------------------------*/
/*#########################################*/

