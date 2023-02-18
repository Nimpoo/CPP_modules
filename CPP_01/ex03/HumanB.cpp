/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:56:41 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/18 18:34:19 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name) {
	return ;
}

HumanB::~HumanB( void ) {
	return ;
}

void	HumanB::attack( void ) {

	std::cout << this->_name << " attacks with their " << this->_item->getType() << std::endl;

	return ;
}

void	HumanB::setWeapon( Weapon &item ) {

	this->_item = &item;

	return ;
}
