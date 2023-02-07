/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample_2.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:39:09 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/05 17:07:18 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample_2.class.hpp"

// ? Il n'y a plus d'initialisation classique
// * La synthax utilisée ici est : une liste d'initialisation
// * on met un deux-point ':' suivi de l'attribut, puis entre parenthèse la valeur que je souhaite initialiser
// ! C'est une construction
Sample_2::Sample_2( char p1, int p2, float p3 ) : a1(p1), a2(p2), a3(p3) {

	std::cout << "Constructor [2] called" << std::endl;

	std::cout << "this->a1: " << this->a1 << std::endl;

	std::cout << "this->a2: " << this->a2 << std::endl;

	std::cout << "this->a3: " << this->a3 << std::endl;

	return ;

}

Sample_2::~Sample_2( void ) {

	std::cout << "Destructor [2] called" << std::endl;
	return ;

}

// ! ATTENTION : cette méthode d'initialisation (initialization list) devra tout le temps
// ! être utilisé pour ne plus avoir de problèmes par la suite.
// ! Ce qui est fait dans Sample_1.class.hpp/cpp NE SERA PLUS À FAIRE
