/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:57:26 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/20 17:33:48 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template< typename T >
void	iter( T array[], size_t const &size, void ( &f )( T const &nbr ) ) {

	for (size_t i = 0; i < size; i++)
		f( array[i] );
}

#endif
