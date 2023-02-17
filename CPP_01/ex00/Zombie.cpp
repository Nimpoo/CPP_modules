/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 19:11:16 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/17 16:45:46 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*------------- CONSTRUCTOR ---------------*/
Zombie::Zombie( std::string name ) : _name(name) {

	if (_name.empty())
		this->_name = "Constructor";

	std::cout << "A new zombie " << _name << " was born ! :)" << std::endl;

	return ;
}
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
Zombie::~Zombie( void ) {

	if (!_name.compare("Constructor"))
		this->_name = "Destructor";

	std::cout << "Oh no ! The " << _name << " is dead ! :'(" << std::endl;

	return ;
}
/*-----------------------------------------*/

Zombie	*Zombie::newZombie( std::string name ) {

// ? Lorsqu'on alloue une INSTANCE de CLASS avec 'new',
// ? On fait appelle TOUJOURS ET OBLIGATOIREMENT son CONSTRUCTEUR 
	Zombie	*newBorn = new Zombie(name);

	newBorn->_name = name;

	return (newBorn);
}

void	Zombie::randomChump( std::string name ) {

	Zombie	newBorn(name);

	newBorn._name = name;

	newBorn.announce();

	return ;
}

void	Zombie::announce( void ) {

	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;

	return ;
}
