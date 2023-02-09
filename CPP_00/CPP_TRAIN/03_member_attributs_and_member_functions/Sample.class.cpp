/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:39:09 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/05 13:25:05 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

Sample::Sample( void ) {

	std::cout << "Constructor called" << std::endl;
	return ;

}

Sample::~Sample( void ) {

	std::cout << "Destructor called" << std::endl;
	return ;

}


// ! IMPORTANT : la fonction bar() possède 0 paramètre comme le sous entend le 'void'
// ! Mais en vérité, par défaut C++ passera toujours un paramètre et toujours en premier : 'this' (prochain module d'entrainement)
// ! 'this' est un pointeur sur l'instance courante
// ! Par conséquant, la fonction bar() a alors 1 paramètre et non 0

void	Sample::bar( void ) {
	
	std::cout << "Member function bar called" << std::endl;
	return ;

}
