/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:53:08 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/26 16:12:15 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*------------- CONSTRUCTOR ---------------*/
Zombie::Zombie( void ) {

	std::cout << "A new zombie was born ! :)" << std::endl;

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

std::string	Zombie::getName( void ) const {

	return (this->_name);
}

void		Zombie::setName( std::string name ) {

	this->_name = name;

	return ;
}

// * Ici, la variable 'newBorn' est alloué DYNAMIQUEMENT dans la HEAP
// * La variable sera utilisable en dehors de son INSTANCE
Zombie	*Zombie::newZombie( std::string name ) {

// ? Lorsqu'on alloue une INSTANCE de CLASS avec 'new',
// ? On fait appelle TOUJOURS ET OBLIGATOIREMENT son CONSTRUCTEUR 
	Zombie	*newBorn = new Zombie();

	newBorn->_name = name;

	return (newBorn);
}


// * Ici, la variable 'newBorn' est alloué AUTOMATIQUEMENT dans la STACK
// * À la fin de la fonction elle sera désalloué et inutilisable en dehors de cette INSTANCE
void	Zombie::randomChump( std::string name ) {

	Zombie	newBorn;

	newBorn._name = name;

	newBorn.announce();

	return ;
}

void	Zombie::announce( void ) {

	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;

	return ;
}
