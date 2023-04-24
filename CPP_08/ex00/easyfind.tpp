/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 22:31:20 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/24 15:59:28 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "easyfind.hpp"

template< class T >
void	easyfind( T const &container, int const &nbr ) {

	typename T::const_iterator	iterate = std::find( container.begin(), container.end(), nbr );

	if (iterate == container.end())
		throw NotOccurenceException();
}
