/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:40:06 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/07 11:41:21 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

# include <iostream>

class	Sample {

// ? Les mots clés Public et Private
// * 'public' et 'private' permettent de contrôler l'ENCAPSULATION des membres de nos class
// * ---> Les attributs ou les fonctions membres qui seront visible uniquement depuis l'INTÉRIEUR
// * de la class ou bien depuis l'EXTERIEUR

// ? Cela permet d'avoir un contrôle assez puissant et intêressant sur la structure et le designe de notre class
// ? On choisit ce qu'on veut laisser à disposition de notre utilisateur,
// ? On peut laisser visible que ce qui est visible et cacher notre construction à notre utilisateur

public:
// ! Une fonction/attribut déclarée en PUBLIC sera accessible depuis l'INTÊRIEUR de la class,
// ! mais aussi depuis l'EXTERIEUR de la class

	int		publicFoo;

// * Les Cons/Dest doit toujours eêtre dans la partie public. Dans certains cas beaucoup plus
// * avancé il sera pratique de les metytre en privvate
	Sample( void );
	~Sample( void );

	void	publicBar( void ) const;


private:
// ! Une fonction/attribut déclarée en PRIVÉ ne sera accessible que depuis l'INTÊRIEUR de la class
// ! et jamais depuis l'extérieur de celle-ci, elle sera invisible depuis l'extérieur,
// ! le code ne compilera pas si on essaie tout de même de l'utiliser à l'exterieur de la class

// * Ces attributs sont INTERNES à la class

// ? Convention de code : utiliser le underscore '_' en préfix au attributs/fonctions membres
// ? PRIVATE pour mieux les marquer
	int		_privateFoo;

	void	_privateBar( void ) const;

};

#endif
