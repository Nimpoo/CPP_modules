/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 19:11:16 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/16 19:37:32 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*------------- CONSTRUCTOR ---------------*/
Zombie::Zombie( void ) {

	this->_name = "Geck Moria 🦇";

	return ;
}
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
Zombie::~Zombie( void ) {
	return ;
}
/*-----------------------------------------*/

Zombie	*Zombie::newZombie( std::string _name ) {

	Zombie	newBorn;

	newBorn._name = "Ponareff";

	return (newBorn);
}

void	Zombie::randomChump( std::string _name ) {

	

	return ;
}

void	Zombie::announce( void ) {

	

	return ;
}
