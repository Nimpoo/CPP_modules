/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 23:33:59 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/08 16:35:19 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <exception>
# include <stdexcept>
# include <cstdlib>
# include <ctime>

# include "Form.hpp"
# include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form {

public:

/*------------- CONST / DEST --------------*/
	RobotomyRequestForm( void );
	RobotomyRequestForm( std::string const &target );
	RobotomyRequestForm( RobotomyRequestForm const &src );
	virtual ~RobotomyRequestForm( void );

	void	execute( Bureaucrat const &executor ) const;

/*---------------- GETERS -----------------*/
	std::string const	&getTarget( void ) const;

/*----------- OPERATORS OVERLOAD ----------*/
	RobotomyRequestForm	&operator=( RobotomyRequestForm const &rhs );

private:

	std::string	_target;

};

/*--------------- STREAM OUT --------------*/
std::ostream	&operator<<( std::ostream &o, RobotomyRequestForm const &i );

#endif
