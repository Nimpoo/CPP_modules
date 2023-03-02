/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:14:22 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/02 19:38:59 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Integer.class.hpp"

Integer::Integer( int const n ) : _n(n) {

	std::cout << "Constructor called with value : " << n << std::endl;

	return ;
}

Integer::~Integer( void ) {

	std::cout << "Destructor called with value : " << this->_n << std::endl;

	return ;
}

int		Integer::getValue( void ) const{

	return (this->_n);
}


// ? Opérateur d'ASSIGNATION '='
Integer	&Integer::operator=( Integer const &rhs ) {

// * le pointeur 'this' correspond à la valeur de GAUCHE dans l'opération (lhs)
// * 'rhs' correspond à la valeur de DROUTE
	std::cout << "Assignation operator = called from " << this->_n;
	std::cout << " TO " << rhs.getValue() << std::endl;

// * Je prend la valeur '_n', puis je l'assigne à la valeur de 'rhs' à 'aide d'un GETER (variable privé)
	this->_n = rhs.getValue();

// * Je retourne 'this' en déréférançant pour récupérer ma référence ET pour pouvoir taiter les chaine d'assignation
	return (*this);
}

// ? Opérateur d'ADDITION '+'
Integer	Integer::operator+( Integer const &rhs) const {

	std::cout << "Assignation operator + called from " << this->_n;
	std::cout << " AND " << rhs.getValue() << std::endl;

// * Pareil ici, je retourne l'addition des 2 valeur que je veux retourner
// ! Le résultat va être utiliser une nouvelle INSTANCE de la CLASS 'Integer'
// ! Cela renvoie donc une copie de l'instance
	return Integer( this->_n + rhs.getValue() );
}

// ? Opérateur de REDIRECTION DE FLUX SUR SORTIE STANDARD '<<'
// * Nous prenons le même résonnement que pour '+' et '=' ('o' -> lhs)
std::ostream	&operator<<( std::ostream &o, Integer const &rhs ) {

// * ostram permet de surcharger son opérateur avec des int, que l'on peut
// * insérer dans le flux vers notre ostream 'o'
	o << rhs.getValue();

// * En retournant 'o', le flux pourra afficher notre INSTANCE (Integer) lorsau'on voudra utiliser cout par exemple
	return (o);
}
