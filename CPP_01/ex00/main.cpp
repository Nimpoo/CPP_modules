/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 19:24:07 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/26 15:59:37 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
// * Constructor called
	Zombie	Construct("Constructor");

// * Zombie alloué DYNAMIQUEMENT à l'aide de l'INSTANCE 'Construct' de la CLASS 'Zombie' ===> HEAP
// * La fonction donne un nom à l'INSTANCE 'zombieCreation'
	Zombie	*zombieCreation = Construct.newZombie("Zombie [2]");

// * Zombie alloué AUTOMATIQUEMENT à l'aide de l'INSTANCE 'Construct' de la CLASS 'Zombie' ===> STACK
	Construct.randomChump("Zombie [1]");

// * Annonce du Zombie DYNAMIQUE (HEAP)
	zombieCreation->announce();

// * Libération de la mémoire (qui a été allouée aà partir de la fonction newZombie() )
	delete zombieCreation;

	return (0);
}
