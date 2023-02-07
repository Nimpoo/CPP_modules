/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 11:31:50 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/07 11:48:17 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

int	main(void)
{
	Sample	instance;

// * Il est possible d'accéder aux attributs/fonctions membre PUBLIC mais pas PRIVATE, car
// * nous à l'EXTERIEUR de la class
	instance.publicFoo = 42;
	std::cout << "instance.publicFoo: " << instance.publicFoo << std::endl;

// * On ne peut pas utiliser les attributs/fonctions membres PRIVATE, le compilateur ne compilera pas
	// instance._privateFoo = 42;
	// std::cout << "instance._privateFoo: " << instance._privateFoo << std::endl;

	instance.publicBar();
	
	// insance._privateBar();

	return (0);

}

// ! NE LAISSER EN PRIVATE QUE CE QUI N'EST PAS UTILE POUR L'UTILISATEUR
