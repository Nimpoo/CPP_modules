/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:39:09 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/07 11:44:24 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

Sample::Sample( void ) {

	std::cout << "Constructor called" << std::endl;

// * On peut accéder aux attribus/fonctions membres PUBLIC et PRIVATE car la fonction
// * Sample( void ) est membre de la même class que les PRIVATE, elle est interne à la class

	this->publicFoo = 0;
	std::cout << "this->publicFoo: " << this->publicFoo << std::endl;

	this->_privateFoo = 0;
	std::cout << "this->_privateFoo: " << this->_privateFoo << std::endl;

	this->publicBar();

	this->_privateBar();

	return ;

}

Sample::~Sample( void ) {

	std::cout << "Destructor called" << std::endl;
	return ;

}

void	Sample::publicBar( void ) const {

	std::cout << "Member function [publicBar] is called" << std::endl;
	return ;

}

void	Sample::_privateBar( void ) const {

	std::cout << "Member function [_privateBar] is called" << std::endl;
	return ;

}
