/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 23:43:12 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/29 16:20:28 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"
// #include ""

float	Gauss( Point const a, Point const b, Point const c ) {

	const Fixed	half( 0.5f );
	const Fixed	sign( -1 );

	return ( abs( a.getXCoor() * ( b.getYCoor() - c.getYCoor() )
			+ b.getXCoor() * ( c.getYCoor() - a.getYCoor() )
			+ c.getXCoor() * ( a.getYCoor() - b.getYCoor() ) )
			* 0.5 );
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {

	const Fixed	area( Gauss(a, b, c) );

	const Fixed	first_triangle( Gauss(a, b, point) );
	const Fixed	second_triangle( Gauss(b, c, point) );
	const Fixed	third_triangle( Gauss(c, a, point) );

	std::cout << "area : " << area << std::endl;
	std::cout << "first tri : " << first_triangle << std::endl;
	std::cout << "second tri : " << second_triangle << std::endl;
	std::cout << "third tri : " << third_triangle << std::endl;

	std::cout << "area point : " << first_triangle + second_triangle + third_triangle << std::endl;

	if ( area.toFloat() < (first_triangle + second_triangle + third_triangle).toFloat()
		|| first_triangle.toFloat() == 0.0f
		|| second_triangle.toFloat() == 0.0f
		|| third_triangle.toFloat() == 0.0f )
	{
		std::cout << "FALSE" << std::endl;
		return (false);
	}

	std::cout << "TRUE" << std::endl;
	return (true);
}
