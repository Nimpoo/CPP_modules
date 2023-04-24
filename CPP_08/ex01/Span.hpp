/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 13:40:09 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/24 17:57:32 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>

# include <cmath>
# include <vector>
# include <algorithm>

class Span {

public:

/*------------- CONST / DEST --------------*/
	Span( unsigned int N );
	Span( Span const &src );
	virtual ~Span( void );

	void			addNumber( unsigned int const &number );
	unsigned int	shortestSpan( void ) const;
	unsigned int	longestSpan( void ) const;

/*---------------- GETERS -----------------*/
	std::vector<unsigned int> const	&getSpan( void ) const;

/*----------- OPERATORS OVERLOAD ----------*/
	Span	&operator=( Span const &rhs );


/*############### TEMPLATES ###############*/
	template< typename InputIterator >
	void	addRangeNumber( InputIterator first, InputIterator const &last ) {

		while (first != last && this->_span.size() < this->_size) {
			addNumber( *first );
			++first;
		}
	}
/*#########################################*/


/*############### EXCEPTIONS ##############*/
	class SpanFull : public std::exception {

	public:

		virtual const char *what() const throw();

	};
/*#########################################*/


private:

	Span( void );

	unsigned int				_size;
	std::vector<unsigned int>	_span;

};

#endif
