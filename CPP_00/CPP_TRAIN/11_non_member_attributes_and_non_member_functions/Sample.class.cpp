/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:12:16 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/09 10:56:36 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

Sample::Sample( void ) {

	std::cout << "Constructor called" << std::endl;
	Sample::_nbInst += 1;

	return ;
}

Sample::~Sample( void ) {

	std::cout << "Destructor called" << std::endl;
	Sample::_nbInst -= 1;

	return ;
}

// * On ne rajour pas le mot clé 'static' lors de la définition
// * + une fonction non membre se définit de la même manière qu'une fonction membre
int		Sample::getNbInst( void ) {

	return Sample::_nbInst;
}

// * Un attribut non membre se définit comme suit, en utilisant Paamayim Nekudotayim (comme pour un namespace)
int		Sample::_nbInst = 0;
