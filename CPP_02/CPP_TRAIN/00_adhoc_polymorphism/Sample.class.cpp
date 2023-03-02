/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 14:29:38 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/01 15:02:47 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

Sample::Sample( void ) {

	std::cout << "Constructor called" << std::endl;

	return ;
}

Sample::~Sample( void ) {

	std::cout << "Destructor called" << std::endl;

	return ;
}

void	Sample::bar( char const c ) const {

	std::cout << "Member function called with CHAR overload : " << c << std::endl;

	return ;
}

void	Sample::bar( int const n ) const {

	std::cout << "Member function called with INT overload : " << n << std::endl;

	return ;
}

void	Sample::bar( float const z ) const {

	std::cout << "Member function called with FLOAT overload : " << z << std::endl;

	return ;
}

void	Sample::bar( Sample const &i ) const {

	(void) i;
	std::cout << "Member function called with SAMPLE class overload" << std::endl;

	return ;
}
