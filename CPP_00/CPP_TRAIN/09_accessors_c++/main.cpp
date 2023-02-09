/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:14:32 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/08 14:43:45 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

int	main(void)
{
	Sample	instance;

// * On appelle la fonction 'seter' pour assigneer une valeur à _foo (qui est PRIVATE) SELON COMMENT LE SETER L'ASSIGNE
// * et tout ça à l'EXTERIEUR de la class
	instance.setFoo(42);
// * On appelle la fonction 'geter' pour pouvoir afficher/voir la valeur _foo à l'EXTERIEUR de la class
	std::cout << "instance.getFoo: " << instance.getFoo() << std::endl;

// * On fait la même chose en testant la fonction 'seter'
	instance.setFoo(-42);
	std::cout << "instance.getFoo: " << instance.getFoo() << std::endl;

// * Il est impossible d'afficher l'attribut privé de cette manière
	// std::cout << instance._foo << std::endl;

	return (0);
}

// ! Cela permet d'avoir un CONTRÔLE sur nos attributs privés, on choisit comment
// ! l'utilisateur utilise ces attribut/modifie.
