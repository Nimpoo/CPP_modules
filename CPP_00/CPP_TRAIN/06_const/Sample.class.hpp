/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:40:06 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/06 17:20:48 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ? C'est quoi 'const' ?
// ? Elle permet de rendre une variable constante. Ça fait la différence entre un bon code et un mauvais code
// ? Toujours utiliser const quand on peut lorsque c'est possbe en C++
// ! Par définition d'une constante, il n'est pas possible de faire une assignation d'une constante
// ! La seule manière de donner une valeur à une constante est de l'initialiser aà une valeur

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

# include <iostream>

class	Sample {

public:

// ? Il n'est pas possible de d'initialiser (float const pi = 3.14) dans une classe
// ? DE PLUS, on ne sait pas combien vaut l'attribut 'pi'

	float const	pi;
	int			qd;

// * Le constructeur prend un float const en paramètre
	Sample( float const f );
	~Sample( void );


// ? Il y a le mot clé 'const' placé assez bizarrement
// * Cette utilisation de 'const' est la plus IMPORTANTE de C++
	void	bar( void )	const ;

};

#endif
