/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 13:39:54 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/22 17:16:26 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*############# CONST / DEST ##############*/
/*---------- DEFAULT CONSTRUCTOR ----------*/
Span::Span( void ) : _size( 0 ) { this->_span.reserve( this->_size ); this->_span_ite = this->_span.begin(); }
/*-----------------------------------------*/

/*----------- INIT CONSTRUCTOR ------------*/
Span::Span( unsigned int N ) : _size( N ) { this->_span.reserve( this->_size ); this->_span_ite = this->_span.begin(); }
/*-----------------------------------------*/

/*----------- COPY CONSTRUCTOR ------------*/
Span::Span( Span const &src ) { *this = src; }
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
Span::~Span( void ) { }
/*-----------------------------------------*/
/*#########################################*/


void	Span::addNumber( unsigned int const &number ) {

	if (this->_size == this->_span.size())
		throw SpanFull();

	if (!*this->_span_ite)
	{
		this->_span.insert( this->_span_ite, number );
		std::cout << "\e[3;33mReal span\e[0m n° [ \e[1;35m" << this->_span.size() << "\e[0m ] : \e[1;32m" << *this->_span_ite << "\e[0m" << std::endl;
	}

	this->_span_ite++;
}

unsigned int	Span::shortestSpan( void ) const {

	std::vector<unsigned int>			tmp( this->_size );
	std::vector<unsigned int>::iterator	tmp_ite;

	int i = 0;

	std::copy( this->_span.begin(), this->_span.end(), tmp.begin() );
	tmp_ite = tmp.begin();

	unsigned int min_dist;

    for ( std::vector<unsigned int>::iterator tmp_ite = tmp.begin(); tmp_ite != tmp.end(); tmp_ite++, i++ )
        min_dist = std::min( static_cast<unsigned int>(*tmp_ite), static_cast<unsigned int>(tmp[ i ] - tmp[ i - 1 ]) );

    return ( min_dist );
}

unsigned int	Span::longestSpan( void ) const {

	std::vector<unsigned int>			tmp( this->_size );
	std::vector<unsigned int>::iterator	tmp_ite;

	std::copy( this->_span.begin(), this->_span.end(), tmp.begin() );
	tmp_ite = tmp.begin();

	std::sort( tmp.begin(), tmp.end() );
	return ( tmp.back() - tmp.front() );
}


/*############### ACCESSORS ###############*/
/*---------------- GETERS -----------------*/
std::vector<unsigned int> const	&Span::getSpan( void ) const { return ( this->_span ); }
/*-----------------------------------------*/

/*---------------- SETERS -----------------*/
/*-----------------------------------------*/
/*#########################################*/


/*############### EXCEPTIONS ##############*/
const char	*Span::SpanFull::what() const throw() {
	return ("🚨\e[1;31mALERT\e[0m🚨 : The span is \e[1;37mFULL !\e[0m");
}
/*#########################################*/


/*########### OPERATORS OVERLOAD ##########*/
/*-------------- ASSIGNEMENT --------------*/
Span	&Span::operator=( Span const &rhs ) {

	if (this != &rhs)
		this->_size = rhs._size;

	return (*this);
}
/*-----------------------------------------*/
/*#########################################*/
