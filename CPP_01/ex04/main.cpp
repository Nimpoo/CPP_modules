/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 15:40:31 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/25 17:28:05 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

// ? Le but est de recréer la fonction 'std::string::replace()'
// * 3 arguments sont pris 	: <filename> = le fichier à ouvrir et traîter
// * 						: s1		 = les occurences que l'on veut remplacer
// * 						: s2		 = ce qui va remplacer les occurences
// * Le sujet demande à copier <filname> dans un nouveau fichier <filname>.replace
// * mais avec les occurences s1 dans <filename> remplacées par s2

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Error: Incorrect number of arguments." << std::endl;
		std::cout << "Please tape : ./Sed,_c_est_pour_les_perdants <an existing file> [string to replace] [string who replace]" << std::endl;
		return (0);
	}


	Replace	sed(av[1], av[2], av[3]);

	sed.replaceFunction();

	return (0);
}
