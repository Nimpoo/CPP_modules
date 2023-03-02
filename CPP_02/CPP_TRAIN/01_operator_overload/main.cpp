/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 18:51:51 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/02 17:48:24 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Integer.class.hpp"

int	main(void)
{
	Integer	x( 30 );
	Integer	y( 10 );
	Integer	z( 0  );

// ? 'x', 'y' et 'z' sont utilisés comme des variables quelquonque
// ? Cela est dû à la surcharge de l'opérateur '<<' ce qui permet
// ? d'afficher sa valeur passé en paramètre lors de son instanciation (?)
	std::cout << "Value of x : " << x << std::endl;
	std::cout << "Value of y : " << y << std::endl;

// ? Il y a une 4eme instance qui appelle un constructor(12) (rhs)
// ? Ensuite la surcharge de '=' est appelé puis effectué
// ? Enfin, un destructor(12) (rhs) est appelé car plus besoin de cette instance, on en avait besoin seulement pour la surcharge
// ? 'y' vaut donc 12 à présent
	y = Integer( 12 );
	std::cout << "Value of y : " << y << std::endl;

	std::cout << "Value of z : " << z << std::endl;
// ? Appelle de la fonction surcharge '+' ---> 30 + 12 retourne 42
// ? Appelle de la fonction surcharge '='
// ? Nouvelle instance : constructor(42) appelé (rhs)
// ? Surcharge '=' effectuée
// ? destructor(42) (rhs) appelé car devenu inutile
// ? 'z' vaut donc 42
	z = x + y;
	std::cout << "Value of x : " << z << std::endl;

	return (0);
}

// ! En surchargant les opérateur, on redéfinit ceux-ci, on leur donne une autre définition
// ! ATTENTION : éviter quand même de toujours surcharger inutilement
// ! cela peut vote virer à la confusion et à la compréhension
// ? Il existe beaucoup d'autre opérareur que l'on peut surcharger
