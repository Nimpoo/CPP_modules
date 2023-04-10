/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 19:57:52 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/10 00:52:32 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*############# CONST / DEST ##############*/
/*---------- DEFAULT CONSTRUCTOR ----------*/
Form::Form( void ) :
_name( "Form" ),
_gradeSign( 5 ),
_gradeExec( 4 ),
_signed( false ) {

	std::cout << "\e[1m* WHOOSH 🖨  *\e[0m The DEFAULT printer \e[1;32mprinted a new Form\e[0m \e[1;37m" << this->_name << "\e[0m with \e[1;35m" << this->_gradeSign << " grade to SIGN\e[0m and \e[1;36m" << this->_gradeExec << " grade to EXEC\e[0m 📑" << std::endl;

	if (this->_gradeSign > 150 || this->_gradeExec > 150)
		throw GradeTooLowException();
	if ( this->_gradeSign < 1 || this->_gradeExec < 1)
		throw GradeTooHighException();
}
/*-----------------------------------------*/

/*----------- INIT CONSTRUCTOR ------------*/
Form::Form( std::string const &name, int const &gradeSign, int const &gradeExec ) :
_name( name ),
_gradeSign( gradeSign ),
_gradeExec( gradeExec ),
_signed( false ) {

	std::cout << "\e[1m* WHOOSH 🖨  *\e[0m The printer \e[1;32mprinted a new Form\e[0m \e[1;37m" << this->_name << "\e[0m with \e[1;35m" << this->_gradeSign << " grade to SIGN\e[0m and \e[1;36m" << this->_gradeExec << " grade to EXEC\e[0m 📑" << std::endl;

	if (this->_gradeSign > 150 || this->_gradeExec > 150)
		throw GradeTooLowException();
	if ( this->_gradeSign < 1 || this->_gradeExec < 1)
		throw GradeTooHighException();
}
/*-----------------------------------------*/

/*----------- COPY CONSTRUCTOR ------------*/
Form::Form( Form const &src ) :
_name( src._name ),
_gradeSign( src._gradeSign ),
_gradeExec( src._gradeExec ),
_signed( src._signed ) {

	std::cout << "\e[1m* WHOOSH 🖨  *\e[0m The COPY printer \e[1;32mprinted a new Form\e[0m \e[1;37m" << this->_name << "\e[0m with \e[1;35m" << this->_gradeSign << " grade to SIGN\e[0m and \e[1;36m" << this->_gradeExec << " grade to EXEC\e[0m 📑" << std::endl;

	if (this->_gradeSign > 150 || this->_gradeExec > 150)
		throw GradeTooLowException();
	if ( this->_gradeSign < 1 || this->_gradeExec < 1)
		throw GradeTooHighException();
}
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
Form::~Form( void ) {

	std::cout << "Look, I got a three points with the form \e[1;37m" << this->_name <<"\e[0m in the \e[1;31mTRASH CAN\e[0m ! 🗑" << std::endl;
}
/*-----------------------------------------*/
/*#########################################*/


void	Form::beSigned( Bureaucrat const &employee ) {

	exceptionCheck(employee);
	if (this->_signed != true)
		this->_signed = true;
}

void	Form::exceptionCheck( Bureaucrat const &employee ) const {

	if (employee.getGrade() > this->_gradeSign)
		throw GradeTooLowException();
}


/*############### EXCEPTIONS ##############*/
const char	*Form::GradeTooLowException::what() const throw() {
	return ("🚨\e[1;31mALERT\e[0m🚨 : the grade of the form is \e[1;37mTOO LOW FOR BE SIGNED\e[0m");
}

const char  *Form::GradeTooHighException::what() const throw() {
	return ("🚨\e[1;31mALERT\e[0m🚨 : the grade of the form is \e[1;37mTOO HIGH FOR BE SIGNED\e[0m");
}

const char  *Form::FormAlreadySignedExcepetion::what() const throw() {
	return ("🚨\e[1;31mALERT\e[0m🚨 : \e[1;37mFORM ALREADY SIGNED\e[0m");
}

const char  *Form::FormNotSignedException::what() const throw() {
	return ("🚨\e[1;31mALERT\e[0m🚨 : \e[1;37mFORM NOT SIGNED\e[0m");
}
/*#########################################*/


/*############### ACCESSORS ###############*/
/*---------------- GETERS -----------------*/
std::string const	&Form::getName( void ) const { return ( this->_name ); }

int const	&Form::getGradeSign( void ) const { return ( this->_gradeSign ); }

int const	&Form::getGradeExec( void ) const { return ( this->_gradeExec ); }

bool const	&Form::getSigned( void ) const { return ( this->_signed ); }
/*-----------------------------------------*/

/*---------------- SETERS -----------------*/
/*-----------------------------------------*/
/*#########################################*/


/*########### OPERATORS OVERLOAD ##########*/
/*-------------- ASSIGNEMENT --------------*/
Form    &Form::operator=( Form const &rhs ) {

	if (this != &rhs)
	{
		this->_signed = rhs._signed;
	}

	return (*this);
}
/*-----------------------------------------*/

/*--------------- STREAM OUT --------------*/
std::ostream	&operator<<( std::ostream &o, Form const &i ) {

	o << "The \e[1;37m" << i.getName() << "\e[0m need a \e[1;37mBureaucrat\e[0m with \e[1;35m" << i.getGradeSign() << "grade to be signed\e[0m and \e[1;36m" << i.getGradeExec() << "to be execute\e[0m." << std::endl;

	return (o);
}
/*-----------------------------------------*/
/*#########################################*/

