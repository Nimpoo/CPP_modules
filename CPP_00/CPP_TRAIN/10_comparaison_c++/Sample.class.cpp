/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:12:16 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/08 15:07:42 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

Sample::Sample( int v ) : _foo(v) {

	std::cout << "Constructor called" << std::endl;

	return ;
}

Sample::~Sample( void ) {

	std::cout << "Destructor called" << std::endl;

	return ;
}

int		Sample::getFoo( void ) const {

	return this->_foo ;

}

// * Cette fonction va permettre de comparer la valeur de l'attribut PRIVATE _foo avec ce
// * que ressort la fonction 'geter' de _foo.
// * Elle sert à prouver que cette valeure sera la même quoi qu'il arrive MÊME si elle vient d'une INSTANCE DIFFÉRENTE
int		Sample::compare( Sample * other ) const {

	if (this->_foo < other->getFoo())
		return (-1);
	else if (this->_foo > other->getFoo())
		return (1);

	return (0);
}
