/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 23:29:40 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/10 13:21:33 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*############# CONST / DEST ##############*/
/*---------- DEFAULT CONSTRUCTOR ----------*/
Bureaucrat::Bureaucrat( void ) : _name( "Bureaucrat" ), _grade( 75 ) {

	std::cout << "The new Bureaucrat \e[1;37m" << this->_name << "\e[0m is \e[1;32mhired\e[0m at \e[1;35m" << this->_grade << " grade\e[0m. 💸" << std::endl;
	this->exceptionCheck();
}
/*-----------------------------------------*/

/*----------- INIT CONSTRUCTOR ------------*/
Bureaucrat::Bureaucrat( std::string const &name, int const &grade ) : _name( name ), _grade( grade ) {

	std::cout << "The new Bureaucrat \e[1;37m" << this->_name << "\e[0m is \e[1;32mhired\e[0m at \e[1;35m" << this->_grade << " grade\e[0m. 💸" << std::endl;
	this->exceptionCheck();
}
/*-----------------------------------------*/

/*----------- COPY CONSTRUCTOR ------------*/
Bureaucrat::Bureaucrat( Bureaucrat const &src ) {

	std::cout << "The new \e[1;37mCOPY\e[0m Bureaucrat \e[1;37m" << this->_name << "\e[0m is \e[1;32mhired\e[0m at \e[1;35m" << this->_grade << " grade\e[0m. 💸" << std::endl;

	*this = src;
}
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
Bureaucrat::~Bureaucrat( void ) {

	std::cout << "\e[1;37m" << this->_name << "\e[0m is \e[1;31mFIRED\e[0m at \e[1;35m" << this->_grade << " grade\e[0m ! 📉" << std::endl;
}
/*-----------------------------------------*/
/*#########################################*/


void	Bureaucrat::upGrade( void ) {

	std::cout << "\e[1;36m[ Upgrading the]\e[0m \e[1;37mBureaucrat " << this->_name << "\e[1;36m ... ]\n---> \e[0m";
	this->_grade--;
	this->exceptionCheck();
}

void	Bureaucrat::downGrade( void ) {

	std::cout << "\e[1;36m[ Downgrading the]\e[0m \e[1;37mBureaucrat " << this->_name << "\e[1;36m ... ]\n---> \e[0m";
	this->_grade++;
	this->exceptionCheck();
}

void	Bureaucrat::exceptionCheck( void ) const {

	if (this->_grade > 150)
		throw GradeTooLowException();
	if (this->_grade < 1)
		throw GradeTooHighException();
}

void	Bureaucrat::signForm( Form &form ) {

	if (form.getSigned())
	{
		std::cout << "This Form is already signed." << std::endl;
		throw Form::FormAlreadySignedExcepetion();
		return;
	}
	if (this->_grade <= form.getGradeSign() )
	{
		std::cout << this->_name << " signed " << form.getName() << std::endl;
		form.beSigned( *this );
	}
	else
	{
		std::cout << this->_name << " couldn't sign " << form.getName() << " because the grade is not reach." << std::endl;
		throw GradeTooLowException();
	}
}

void	Bureaucrat::executeForm( Form const &form ) {

	if (!form.getSigned())
		throw Form::FormNotSignedException();
	if (this->_grade > form.getGradeExec())
	{
		std::cout << this->_name << " couldn't execute " << form.getName() << " because the grade is not reach." << std::endl;
		throw GradeTooLowException();
	}
	form.execute( *this );
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
