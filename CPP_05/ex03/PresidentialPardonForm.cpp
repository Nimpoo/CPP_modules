/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 19:58:32 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/08 19:58:33 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*############# CONST / DEST ##############*/
/*---------- DEFAULT CONSTRUCTOR ----------*/
PresidentialPardonForm::PresidentialPardonForm( void ) : Form( "PresidentialPardonForm", 25, 5 ), _guilty( "Default" ) { }
/*-----------------------------------------*/

/*----------- INIT CONSTRUCTOR ------------*/
PresidentialPardonForm::PresidentialPardonForm( std::string const &guilty ) : Form( "PresidentialPardonForm", 25, 5 ), _guilty( guilty ) { }
/*-----------------------------------------*/

/*----------- COPY CONSTRUCTOR ------------*/
PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &src ) : Form( src ) { *this = src; }
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
PresidentialPardonForm::~PresidentialPardonForm( void ) { }
/*-----------------------------------------*/
/*#########################################*/


void	PresidentialPardonForm::execute( Bureaucrat const &executor ) const {

	std::cout << executor.getName() << " executed " << getName() << std::endl;
	std::cout << "The Galactic President, \e[4;34mZaphod Beeblebrox\e[0m, \e[1;32mACCEPT\e[0m the forgiveness of \e[1;37m" << executor.getName() << "\e[0m 🪐." << std::endl;
}


/*############### ACCESSORS ###############*/
/*---------------- GETERS -----------------*/
std::string const	&PresidentialPardonForm::getTarget( void ) const { return ( this->_guilty ); }
/*-----------------------------------------*/

/*---------------- SETERS -----------------*/
/*-----------------------------------------*/
/*#########################################*/


/*########### OPERATORS OVERLOAD ##########*/
/*-------------- ASSIGNEMENT --------------*/
PresidentialPardonForm	&PresidentialPardonForm::operator=( PresidentialPardonForm const &rhs ) {

	if (this != &rhs)
		this->_guilty = rhs._guilty;

	return (*this);
}
/*-----------------------------------------*/

/*--------------- STREAM OUT --------------*/
std::ostream	&operator<<( std::ostream &o, PresidentialPardonForm const &i ) {

	o << "Presidential in \e[1;37" << i.getTarget() << "\e[0m." << std::endl;

	return (o);
}
/*-----------------------------------------*/
/*#########################################*/
