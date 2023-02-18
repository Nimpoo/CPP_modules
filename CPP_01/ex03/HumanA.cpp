/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:57:40 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/18 17:59:09 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &type ) : _name(name), _item(type) {
	return ;
}

HumanA::~HumanA( void ) {
	return ;
}

void	HumanA::attack( void ) {

	std::cout << this->_name << " attacks with their " << _item.getType() << std::endl;

	return ;
}
