/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 02:15:53 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/13 17:19:38 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*############# CONST / DEST ##############*/
/*---------- DEFAULT CONSTRUCTOR ----------*/
Cat::Cat( void ) { this->type = "Cat";

	std::cout << "\033[1;37mCat\033[0m was \033[1;32mCONSTRUCT\033[0m 😸" << std::endl;
	this->_brain = new Brain();
}
/*-----------------------------------------*/

/*----------- COPY CONSTRUCTOR ------------*/
Cat::Cat( Cat const &src ) { *this = src;

	this->type = "Cat";
	std::cout << "\033[1;37mCat COPY\033[0m was \033[1;32mCONSTRUCT\033[0m 😸" << std::endl;
}
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
Cat::~Cat( void ) {

	std::cout << "\033[1;37mCat\033[0m was \033[1;31mDESTRUCT + DELETE BRAIN\033[0m 🍗" << std::endl;
	delete this->_brain;
}
/*-----------------------------------------*/
/*#########################################*/


/*############### ACCESSORS ###############*/
/*---------------- GETERS -----------------*/
std::string	Cat::getType ( void ) const {

	return (this->type);
}

Brain	*Cat::getBrain( void ) const {

	return (this->_brain);
}
/*-----------------------------------------*/
/*#########################################*/


void	Cat::makeSound( void ) const {

	std::cout << "MIAOUUUUUUUUU !!!!! 😾" << std::endl;
}


/*########### OPERATORS OVERLOAD ##########*/
/*-------------- ASSIGNEMENT --------------*/
Cat	&Cat::operator=( Cat const &rhs ) {

	this->type = rhs.type;
	this->_brain = new Brain(*rhs._brain);	// ? Deep copy
	// this->_brain = rhs._brain;			// ? Shallow copy
	return (*this);
}
/*-----------------------------------------*/
/*#########################################*/
