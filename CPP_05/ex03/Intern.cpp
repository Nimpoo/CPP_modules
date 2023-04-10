/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 20:00:44 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/10 00:05:44 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*############# CONST / DEST ##############*/
/*---------- DEFAULT CONSTRUCTOR ----------*/
Intern::Intern( void ) {

	std::cout << "Look ! I \e[1;32mfound\e[0m a new \e[1;37mIntern\e[0m ! Go make me a coffee, and quick ! 🍵" << std::endl;
}
/*-----------------------------------------*/

/*----------- INIT CONSTRUCTOR ------------*/
/*-----------------------------------------*/

/*----------- COPY CONSTRUCTOR ------------*/
Intern::Intern( Intern const &src ) {

	std::cout << "Look ! I \e[1;32mfound\e[0m a new \e[1;37mCOPY Intern\e[0m ! Go make me a coffee, and quick ! 🍵" << std::endl;

	*this = src;
}
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
Intern::~Intern( void ) {

	std::cout << "The coffee was too cold... You, \e[1;37mIntern\e[0m, you are \e[1;31mFIRED\e[0m !!! 🥶" << std::endl;
}
/*-----------------------------------------*/
/*#########################################*/


Form	*Intern::makeForm( std::string const &form_name, std::string const &target ) {

	std::string	form[3] = { "shrubbery_creation", "robotomy_request", "presidential_pardon" };
	int			e = -1;

	for (int i = 0; i < 3; i++)
		if (form[i] == form_name)
			e = i;

	switch (e)
	{
		case 0:
			std::cout << "\e[1;37mIntern\e[0m creates \e[1;33m" << form_name << "\e[0m." << std::endl;
			return (new ShrubberyCreationForm(target));

		case 1:
			std::cout << "\e[1;37mIntern\e[0m creates \e[1;33m" << form_name << "\e[0m." << std::endl;
			return (new RobotomyRequestForm(target));

		case 2:
			std::cout << "\e[1;37mIntern\e[0m creates \e[1;33m" << form_name << "\e[0m." << std::endl;
			return (new PresidentialPardonForm(target));

		default:
			std::cout << "\e[1;37mIntern\e[0m can not creates this form." << std::endl;
			throw UnknownFormException();
			return (NULL);
	}
}


/*############### EXCEPTIONS ##############*/
const char	*Intern::UnknownFormException::what() const throw() {
	return ("🚨\e[1;31mALERT\e[0m🚨 : this type of form \e[1;37mDOES NOT EXIST\e[0m");
}
/*#########################################*/


/*############### ACCESSORS ###############*/
/*---------------- GETERS -----------------*/
/*-----------------------------------------*/

/*---------------- SETERS -----------------*/
/*-----------------------------------------*/
/*#########################################*/


/*########### OPERATORS OVERLOAD ##########*/
/*-------------- ASSIGNEMENT --------------*/
Intern	&Intern::operator=( Intern const &rhs ) {

	(void) rhs;

	return (*this);
}
/*-----------------------------------------*/
/*--------------- STREAM OUT --------------*/
std::ostream	&operator<<( std::ostream &o, Intern const &i ) {

	(void) i;
	o << "It's just a simple \e[1;37mIntern\e[0m, pfffffff...." << std::endl;

	return (o);
}
/*-----------------------------------------*/
/*#########################################*/
