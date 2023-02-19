/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 12:46:05 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/19 15:19:25 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA( std::string name, Weapon &item ) : _item(item), _name(name) {

	std::cout << "Hi [ " << this->_name << " ] !" << std::endl;

	return ;
}

HumanA::~HumanA( void ) {

	std::cout << "Goodbye [ " << this->_name << " ] !" << std::endl;

	return ;
}

void	HumanA::attack( void ) {

	std::cout << this->_name << " attacks with their " << this->_item.getType() << std::endl;

	return ;
}
