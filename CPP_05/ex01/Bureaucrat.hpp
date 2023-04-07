/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 23:13:23 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/06 23:14:31 by sihemayoub       ###   ########.fr       */
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

		virtual const char *what() const throw()
		{
			return ("🚨\e[1;31mALERT\e[0m🚨 : the grade is \e[1;37mTOO HIGH\e[0m");
		}

	};

	class GradeTooLowException : public std::exception {

	public:

		virtual const char *what() const throw()
		{
			return ("🚨\e[1;31mALERT\e[0m🚨 : the grade is \e[1;37mTOO LOW\e[0m");
		}

	};
/*#########################################*/


private:

	std::string const	_name;
	int					_grade;

};

/*--------------- STREAM OUT --------------*/
std::ostream	&operator<<( std::ostream &o, Bureaucrat const &i );

#endif
