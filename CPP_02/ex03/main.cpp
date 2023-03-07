/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 23:27:27 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/07 00:11:57 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int	main(void)
{
	Point const	a( 3, 5 );
	Point const	b( 2, 1 );
	Point const	c( 4, 9 );

	Point const p( 6, 5 );

	bsp( a, b, c, p );

	return (0);
}
