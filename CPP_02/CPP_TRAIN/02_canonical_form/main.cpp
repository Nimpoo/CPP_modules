/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 18:12:52 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/02 19:44:44 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

int	main(void)
{
// ? Instanciation classique
	Sample	instance_1;
// * Instanciation par paramètre
	Sample	instance_2( 42 );
// ? Instanciation d'une copie
	Sample	instance_3( instance_1 );

	std::cout << instance_1 << std::endl;
	std::cout << instance_2 << std::endl;
	std::cout << instance_3 << std::endl;

// ? Surcharge d'opérateur '='
	instance_3 = instance_2;
	std::cout << instance_3 << std::endl;

	return (0); // ? Destructeur appelé pour toutes les instances
}

// ! Il faudra dés à présent TOUJOURS CONSTRUIRE SOUS LA FORME CANONIQUE DE COPLIEN
// ? C'est possible de dqns certains cas le constructeur par DÉFAUT soit inutile
// ? On pourra alors si on le souhaite le déclarer en privé et non en public
// ? Mais il devra systématiquement être dans tout les cas présent
