/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 02:17:28 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/11 16:38:49 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*############# CONST / DEST ##############*/
/*---------- DEFAULT CONSTRUCTOR ----------*/
WrongCat::WrongCat( void ) { this->type = "WrongCat"; }
/*-----------------------------------------*/

/*----------- COPY CONSTRUCTOR ------------*/
WrongCat::WrongCat( WrongCat const &src ) { *this = src;

	this->type = "WrongCat";
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

	std::cout << "WTF i am non-polymorph, how i cry as WrongCat ?" << std::endl;
}


/*########### OPERATORS OVERLOAD ##########*/
/*-------------- ASSIGNEMENT --------------*/
WrongCat	&WrongCat::operator=( WrongCat const &rhs ) {

	(void) rhs;
	return (*this);
}
/*-----------------------------------------*/
/*#########################################*/
