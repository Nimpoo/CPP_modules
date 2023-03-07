/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 23:43:12 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/07 15:56:31 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

const Fixed	Gauss( Point const a, Point const b, Point const c ) {

	const Fixed	half( 0.5f );
	const Fixed	sign( -1 );

	return ( sign * ( a.getXCoor() * ( b.getYCoor() - c.getYCoor() )
			+ b.getXCoor() * ( c.getYCoor() - a.getYCoor() )
			+ c.getXCoor() * ( a.getYCoor() - b.getYCoor() ) )
			* half );
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {

	(void) point;
	const Fixed	area( Gauss(a, b, c) );

	const Fixed	first_triangle( Gauss(a, b, point) );
	const Fixed	second_triangle( Gauss(b, c, point) );
	const Fixed	third_triangle( Gauss(c, a, point) );

	// std::cout << area << std::endl;
	// std::cout << first_triangle << std::endl;
	// std::cout << second_triangle << std::endl;
	// std::cout << third_triangle << std::endl;

	// std::cout << first_triangle + second_triangle + third_triangle << std::endl;

	if (area != (first_triangle + second_triangle + third_triangle))
	{
		std::cout << "FALSE" << std::endl;
		return (0);
	}

	std::cout << "TRUE" << std::endl;
	return (1);
}
