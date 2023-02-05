/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample_1.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:39:09 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/05 17:07:18 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample_1.class.hpp"

Sample_1::Sample_1( char p1, int p2, float p3 ) {

	std::cout << "Constructor called" << std::endl;

	this->a1 = p1;

	this->a2 = p2;

	this->a3 = p3;

	return ;

}

Sample_1::~Sample_1( void ) {

	std::cout << "Destructor called" << std::endl;
	return ;

}
