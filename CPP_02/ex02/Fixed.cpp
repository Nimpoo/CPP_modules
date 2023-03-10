/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 10:07:33 by mayoub            #+#    #+#             */
/*   Updated: 2023/03/10 17:36:29 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_rawBits = 8;

/*############# CONST / DEST ##############*/
/*---------- DEFAULT CONSTRUCTOR ----------*/
Fixed::Fixed( void ) : _bits( 0 ) {

	return ;
}
/*-----------------------------------------*/

/*----------- COPY CONSTRUCTOR ------------*/
Fixed::Fixed( Fixed const &src ) : _bits( 0 ) {

	*this = src;

	return ;
}
/*-----------------------------------------*/

/*----------- FLOAT CONSTRUCTOR -----------*/
Fixed::Fixed( const float f ) : _bits( 0 ) {

	this->_bits = roundf(f * (1 << this->_rawBits));

	return ;
}
/*-----------------------------------------*/

/*------------ INT CONSTRUCTOR ------------*/
Fixed::Fixed( const int n ) : _bits( 0 ) {

	this->_bits = n << this->_rawBits;

	return ;
}
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
Fixed::~Fixed( void ) {

	return ;
}
/*-----------------------------------------*/
/*#########################################*/


/*############### ACCESSORS ###############*/
/*---------------- SETERS -----------------*/
void	Fixed::setRawBits( int const raw ) {

	this->_bits = raw;
	return ;
}
/*-----------------------------------------*/

/*---------------- GETERS -----------------*/
int	Fixed::getRawBits( void ) const {

	return (this->_bits);
}
/*-----------------------------------------*/
/*#########################################*/


/*########### OPERATORS OVERLOAD ##########*/
/*-------------- GREATER-THAN -------------*/
bool	Fixed::operator>( const Fixed &other ) const {

	return (this->_bits > other._bits);
}
/*-----------------------------------------*/

/*--------------- LESS-THAN ---------------*/
bool	Fixed::operator<( const Fixed &other ) const {

	return (this->_bits < other._bits);
}
/*-----------------------------------------*/

/*-------- GREATER-THAN OR EQUAL-TO -------*/
bool	Fixed::operator>=( const Fixed &other ) const {

	return (this->_bits >= other._bits);
}
/*-----------------------------------------*/

/*--------- LESS-THAN OR EQUAL-TO ---------*/
bool	Fixed::operator<=( const Fixed &other ) const {

	return (this->_bits <= other._bits);
}
/*-----------------------------------------*/

/*---------------- EQUAL TO ---------------*/
bool	Fixed::operator==( const Fixed &other ) const {

	return (this->_bits == other._bits);
}
/*-----------------------------------------*/

/*-------------- NOT EQUAL TO -------------*/
bool	Fixed::operator!=( const Fixed &other ) const {

	return (this->_bits != other._bits);
}
/*-----------------------------------------*/

/*--------------- ADDITION ----------------*/
Fixed	Fixed::operator+( Fixed const &rhs ) const {

	return (this->toFloat() + rhs.toFloat());
}
/*-----------------------------------------*/

/*------------- SUBSTRACTION --------------*/
Fixed	Fixed::operator-( Fixed const &rhs ) const {

	return (this->toFloat() - rhs.toFloat());
}
/*-----------------------------------------*/

/*------------ MULTIPLICATION -------------*/
Fixed	Fixed::operator*( Fixed const &rhs ) const {

	return (this->toFloat() * rhs.toFloat());
}
/*-----------------------------------------*/

/*--------------- DIVISION ----------------*/
Fixed	Fixed::operator/( Fixed const &rhs ) const {

	return (this->toFloat() / rhs.toFloat());
}
/*-----------------------------------------*/

/*---------- ADD : PRE-INCREMENT ----------*/
Fixed	&Fixed::operator++( void ) {

	++this->_bits;
	return (*this);
}
/*-----------------------------------------*/

/*---------- ADD : POST-INCREMENT ---------*/
Fixed	Fixed::operator++( int increment ) {

	(void) increment;

	Fixed	temp = *this;
	this->_bits++;
	return (temp);
}
/*-----------------------------------------*/

/*---------- SUB : PRE-DECREMENT ----------*/
Fixed	&Fixed::operator--( void ) {

	--this->_bits;
	return (*this);
}
/*-----------------------------------------*/

/*---------- SUB : POST-DECREMENT ---------*/
Fixed	Fixed::operator--( int decrement ) {

	(void) decrement;

	Fixed	temp = *this;
	this->_bits--;
	return (temp);
}
/*-----------------------------------------*/

/*-------------- ASSIGNEMENT --------------*/
Fixed	&Fixed::operator=( Fixed const &rhs ) {

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


Fixed	Fixed::max( Fixed &x, Fixed &y) {

	return (x._bits < y._bits ? y : x);
}

const Fixed	Fixed::max( Fixed const &x, Fixed const &y) {

	return (x._bits < y._bits ? y : x);
}

Fixed	Fixed::min( Fixed &x, Fixed &y) {

	return (x._bits > y._bits ? y : x);
}

const Fixed	Fixed::min( Fixed const &x, Fixed const &y) {

	return (x._bits > y._bits ? y : x);
}
