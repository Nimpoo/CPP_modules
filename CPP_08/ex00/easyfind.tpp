/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 22:31:20 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/23 13:31:17 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "easyfind.hpp"

template< class T >
typename T::const_iterator	easyfind( T const &container, int const &nbr ) {

	typename T::const_iterator	iterate = std::find( container.begin(), container.end(), nbr );

	if (iterate == container.end())
		throw NotOccurenceException();

	return (iterate);
}
