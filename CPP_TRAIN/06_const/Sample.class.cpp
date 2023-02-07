/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:39:09 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/06 17:26:15 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

// * Dans la liste d'initialisation, on INITIALISE 'pi' à la valeur 'f', de même pour 'qd'
// ! Dans la liste, ce sont des INITIALISATION et pas des DÉFINITION
Sample::Sample( float const f ) : pi(f), qd(42) {

	std::cout << "Constructor called" << std::endl;
	return ;

}

Sample::~Sample( void ) {

	std::cout << "Destructor called" << std::endl;
	return ;

}

// * Cette synthax (de placer 'const' ici) permet de signifier au compilateur que cette fonction
// * membre NE MODIFIERA JAMAIS L'INSTANCE COURANTE DE NOTRE CLASS
// ! Nul part dans la fonction il n'y aura une assignation
// * Si on le fait quand même il y aura des erreurs de compilation
void	Sample::bar( void ) const {
	
	std::cout << "this->pi: "<< this->pi << std::endl;
	std::cout << "this->qd: "<< this->qd << std::endl;
	return ;

}
