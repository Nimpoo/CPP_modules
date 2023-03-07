/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 23:27:27 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/07 15:54:04 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int	main(void)
{
	Point const	a( 1, 2 );
	Point const	b( 4.6f, 4.5f );
	Point const	c( 3.0f, 2.6f );

	Point const p( 5.4f, 2.7f );

	bsp( a, b, c, p );

	return (0);
}
