/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:04:21 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/13 18:04:23 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*############# CONST / DEST ##############*/
/*---------- DEFAULT CONSTRUCTOR ----------*/
WrongAnimal::WrongAnimal( void ) : type("Default WrongAnimal") {

	std::cout << "\033[1;37mDefault WrongAnimal\033[0m was \033[1;32mCONSTRUCT\033[0m 🐲" << std::endl;
}
/*-----------------------------------------*/

/*----------- COPY CONSTRUCTOR ------------*/
WrongAnimal::WrongAnimal( WrongAnimal const &src ) : type("Copy") { *this = src;

	std::cout << "\033[1;37mDefault WrongAnimal\033[0m COPY was \033[1;32mCONSTRUCT\033[0m 🐲" << std::endl;
}
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
WrongAnimal::~WrongAnimal( void ) {

	std::cout << "\033[1;37mDefault WrongAnimal\033[0m was \033[1;31mDESTRUCT\033[0m 🥩" << std::endl;
}
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

	this->type = rhs.type;
	return (*this);
}
/*-----------------------------------------*/
/*#########################################*/
