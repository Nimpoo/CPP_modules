/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 02:15:23 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/11 17:49:52 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*############# CONST / DEST ##############*/
/*---------- DEFAULT CONSTRUCTOR ----------*/
Animal::Animal( void ) : type("Default Animal") {

	std::cout << "\033[1;37mDefault Animal\033[0m was \033[1;32mCONSTRUCT\033[0m 🦓" << std::endl;
}
/*-----------------------------------------*/

/*----------- COPY CONSTRUCTOR ------------*/
Animal::Animal( Animal const &src ) : type("Copy") { *this = src;

	std::cout << "\033[1;37mDefault Animal COPY\033[0m was \033[1;32mCONSTRUCT\033[0m 🦓" << std::endl;
}
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
Animal::~Animal( void ) {

	std::cout << "\033[1;37mDefault Animal\033[0m was \033[1;31mDESTRUCT\033[0m 🍗" << std::endl;
}
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

	this->type = rhs.type;
	return (*this);
}
/*-----------------------------------------*/
/*#########################################*/
