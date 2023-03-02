/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:01:47 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/02 19:35:37 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

Sample::Sample( void ) : _foo( 0 ) {

	std::cout << "DEFAULT		Constructor called" << std::endl;

	return ;
}

Sample::Sample( int const n ) : _foo( n ) {

	std::cout << "PARAMETRIC	Constructor called" << std::endl;

	return ;
}

Sample::Sample( Sample const &src ) {

	std::cout << "COPY		Constructor called" << std::endl;
	*this = src;

	return ;
}

Sample::~Sample( void ) {

	std::cout << "Destructor called" << std::endl;

	return ;
}

int		Sample::getFoo( void ) const {

	return (this->_foo);
}

Sample	&Sample::operator=( Sample const &rhs ) {

	std::cout << "Assignation operator = called" << std::endl;

	if (this != &rhs)
		this->_foo = rhs.getFoo();

	return (*this);
}

std::ostream	&operator<<( std::ostream &o, Sample const &i ) {

// ? On peut rentrer ce que l'on veut dans ostream lors de la surcharge de l'opérateur
	o << "The value of _foo is : " << i.getFoo();

	return (o);
}
