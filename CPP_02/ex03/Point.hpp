/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 23:31:38 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/29 15:30:10 by sihemayoub       ###   ########.fr       */
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

	float	getXCoor( void ) const;
	float	getYCoor( void ) const;

private:

	const Fixed	_x;
	const Fixed	_y;

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

std::ostream	&operator<<( std::ostream &o, Point const &i );

#endif
