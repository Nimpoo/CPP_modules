/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:50:55 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/20 11:50:56 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template< typename T >
void	swap( T &x, T &y ) {

	T swap;

	swap = x;
	x = y;
	y = swap;
}

template< typename T >
T const	&min( T const &x, T const &y ) { return ( x < y ? x : y ); }

template< typename T >
T const	&max( T const &x, T const &y ) { return ( x > y ? x : y ); }

#endif
