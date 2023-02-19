/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 12:49:43 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/19 15:10:56 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type(type) {
	return ;
}

Weapon::~Weapon( void ) {
	return ;
}

std::string	Weapon::getType( void ) {
	return (this->_type);
}

void		Weapon::setType( std::string type ) {

	this->_type = type;

	return ;
}
