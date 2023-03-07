/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 23:29:53 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/07 15:07:10 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*############# CONST / DEST ##############*/
/*---------- DEFAULT CONSTRUCTOR ----------*/
Point::Point( void ) : _x( 0 ), _y( 0 ) {

	return ;
}
/*-----------------------------------------*/

/*----------- FLOAT CONSTRUCTOR -----------*/
Point::Point( const float x, const float y ) : _x( x ), _y( y ) {

	return ;
}
/*-----------------------------------------*/

/*----------- COPY CONSTRUCTOR ------------*/
Point::Point( Point const &src ) {

	*this = src;

	return ;
}
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
Point::~Point( void ) {

	return ;
}
/*-----------------------------------------*/
/*#########################################*/


/*############### ACCESSORS ###############*/
/*---------------- GETERS -----------------*/
const Fixed	Point::getXCoor( void ) const {

	return (this->_x);
}

const Fixed	Point::getYCoor( void ) const {

	return (this->_y);
}
/*-----------------------------------------*/
/*#########################################*/


/*########### OPERATORS OVERLOAD ##########*/
/*-------------- ASSIGNEMENT --------------*/
Point	&Point::operator=( Point const &rhs ) {

	*(Fixed *)&this->_x = rhs.getXCoor();
	*(Fixed *)&this->_y = rhs.getYCoor();

	return (*this);
}
/*-----------------------------------------*/

/*--------------- STREAM OUT --------------*/
std::ostream	&operator<<( std::ostream &o, Point const &i ) {


	return (o << "(" << i.getXCoor() << ", " << i.getYCoor() << ")");
}
/*-----------------------------------------*/
/*#########################################*/
