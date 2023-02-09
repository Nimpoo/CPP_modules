/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:14:32 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/09 10:01:23 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

int	main(void)
{
	Sample	instance_1(42);
	Sample	instance_2(42);

	if (&instance_1 == &instance_1)
		std::cout << "1 et 1 SONT PHYSIQUEMENT égaux" << std::endl;
	else
		std::cout << "1 et 1 NE SONT PAS PHYSIQUEMENT égaux" << std::endl;

	if (&instance_1 == &instance_2)
		std::cout << "1 et 2 NE SONT PAS PHYSIQUEMENT égaux" << std::endl;
	else
		std::cout << "1 et 2 NE SONT PAS PHYSIQUEMENT égaux" << std::endl;


	if (instance_1.compare(&instance_1) == 0)
		std::cout << "1 et 1 SONT STRUCTURELLEMENT égaux" << std::endl;
	else
		std::cout << "1 et 1 NE SONT PAS STRUCTURELLEMENT égaux" << std::endl;

	if (instance_1.compare(&instance_2) == 0)
		std::cout << "1 et 2 SONT STRUCTURELLEMENT égaux" << std::endl;
	else
		std::cout << "1 et 2 NE SONT PAS STRUCTURELLEMENT égaux" << std::endl;

	return (0);
}

// ! Cet exercice montre que 2 instances différentes sont physiquement différent mais
// ! que les variables auquel elles ont accés sont eégaux
