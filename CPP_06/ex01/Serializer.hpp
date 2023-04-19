/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 10:33:18 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/19 10:47:39 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>

# include "Data.h"

class Serializer {

public:

	static uintptr_t	serialize( Data *ptr );
	static Data			*deserialize( uintptr_t raw );

private:

/*------------- CONST / DEST --------------*/
	Serializer( void );
	Serializer( Serializer const &src );
	~Serializer( void );

/*----------- OPERATORS OVERLOAD ----------*/
	Serializer	&operator=( Serializer const &rhs );

};

#endif
