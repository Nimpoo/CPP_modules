/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 22:31:20 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/22 13:27:43 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "easyfind.hpp"

template< class T >
typename T::const_iterator	easyfind( T const &container, int const &nbr ) {

	typename T::const_iterator	iterate = container.begin();

	while (iterate != container.end())
	{
		if (*iterate == nbr)
			return (iterate);
		iterate++;
	}
	throw NotOccurenceException();
}
