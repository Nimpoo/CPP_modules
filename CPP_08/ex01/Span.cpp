/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 13:39:54 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/23 11:27:01 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*############# CONST / DEST ##############*/
/*---------- DEFAULT CONSTRUCTOR ----------*/
Span::Span( void ) : _size( 0 ) { this->_span.reserve( this->_size ); }
/*-----------------------------------------*/

/*----------- INIT CONSTRUCTOR ------------*/
Span::Span( unsigned int N ) : _size( N ) { this->_span.reserve( this->_size ); }
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

	this->_span.push_back( number );
	std::cout << "\e[3;33mReal span\e[0m n° [ \e[1;35m" << this->_span.size() << "\e[0m ] : \e[1;32m" << *(this->_span.end() - 1) << "\e[0m" << std::endl;
}

unsigned int	Span::shortestSpan( void ) const {

	if (this->_span.size() < 2)
		return (0);

	std::vector<unsigned int>	tmp( this->_span );
	unsigned int				min_dist = std::numeric_limits<unsigned int>::max();

	std::sort( tmp.begin(), tmp.end() );

	for (unsigned int i = 0; i < tmp.size() - 1; i++) {

        unsigned int diff = static_cast<int>( std::abs( static_cast<int>(tmp[ i ] - tmp[ i + 1 ]) ) );

        min_dist = std::min(min_dist, diff);
    }

	return min_dist;
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
