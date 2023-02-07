/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:40:06 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/06 15:15:32 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ? La nomenclature des fichiers se font comme suit :
// ?	Sample.class.hpp	Sample.class.cpp
// *	1) Nom de la classe avec première lettre majuscule
// *	2) On précise que c'est une class (en séparant par un point)
// *	3) On termine avec l'extension (.h ou .cpp)
// !	On peut nommer le .h en .hpp pour moins de confusion, ce qui est conseillé

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

# include <iostream>

// ? Dans ce fichier .hpp, on fait la DÉCLARATION D'UNE CLASS

class	Sample {

public:	// à voir plus tard

// ? Constructeur = fonction avec le nom de la class
// ? Destructeur = fonction avec le nom de la class + un tilde '~' au début du nom de fonction

	Sample( void );		// ! cette fonction est un CONSTRUCTEUR : elle permet de déclarer un Constructeur
	~Sample( void );	// ! cette fonction est un DESTRUCTEUR : elle permet de déclarer un Destructeur

// * Les 2 fonctions sont désormais DÉCLARÉES
// * Lorsque la class Sample sera instanciée (dans le .cpp), la fonction CONSTRUCTEUR est appelée
// * Lorsque la class/instance va être détruite, la fonction DESTRUCTEUR est appelée

};

// * on oublie pas le point-virgule ';' au risque d'avoir beacoup d'erreurs incompréhensible venant du compilateur

#endif
