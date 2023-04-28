/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Integer.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:26:17 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/28 12:53:09 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTEGER_CLASS_HPP
# define INTEGER_CLASS_HPP

# include	<iostream>

class Integer {

public:

	Integer( int const n ); // * entier int n quelquonque
	~Integer( void );

	int	getValue( void ) const; // * Un accesseur, en l'occurence un "geter" de  '_n'

// ? Ce sont des SURCHARGES D'OPÉRATEURS
// ? Le mot clé 'operator' permet les surchearge, suivi de l'opérateur que l'on veut SURCHARGER
// ? On déclare comme une fonction membre avec les paramètrres correspondant
// ! Le nombre de paramètre dépend de l'opérateur que l'on veut surcharger (unaire, binaire, ternaire, etc...)
// * Les opérateurs d'ASSIGNATION et d'ADDITION sont tout les 2 BINAIRE (x = y, x + y)

// ? L'opérateur '=' prend 2 paramètres : LEFT-HAND SIDE et RIGHT-HAND SIDE (rhs)
// * Left-hand side est caché, car ce sera 'this' (this->_n = rhs._n)
// * Elle n'est pas const car il y a une modification de l'instance courante
// ! UNE RÉFÉRENCE SUR L'INSTANCE COURANTE SERA RENVOYÉE
// ! Car cela permettra de traiter ce genre de chainage : a = b = c = d (traité de droite à gauche)
// ! S'il n'y a pas de référence, ou ne pourrait pas avoir de chainage
	Integer	&operator=( Integer const &rhs ); // * Opérateur d'ASSIGNATION

// ? L'opérateur '+' prend 2 paramètres : LEFT-HAND SIDE et RIGHT-HAND SIDE (rhs)
// * Elle est const car l'INSTANCE COURANTE n'est pas modifié car selon le parenthèsage, tout se fera normalement (a + b + c + d)
// ! ET DONC ON NE RENVOIE PAS DE RÉFÉRENCE
	Integer	operator+( Integer const &rhs ) const; // * Opérateur d'ADDITION

private:

	int	_n;

};

// ? L'opérateur '<<' prend aussi 2 paramètre : une réf sur l'INSTANCE de ostream (courante) (exemple : cout) et 'rhs'
// * En théorie, on peut modifier la class 'ostram' pour implémmenter
// * notre class 'Integer' pour pouvoir la mettre en fonction membre. Mais ce n'ai pas possible car pas prévu.
// * On la met alors en non-membre
std::ostream	&operator<<( std::ostream &o, Integer const &rhs );

#endif
