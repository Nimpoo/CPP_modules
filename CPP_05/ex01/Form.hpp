/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 23:23:50 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/07 11:38:57 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>
# include <stdexcept>

# include "Bureaucrat.hpp"

class Form {

public:

/*------------- CONST / DEST --------------*/
	Form( void );
	Form( std::string const &name );
	Form( Form const &src );
	virtual ~Form( void );

	void	beSigned( Bureaucrat const &employee );
	void	exceptionCheck( Bureaucrat const &employee ) const;

/*---------------- GETERS -----------------*/
	std::string const	&getName( void ) const;
	int	const			&getGradeSign( void ) const;
	int	const			&getGradeExec( void ) const;
	bool const			&getSigned( void ) const;

/*----------- OPERATORS OVERLOAD ----------*/
	Form	&operator=( Form const &rhs );


/*############### EXCEPTIONS ##############*/
	class GradeTooHighException : public std::exception {

	public:

		virtual const char *what() const throw();

	};

	class GradeTooLowException : public std::exception {

	public:

		virtual const char *what() const throw();

	};

/*#########################################*/


private:

	std::string const	_name;
	int const			_gradeSign;
	int const			_gradeExec;
	bool				_signed;

};

/*--------------- STREAM OUT --------------*/
std::ostream	&operator<<( std::ostream &o, Form const &i );

#endif
