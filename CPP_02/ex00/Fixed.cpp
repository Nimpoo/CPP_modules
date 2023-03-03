/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 10:07:33 by mayoub            #+#    #+#             */
/*   Updated: 2023/03/03 14:19:47 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_rawBits = 8;

/*############# CONST / DEST ##############*/
/*--------- DEFAULT CONSTRUCTOR -----------*/
Fixed::Fixed( void ) : _bits( 0 ) {

	std::cout << "Default constructor called" << std::endl;
	return ;
}
/*-----------------------------------------*/

/*----------- COPY CONSTRUCTOR ------------*/
Fixed::Fixed( Fixed const &src ) : _bits( 0 ) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return ;
}
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
Fixed::~Fixed( void ) {

	std::cout << "Destructor called" << std::endl;
	return ;
}
/*-----------------------------------------*/
/*#########################################*/


/*############### OPERATORS ###############*/
/*-------------- ASSIGNEMENT --------------*/
Fixed	&Fixed::operator=( Fixed const &rhs ) {

	std::cout << "Copy assignment operator called" << std::endl;
	this->_bits = rhs.getRawBits();

	return (*this);
}
/*-----------------------------------------*/

/*--------------- STREAM OUT --------------*/
std::ostream	&operator<<( std::ostream &o, Fixed const &i ) {

	(void) i;
	return (o);
}
/*-----------------------------------------*/
/*#########################################*/


void	Fixed::setRawBits( int const raw ) {

	this->_bits = raw;
	return ;
}

int	Fixed::getRawBits( void ) const {

	std::cout << "getRawBits member function called" << std::endl;
	return (this->_bits);
}
