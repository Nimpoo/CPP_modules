/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 02:16:10 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/11 17:57:50 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*############# CONST / DEST ##############*/
/*---------- DEFAULT CONSTRUCTOR ----------*/
Dog::Dog( void ) { this->type = "Dog";

	std::cout << "\033[1;37mDog\033[0m was \033[1;32mCONSTRUCT\033[0m 🐶" << std::endl;
	this->_brain = new Brain();
}
/*-----------------------------------------*/

/*----------- COPY CONSTRUCTOR ------------*/
Dog::Dog( Dog const &src ) { *this = src;

	this->type = "Dog";
	std::cout << "\033[1;37mDog COPY\033[0m was \033[1;32mCONSTRUCT\033[0m 🐶" << std::endl;
}
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
Dog::~Dog( void ) {

	std::cout << "\033[1;37mDog\033[0m was \033[1;31mDESTRUCT\033[0m 🍗" << std::endl;
	delete this->_brain;
}
/*-----------------------------------------*/
/*#########################################*/


/*############### ACCESSORS ###############*/
/*---------------- GETERS -----------------*/
std::string	Dog::getType ( void ) const {

	return (this->type);
}
/*-----------------------------------------*/
/*#########################################*/


void	Dog::makeSound( void ) const {

	std::cout << "OUAF OUAF !!!!! 🐶" << std::endl;
}


/*########### OPERATORS OVERLOAD ##########*/
/*-------------- ASSIGNEMENT --------------*/
Dog	&Dog::operator=( Dog const &rhs ) {

	this->type = rhs.type;
	return (*this);
}
/*-----------------------------------------*/
/*#########################################*/
