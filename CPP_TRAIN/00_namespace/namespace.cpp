/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   namespace.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 15:31:59 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/05 11:00:18 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// ? Les Namespace permet de regrouper des symboles/fontcions qui vont avoir des rapports sémantiques au sein d'un même ensemble
// ? Cela pourra être pratique pour regrouper certains symboles que l'on peut juger proche sémantiquement

// * Ici, une variable et une fonction globale quelconque
int	var_gl = 1;
int	f( void ) { return (2); }

// * Le nom du namespace est 'Foo' et les variables qu'elle contient peuvent avoir le même nom que es variables
// * globales ou d'autres namespaces
namespace	Foo {

	int	var_gl = 3;
	int	f( void ) { return (4); }

}

namespace	Bar {

	int	var_gl = 5;
	int	f( void ) { return (6); }

}

// * Des alias sont possibles
namespace	Muf = Bar;

int	main(void)
{
	printf("var_gl: [%d]\n", var_gl);
						// ? ::var_gl
	printf("f(): [%d]\n\n", f());
						// ? ::f()
// ? ===> ces 2 notations sont pareils

// * Nouvel opérateur => :: OPÉRATEUR DE RÊSOLUTION DE PORTÉ
// * Il permet de faire un appel, au sein d'un namespace, une variable, fonction, etc...
	printf("Foo::var_gl: [%d]\n", Foo::var_gl);
	printf("Foo::f(): [%d]\n\n", Foo::f());

// * Il n'y a aucun conflict car ces variables sont dans des namespaces différents
	printf("Bar::var_gl: [%d]\n", Bar::var_gl);
	printf("Bar::f(): [%d]\n\n", Bar::f());

	printf("Muf::var_gl: [%d]\n", Muf::var_gl);
	printf("Muf::f(): [%d]\n\n", Muf::f());

	return (0);
}

// ! Le namespace std:: (standard) sera le namespace qui sera le plus utilisé,
// ! c'est ici que se trouves toute la bibliothèque standard du C++
