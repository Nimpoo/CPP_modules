/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:12:16 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/09 11:20:22 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

Sample::Sample( void ) {

	std::cout << "Constructor called" << std::endl;

	this->foo = 0;

	return ;
}

Sample::~Sample( void ) {

	std::cout << "Destructor called" << std::endl;

	return ;
}

void	Sample::Bar( void ) const {

	std::cout << "Membre function bar called" << std::endl;

	return ;
}

