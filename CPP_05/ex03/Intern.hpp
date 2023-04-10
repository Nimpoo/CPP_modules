/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 20:01:01 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/10 00:02:33 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <exception>
# include <stdexcept>

# include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {

public:

/*------------- CONST / DEST --------------*/
	Intern( void );
	Intern( Intern const &src );
	virtual ~Intern( void );

	Form	*makeForm( std::string const &form_name, std::string const &target );

/*----------- OPERATORS OVERLOAD ----------*/
	Intern	&operator=( Intern const &rhs );


/*############### EXCEPTIONS ##############*/
	class UnknownFormException : public std::exception {

	public:

		virtual const char *what() const throw();

	};
/*#########################################*/

};

/*--------------- STREAM OUT --------------*/
std::ostream	&operator<<( std::ostream &o, Intern const &i );

#endif
