/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:58:02 by mayoub            #+#    #+#             */
/*   Updated: 2023/03/11 02:10:45 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*############# CONST / DEST ##############*/
/*---------- DEFAULT CONSTRUCTOR ----------*/
Animal::Animal( void ) : type("Default Animal") {}
/*-----------------------------------------*/

/*----------- COPY CONSTRUCTOR ------------*/
Animal::Animal( Animal const &src ) : type("Copy") { *this = src; }
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
Animal::~Animal( void ) {}
/*-----------------------------------------*/
/*#########################################*/


/*############### ACCESSORS ###############*/
/*---------------- GETERS -----------------*/
std::string	Animal::getType ( void ) const {

	return (this->type);
}
/*-----------------------------------------*/
/*#########################################*/


void	Animal::makeSound( void ) const {

	std::cout << "* An unknown polymorph animal noise 👹 *" << std::endl;
}


/*########### OPERATORS OVERLOAD ##########*/
/*-------------- ASSIGNEMENT --------------*/
Animal	&Animal::operator=( Animal const &rhs ) {

	(void) rhs;
	return (*this);
}
/*-----------------------------------------*/
/*#########################################*/
