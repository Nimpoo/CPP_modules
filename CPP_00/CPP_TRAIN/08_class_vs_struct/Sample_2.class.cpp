/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample_2.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:54:35 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/08 12:03:49 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample_2.class.hpp"

Sample_2::Sample_2( void ) {

	std::cout << "Constructor called" << std::endl;

	this->foo = 42;

	this->Bar();

	return ;

}

Sample_2::~Sample_2( void ) {

	std::cout << "Destructor called" << std::endl;
	return ;

}

void	Sample_2::Bar( void ) const {

	std::cout << "Bar function called" << std::endl;
	return ;

}
