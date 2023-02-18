/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:56:06 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/18 17:37:43 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) {

	this->_type = type;

	return ;
}

Weapon::~Weapon( void ) {
	return ;
}


const std::string	&Weapon::getType( void ) const {

	return (this->_type);
}

void	Weapon::setType( std::string type ) {

	this->_type = type;

	return ;
}
