/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 02:17:28 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/11 17:50:23 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*############# CONST / DEST ##############*/
/*---------- DEFAULT CONSTRUCTOR ----------*/
WrongCat::WrongCat( void ) { this->type = "WrongCat";

	std::cout << "\033[1;37mWrongCat\033[0m was \033[1;32mCONSTRUCT\033[0m 🐱" << std::endl;
}
/*-----------------------------------------*/

/*----------- COPY CONSTRUCTOR ------------*/
WrongCat::WrongCat( WrongCat const &src ) { *this = src;

	this->type = "WrongCat";
	std::cout << "\033[1;37mWrongCat COPY\033[0m was \033[1;32mCONSTRUCT\033[0m 🐱" << std::endl;
}
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
WrongCat::~WrongCat( void ) {

	std::cout << "\033[1;37mWrongCat\033[0m was \033[1;31mDESTRUCT\033[0m 🥩" << std::endl;
}
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

	this->type = rhs.type;
	return (*this);
}
/*-----------------------------------------*/
/*#########################################*/
