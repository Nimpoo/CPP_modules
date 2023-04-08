/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 23:30:57 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/08 16:27:58 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>
# include <stdexcept>
# include <fstream>

# include "Bureaucrat.hpp"

class Form {

public:

/*------------- CONST / DEST --------------*/
	Form( std::string const &name, int const &gradeSign, int const &gradeExec );
	Form( Form const &src );
	virtual ~Form( void );

	void			beSigned( Bureaucrat const &employee );
	void			exceptionCheck( Bureaucrat const &employee ) const;
	virtual void	execute( Bureaucrat const &executor ) const = 0;

/*---------------- GETERS -----------------*/
	std::string const	&getName( void ) const;
	int	const			&getGradeSign( void ) const;
	int	const			&getGradeExec( void ) const;
	bool const			&getSigned( void ) const;

/*----------- OPERATORS OVERLOAD ----------*/
	Form	&operator=( Form const &rhs );


/*############### EXCEPTIONS ##############*/
	class GradeTooLowException : public std::exception {

	public:

		virtual const char *what() const throw();

	};

	class GradeTooHighException : public std::exception {

		virtual const char *what() const throw();

	};

	class FormAlreadySignedExcepetion : public std::exception {

		virtual const char *what() const throw();

	};

	class FormNotSignedException : public std::exception {

		virtual const char *what() const throw();
	};
/*#########################################*/


private:

	Form( void );

	std::string const	_name;
	int const			_gradeSign;
	int const			_gradeExec;
	bool				_signed;

};

/*--------------- STREAM OUT --------------*/
std::ostream	&operator<<( std::ostream &o, Form const &i );

#endif

class Form;
