/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 23:31:38 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/07 14:40:37 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include	<iostream>
# include	<cmath>

# include	"Fixed.hpp"

class Point {

public:

/*------------- CONST / DEST --------------*/
	Point( void );
	Point( Point const &cpy );

	Point( const float x, const float y );
	~Point( void );

	Point	&operator=( Point const &rhs );

	const Fixed	getXCoor( void ) const;
	const Fixed	getYCoor( void ) const;

private:

	const Fixed	_x;
	const Fixed	_y;

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

std::ostream	&operator<<( std::ostream &o, Point const &i );

#endif
