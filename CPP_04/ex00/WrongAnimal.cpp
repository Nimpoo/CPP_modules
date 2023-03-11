/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 19:01:00 by mayoub            #+#    #+#             */
/*   Updated: 2023/03/11 02:11:04 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*############# CONST / DEST ##############*/
/*---------- DEFAULT CONSTRUCTOR ----------*/
WrongAnimal::WrongAnimal( void ) : type("Default WrongAnimal") {}
/*-----------------------------------------*/

/*----------- COPY CONSTRUCTOR ------------*/
WrongAnimal::WrongAnimal( WrongAnimal const &src ) : type("Copy") { *this = src; }
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
WrongAnimal::~WrongAnimal( void ) {}
/*-----------------------------------------*/
/*#########################################*/


/*############### ACCESSORS ###############*/
/*---------------- GETERS -----------------*/
std::string	WrongAnimal::getType ( void ) const {

	return (this->type);
}
/*-----------------------------------------*/
/*#########################################*/


void	WrongAnimal::makeSound( void ) const {

	std::cout << "This is the non-polymorph WrongAnimal so i don't say anything special... 🍵" << std::endl;
}


/*########### OPERATORS OVERLOAD ##########*/
/*-------------- ASSIGNEMENT --------------*/
WrongAnimal	&WrongAnimal::operator=( WrongAnimal const &rhs ) {

	(void) rhs;
	return (*this);
}
/*-----------------------------------------*/
/*#########################################*/
