/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:10:15 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/23 13:56:13 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include <stdexcept>

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
