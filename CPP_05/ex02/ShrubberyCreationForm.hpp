/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 23:34:07 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/08 16:16:08 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <exception>
# include <stdexcept>

# include "Form.hpp"
# include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form {

public:

/*------------- CONST / DEST --------------*/
	ShrubberyCreationForm( void );
	ShrubberyCreationForm( std::string const &garden );
	ShrubberyCreationForm( ShrubberyCreationForm const &src );
	virtual ~ShrubberyCreationForm( void );

	void	execute( Bureaucrat const &executor ) const;

/*---------------- GETERS -----------------*/
	std::string const	&getTarget( void ) const;

/*----------- OPERATORS OVERLOAD ----------*/
	ShrubberyCreationForm	&operator=( ShrubberyCreationForm const &rhs );

private:

	std::string	_garden;

};

/*--------------- STREAM OUT --------------*/
std::ostream	&operator<<( std::ostream &o, ShrubberyCreationForm const &i );

#endif
