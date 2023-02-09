/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample_1.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:54:29 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/08 12:04:21 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample_1.class.hpp"

Sample_1::Sample_1( void ) {

	std::cout << "Constructor called" << std::endl;

	this->foo = 42;

	this->Bar();

	return ;

}

Sample_1::~Sample_1( void ) {

	std::cout << "Destructor called" << std::endl;
	return ;

}

void	Sample_1::Bar( void ) const {

	std::cout << "Bar function called" << std::endl;
	return ;

}