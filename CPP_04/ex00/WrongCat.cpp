/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 19:02:55 by mayoub            #+#    #+#             */
/*   Updated: 2023/03/10 19:05:07 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*############# CONST / DEST ##############*/
/*---------- DEFAULT CONSTRUCTOR ----------*/
WrongCat::WrongCat( void ) { this->type = "WrongCat"; }
/*-----------------------------------------*/

/*----------- COPY CONSTRUCTOR ------------*/
WrongCat::WrongCat( WrongCat const &src ) {

	this->type = "WrongCat";
	*this = src;
}
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
WrongCat::~WrongCat( void ) {}
/*-----------------------------------------*/
/*#########################################*/


/*############### ACCESSORS ###############*/
/*---------------- GETERS -----------------*/
std::string	WrongCat::getType ( void ) const {

	return (this->type);
}
/*-----------------------------------------*/
/*#########################################*/


void	WrongCat::makeSound( void ) const {

	std::cout << "BEEEEEEEEE !!!!! 🐱❌" << std::endl;
}


/*########### OPERATORS OVERLOAD ##########*/
/*-------------- ASSIGNEMENT --------------*/
WrongCat	&WrongCat::operator=( WrongCat const &rhs ) {

	(void) rhs;
	return (*this);
}
/*-----------------------------------------*/
/*#########################################*/
