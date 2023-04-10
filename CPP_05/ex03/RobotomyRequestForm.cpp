/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 19:58:48 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/08 19:58:50 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*############# CONST / DEST ##############*/
/*---------- DEFAULT CONSTRUCTOR ----------*/
RobotomyRequestForm::RobotomyRequestForm( void ) : Form( "RobotomyRequestForm", 72, 45 ), _target( "Default" ) { }
/*-----------------------------------------*/

/*----------- INIT CONSTRUCTOR ------------*/
RobotomyRequestForm::RobotomyRequestForm( std::string const &target ) : Form( "RobotomyRequestForm", 72, 45 ), _target( target ) { }
/*-----------------------------------------*/

/*----------- COPY CONSTRUCTOR ------------*/
RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &src ) : Form( src ) { *this = src; }
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
RobotomyRequestForm::~RobotomyRequestForm( void ) { }
/*-----------------------------------------*/
/*#########################################*/


void	RobotomyRequestForm::execute( Bureaucrat const &executor ) const {

	srand(time(0));
	int	fifty_pourcent = rand() % 2;

	std::cout << executor.getName() << " executed " << getName() << std::endl;

	std::cout << "\e[1;37m👷 * RIIIIZZZZZZZzzzzzz... BZZZZZZZZZZzzzzzz... * 👷‍♂️\e[0m, WOW this Form for try to robotomize \e[1;37m" << executor.getName() << "\e[0m make some noise or what 😂😂😭" << std::endl;
	if (fifty_pourcent == 1)
		std::cout << "✅ La robotomisation de \e[1;37m" << executor.getName() << "\e[0m est une \e[1;32mRÉUSSITE\e[0m" << std::endl;
	else
		std::cout << "❌ La robotomisation de \e[1;37m" << executor.getName() << "\e[0m est un \e[1;31mÉCHEC\e[0m" << std::endl;
}


/*############### ACCESSORS ###############*/
/*---------------- GETERS -----------------*/
std::string const	&RobotomyRequestForm::getTarget( void ) const { return ( this->_target ); }
/*-----------------------------------------*/

/*---------------- SETERS -----------------*/
/*-----------------------------------------*/
/*#########################################*/


/*########### OPERATORS OVERLOAD ##########*/
/*-------------- ASSIGNEMENT --------------*/
RobotomyRequestForm	&RobotomyRequestForm::operator=( RobotomyRequestForm const &rhs ) {

	if (this != &rhs)
		this->_target = rhs._target;

	return (*this);
}
/*-----------------------------------------*/

/*--------------- STREAM OUT --------------*/
std::ostream	&operator<<( std::ostream &o, RobotomyRequestForm const &i ) {

	o << "Robotomy in \e[1;37" << i.getTarget() << "\e[0m." << std::endl;

	return (o);
}
/*-----------------------------------------*/
/*#########################################*/
