/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:39:09 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/05 17:03:54 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

// * Le mot clé 'this' est un pointeur, on utilise la flèche '->' et non le point '.'
// * car 'this' est un pointeur, on le déréférence, comme pour les structures en C

Sample::Sample( void ) {

// * Grâce à 'this', on fait référence à l'instance courante de la class Sample
	this->foo = 42;
	std::cout << "this->foo: " << this->foo << std::endl;

// * Il est aussi possible d'appeler une fonction
	this->bar();

	std::cout << "Constructor called" << std::endl;
	return ;

}

Sample::~Sample( void ) {

	std::cout << "Destructor called" << std::endl;
	return ;

}

void	Sample::bar( void ) {
	
	std::cout << "Member function bar called" << std::endl;
	return ;

}
