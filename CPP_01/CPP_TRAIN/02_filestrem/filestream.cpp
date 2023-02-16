/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filestream.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:14:41 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/16 19:06:00 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

// ? La librairy <fstream> nous permet de manipuler, de lire des fichiers
// ? La class 'ifstream' et la class 'ofstrem' permettent cela (remplace la fonction open() en C)

int	main()
{

// * Ici, la variable 'input' est une INSTANCE de la CLASS 'ifstream'
// * Elle permet d'ouvrir puis de lire le fichier jusqu'aà un séparateur, comme par exemple un espace " "
	std::ifstream input("text.txt");
	// input.open("text.txt");
	int num;
	std::string buf;

// * Cet input peut être rentré dans une 'string', ou même un int si jamais l'instance lit un digit
	input >> buf >> num;
	std::cout << "Content: " << buf << " ; " << num << std::endl;
	input.close();

	// -------------------------------

// * Ici, la variable 'output' est une INSTANCE de la CLASS 'ofsteam'
// * Elle permet de d'ouvrir et donne le pouvoir d'écrire à l'intérieur de ce fichier en écarsant l'ancien contenu
// * Soit on passe en paramètre de l'instance le fichier, soit utilise la fonction open()
// * de la class 'ofstream'
// ? Si le fichier n'existe pas, il se crée alors
	std::ofstream output("hello.txt");
	// output.open("hello.txt");

// * La fonction write() permet d'écrire dans le fichier en remplacant l'ancien contenu
	output.write("Bonjour", 7);

	return (0);
}
