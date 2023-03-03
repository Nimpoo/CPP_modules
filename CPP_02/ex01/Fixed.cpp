/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 10:07:33 by mayoub            #+#    #+#             */
/*   Updated: 2023/03/03 17:50:10 by mayoub           ###   ########.fr       */
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

/*----------- FLOAT CONSTRUCTOR -----------*/
Fixed::Fixed( const float f ) : _bits( 0 ) {

	std::cout << "Float constructor called" << std::endl;

	this->_bits = roundf(f * (1 << this->_rawBits));

	return ;
}
/*-----------------------------------------*/

/*------------ INT CONSTRUCTOR ------------*/
Fixed::Fixed( const int n ) : _bits( 0 ) {

	std::cout << "Int constructor called" << std::endl;

	this->_bits = n << this->_rawBits;

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

	o << i.toFloat();
	return (o);
}
/*-----------------------------------------*/
/*#########################################*/


float	Fixed::toFloat( void ) const {

	return ((float) this->_bits / (1 << this->_rawBits));
}

int	Fixed::toInt( void ) const {

	return (this->_bits >> this->_rawBits);
}

void	Fixed::setRawBits( int const raw ) {

	this->_bits = raw;
	return ;
}

int	Fixed::getRawBits( void ) const {

	return (this->_bits);
}
