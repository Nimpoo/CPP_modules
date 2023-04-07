/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 08:13:31 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/07 11:43:50 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*############# CONST / DEST ##############*/
/*---------- DEFAULT CONSTRUCTOR ----------*/
Form::Form( void ) : _name( "Form" ), _gradeSign( 5 ), _gradeExec( 4 ), _signed( false ) {


}
/*-----------------------------------------*/

/*----------- INIT CONSTRUCTOR ------------*/
Form::Form( std::string const &name) : _name( name ), _gradeSign( 5 ), _gradeExec( 4 ), _signed( false ) {


}
/*-----------------------------------------*/

/*----------- COPY CONSTRUCTOR ------------*/
Form::Form( Form const &src ) :
_name( src._name ),
_gradeSign( src._gradeSign ),
_gradeExec( src._gradeExec ),
_signed( src._signed )
{ }
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
Form::~Form( void ) { }
/*-----------------------------------------*/
/*#########################################*/


void	Form::beSigned( Bureaucrat const &employee ) {

	if (this->_signed != true)
	{
		this->_signed = true;
		std::cout << "This Form is now signed !" << std::endl;
	}
	else
		std::cout << "This Form is already signed." << std::endl;
}

void	Form::exceptionCheck( Bureaucrat const &employee ) const {

	if (employee.getGrade() < this->_gradeSign)
		throw GradeTooLowException();
	if (employee.getGrade() > this->_gradeSign)
		throw GradeTooHighException();
}


const char	*Form::GradeTooHighException::what() const throw() {
	return ("🚨\e[1;31mALERT\e[0m🚨 : the grade is \e[1;37mTOO HIGH\e[0m");
}

const char	*Form::GradeTooLowException::what() const throw() {
	return ("🚨\e[1;31mALERT\e[0m🚨 : the grade is \e[1;37mTOO LOW\e[0m");
}

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

	(void) i;

	return (o);
}
/*-----------------------------------------*/
/*#########################################*/

