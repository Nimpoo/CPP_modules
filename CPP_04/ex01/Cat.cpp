/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 02:15:53 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/11 02:15:56 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*############# CONST / DEST ##############*/
/*---------- DEFAULT CONSTRUCTOR ----------*/
Cat::Cat( void ) { this->type = "Cat"; }
/*-----------------------------------------*/

/*----------- COPY CONSTRUCTOR ------------*/
Cat::Cat( Cat const &src ) { *this = src;

	this->type = "Cat";
}
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
Cat::~Cat( void ) {}
/*-----------------------------------------*/
/*#########################################*/


/*############### ACCESSORS ###############*/
/*---------------- GETERS -----------------*/
std::string	Cat::getType ( void ) const {

	return (this->type);
}
/*-----------------------------------------*/
/*#########################################*/


void	Cat::makeSound( void ) const {

	std::cout << "MIAOUUUUUUUUU !!!!! 😾" << std::endl;
}


/*########### OPERATORS OVERLOAD ##########*/
/*-------------- ASSIGNEMENT --------------*/
Cat	&Cat::operator=( Cat const &rhs ) {

	(void) rhs;
	return (*this);
}
/*-----------------------------------------*/
/*#########################################*/
