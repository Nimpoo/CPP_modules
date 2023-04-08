/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 23:33:48 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/08 17:05:57 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <exception>
# include <stdexcept>

# include "Form.hpp"
# include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form {

public:

/*------------- CONST / DEST --------------*/
	PresidentialPardonForm( void );
	PresidentialPardonForm( std::string const &guilty );
	PresidentialPardonForm( PresidentialPardonForm const &src );
	virtual ~PresidentialPardonForm( void );

	void	execute( Bureaucrat const &executor ) const;

/*---------------- GETERS -----------------*/
	std::string const	&getTarget( void ) const;

/*----------- OPERATORS OVERLOAD ----------*/
	PresidentialPardonForm	&operator=( PresidentialPardonForm const &rhs );

private:

	std::string	_guilty;

};

/*--------------- STREAM OUT --------------*/
std::ostream	&operator<<( std::ostream &o, PresidentialPardonForm const &i );

#endif
