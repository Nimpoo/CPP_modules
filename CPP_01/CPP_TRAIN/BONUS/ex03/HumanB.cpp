/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 12:47:49 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/19 15:25:46 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB( std::string name ) : _name(name) {

	std::cout << "Hi [ " << this->_name << " ] !" << std::endl;

	return ;
}

HumanB::~HumanB( void ) {

	std::cout << "Goodbye [ " << this->_name << " ] !" << std::endl;

	return ;
}

void	HumanB::setWeapon( Weapon &item ) {

	this->_item = &item;

	return ;
}

void	HumanB::attack( void ) {

	std::cout << this->_name << " attacks with their " << this->_item->getType() << std::endl;

	return ;
}
