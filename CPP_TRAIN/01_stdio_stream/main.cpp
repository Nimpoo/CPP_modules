/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:11:25 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/04 16:31:55 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// ? Comment C++ gère les entrées et sorties ? cin = entrée et cout = sortie
// ? Ces objets sont dans le namespace std::
// ? On pourra récupérer ou écrire dans les entrées et sorties à l'aide de ces objets qui ressemblent aux file descriptor
// ? les opérateurs << et >> permettront de gérer ces flux de données

int	main(void)
{
	char	buf[512];


// * on dirige vers la sortie standard une chaine de character, suivi saut à la ligne
	std::cout << "Hello World !" << std::endl;
								// * endl est un saut à la ligne

	std::cout << "Input a word: ";

// * on prend ce qu'il y a en entrée pour l'assigner à la chaine de character buf
	std::cin >> buf;

// * on affiche ce qui à été pris en entrée puis mis dans buf
	std::cout << "You entered [ " << buf << " ]" << std::endl;

	return (0);
}

// * Naturel comme écriture + plus pratique que write
// ! C++98 est plus facile est pratique que C++11. C++11 est tout aussi puissant
// ! REGARDER LE SITE: cplusplus.com
