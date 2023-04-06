/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 12:46:17 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/06 12:52:40 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*############# CONST / DEST ##############*/
/*---------- DEFAULT CONSTRUCTOR ----------*/
Bureaucrat::Bureaucrat( void ) : _name( "Bureaucrat" ), _grade( 75 ) {

	if (this->_grade > 150)
		throw GradeTooLowException();
	if (this->_grade < 1)
		throw GradeTooHighException();

	std::cout << "The new Bureaucrat \e[1;37m" << this->_name << "\e[0m is \e[1;32mhired\e[0m at \e[1;35m" << this->_grade << " grade\e[0m. 💸" << std::endl;
}
/*-----------------------------------------*/

/*----------- INIT CONSTRUCTOR ------------*/
Bureaucrat::Bureaucrat( std::string const &name, int const &grade ) : _name( name ), _grade( grade ) {

	if (this->_grade > 150)
		throw GradeTooLowException();
	if (this->_grade < 1)
		throw GradeTooHighException();

	std::cout << "The new Bureaucrat \e[1;37m" << this->_name << "\e[0m is \e[1;32mhired\e[0m at \e[1;35m" << this->_grade << " grade\e[0m. 💸" << std::endl;
}
/*-----------------------------------------*/

/*----------- COPY CONSTRUCTOR ------------*/
Bureaucrat::Bureaucrat( Bureaucrat const &src ) {

	*this = src;

	std::cout << "The new \e[1;37mCOPY\e[0m Bureaucrat \e[1;37m" << this->_name << "\e[0m is \e[1;32mhired\e[0m at \e[1;35m" << this->_grade << " grade\e[0m. 💸" << std::endl;
}
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
Bureaucrat::~Bureaucrat( void ) {

	std::cout << "\e[1;37m" << this->_name << "\e[0m is \e[1;31mFIRED\e[0m at \e[1;35m" << this->_grade << " grade\e[0m ! 📉" << std::endl;
}
/*-----------------------------------------*/
/*#########################################*/


void	Bureaucrat::upGrade( void ) {

	this->_grade--;

	if (this->_grade < 1)
		throw GradeTooHighException();
}

void	Bureaucrat::downGrade( void ) {

	this->_grade++;

	if (this->_grade > 150)
		throw GradeTooLowException();
}


/*############### ACCESSORS ###############*/
/*---------------- GETERS -----------------*/
std::string const	&Bureaucrat::getName( void ) const {

	return ( this->_name );
}

int const	&Bureaucrat::getGrade( void ) const {

	return ( this->_grade );
}
/*-----------------------------------------*/

/*---------------- SETERS -----------------*/
/*-----------------------------------------*/
/*#########################################*/


/*########### OPERATORS OVERLOAD ##########*/
/*-------------- ASSIGNEMENT --------------*/
Bureaucrat    &Bureaucrat::operator=( Bureaucrat const &rhs ) {

	if (this != &rhs)
		this->_grade = rhs._grade;

	return (*this);
}
/*-----------------------------------------*/

/*--------------- STREAM OUT --------------*/
std::ostream	&operator<<( std::ostream &o, Bureaucrat const &i ) {

	o << i.getName() << ", bureaucrat grade " << i.getGrade() << "." << std::endl;

	return (o);
}
/*-----------------------------------------*/
/*#########################################*/
