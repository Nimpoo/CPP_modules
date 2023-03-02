/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:01:54 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/02 19:40:36 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

# include	<iostream>

// ? Ce qui est vu ici sera plus une norme qu'une notion
// ! Ce sera une façon de construir des class de base
// ! LA FORME CANONIAUE ou FORME CANONIQUE DE COPLIEN
// * Cela permet de s'assurer une interface raisonnable et identique sur notre travail
// * N'importe quelle perosnne qui porra lire notre code pourra
// * On aura toujours la conviction qu'il y aura un ensemble de fonction dispo dans toute
// * class permettant un traitement UNIFORME

// ? Dans notre class, il y a des fonctions définient qui permettent de rendre cette class CANONIQUE
// * Une class est dite "CANONIQUE" lorsqu'elle contiendra :
// ! 1. Un constructeur par défaut
// ! 2. Un constructeur par copie
// ! 3. Un opérateur d'ASSIGNATION '='
// ! 4. Un destructeur
class Sample {

public:

// ? Constructeur par DÉFAUT
	Sample( void ); // * Canonique
// * Constructeur par PARAMÈTRE (pas obligatoire)
	Sample( int const n );
// ? Constructeur par COPIE
	Sample( Sample const &src ); // * Canonique
// ? Destructeur
	~Sample( void ); // * Canonique

// ? Opérateur d'ASSIGNATION '='
	Sample	&operator=( Sample const &rhs ); // * Canonique

// * Un geter
	int	getFoo( void ) const;

private:

// * Une variable privée
	int	_foo;

};

// * Opérateur de REDIRECTION DE FLUX SUR SORTIE STANDARD'<<' (pas obligatoire mais très pratique et très COMMUN)
std::ostream	&operator<<( std::ostream &o, Sample const &i );

#endif
