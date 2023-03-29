/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 23:27:27 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/29 16:19:09 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int	main(void)
{
	Point const	a( 1.0f, 1.0f );
	Point const	b( 1.0f, 7.0f );
	Point const	c( 7.0f, 1.0f );

	Point const p( 3.0f, 3.0f );

	bsp( a, b, c, p );

	return (0);
}
