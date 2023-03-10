/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 19:01:00 by mayoub            #+#    #+#             */
/*   Updated: 2023/03/10 19:04:25 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*############# CONST / DEST ##############*/
/*---------- DEFAULT CONSTRUCTOR ----------*/
WrongAnimal::WrongAnimal( void ) : type("Is it alive ???") {}
/*-----------------------------------------*/

/*----------- COPY CONSTRUCTOR ------------*/
WrongAnimal::WrongAnimal( WrongAnimal const &src ) : type("Copy") {

	*this = src;
}
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

	std::cout << "BRUH" << std::endl;
}


/*########### OPERATORS OVERLOAD ##########*/
/*-------------- ASSIGNEMENT --------------*/
WrongAnimal	&WrongAnimal::operator=( WrongAnimal const &rhs ) {

	(void) rhs;
	return (*this);
}
/*-----------------------------------------*/
/*#########################################*/
