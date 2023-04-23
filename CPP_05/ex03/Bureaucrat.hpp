/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 19:57:44 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/23 13:59:06 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include <stdexcept>

# include "Form.hpp"

class Bureaucrat {

public:

/*------------- CONST / DEST --------------*/
	Bureaucrat( void );
	Bureaucrat( std::string const &name, int const &grade );
	Bureaucrat( Bureaucrat const &src );
	virtual ~Bureaucrat( void );

	void	upGrade( void );
	void	downGrade( void );
	void	exceptionCheck( void ) const;

	void	signForm( Form &form );	
	void	executeForm( Form const &form );

/*---------------- GETERS -----------------*/
	std::string const	&getName( void ) const;
	int const			&getGrade( void ) const;

/*----------- OPERATORS OVERLOAD ----------*/
	Bureaucrat	&operator=( Bureaucrat const &rhs );


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
	int					_grade;

};

/*--------------- STREAM OUT --------------*/
std::ostream	&operator<<( std::ostream &o, Bureaucrat const &i );

#endif

class Bureaucrat;
