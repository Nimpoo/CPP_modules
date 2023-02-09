/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:39:09 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/06 15:22:20 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

// ? Dans ce fichier .cpp, on fait la DÉFINITION D'UNE CLASS
// ? On définit les fonctions qu'il y a dans la class

Sample::Sample( void ) {	// ! Je définis mon Constructeur 'Sample( void )' de la class 'Sample'

// ? Explication de la synthax : 
// * dans la class 'Sample', j'accède à la fonction 'Sample( void )' (ici le Constructeur)
// * La notation est la même que pour les namespaces

	std::cout << "Constructor called" << std::endl;
	return ;

}

Sample::~Sample( void ) {	// ! Je définis mon Destructeur '~Sample( void )' de la class 'Sample'

// * dans la class 'Sample', j'accède à la fonction '~Sample( void )' (ici le Destructeur)

	std::cout << "Destructor called" << std::endl;
	return ;

}

// ! À NOTER : les Cons/Dest n'ont pas de types de retour, c'est "comme un void" mais on ne l'écrit pas
