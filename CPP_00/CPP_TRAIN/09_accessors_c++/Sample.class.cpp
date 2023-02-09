/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:12:16 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/08 14:41:49 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

Sample::Sample( void ) {

	std::cout << "Constructor called" << std::endl;

	this->setFoo(0);
	std::cout << "this->getFoo: " << this->getFoo() << std::endl;

	return ;
}

Sample::~Sample( void ) {

	std::cout << "Destructor called" << std::endl;

	return ;
}

int		Sample::getFoo( void ) const {

// * Tout simplement, on renvoit la valeur qui est privé, l'utilisateur pourra la voir
// * mais ne pourra pas la modifier de manière INTERNE
	return this->_foo;
}

void	Sample::setFoo( int v ) {

// * Ici on set simplement ce que _foo va eêtre selon ce que l'utilisateur met en paramètre
// * Il n'aura aucun moyen de modifier la valeur à l'INTERNE de la class
// ? On aura pas tout le temps besoin de faire un 'seter'
	if (v >= 0)
		this->_foo = v;

	return ;
}
