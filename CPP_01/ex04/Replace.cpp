/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:42:58 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/25 17:41:59 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

/*------------- CONSTRUCTOR ---------------*/
Replace::Replace( std::string file, std::string s1, std::string s2 ) {

	this->_file = file;
	this->_s1 = s1;
	this->_s2 = s2;

	this->_fileReplace = file + ".replace";

	return ;
}
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
Replace::~Replace( void ) {
	return ;
}
/*-----------------------------------------*/


void	Replace::replaceFunction( void ) const {

	std::string		content;
	std::ofstream	writer(this->_fileReplace); // * Open() ou force create puis open() le fichier avec '.replace'
	std::ifstream	infile(this->_file); // * Open() le fichier existant 

	if (infile.fail()) // * Si le fichier n'existe pas
	{
		std::cout << "Error: File [ " << this->_file << " ] doesn't exist." << std::endl;
		return ;
	}

	if (infile.bad()) // * Si l'ouverture du fichier a échoué
	{
		std::cout << "Error: Opening the file [ " << this->_file << " ] failed." << std::endl;
		return ;
	}

	while (infile.good()) // * Temps que le fichier n'est pas à la fin ('\0' ou eof())
	{
		getline(infile, content, '\n'); // * Récupération de la ligne jusqu'au saut à la ligne

// ? find() va chercher la string 's1' et retourne la position du premier char de la string si elle est trouvée, sinon elle renvoie 'npos' qui vaut -1
		while (content.find(this->_s1) != std::string::npos && !this->_s1.empty())
		{
			content.insert(content.find(this->_s1), this->_s2); // * J'insèrt la nouvelle string 's2' la où 's1' se trouver
			content.erase(content.find(this->_s1), this->_s1.size()); // * J'efface la string 's1' qui a été trouvé en utilisant find() qui renvoit la position du premier char jusqu'à la fin de de la taille 's1' en utilisant size()
		}
		if (!infile.eof()) // * Si l'index du infile n'est pas sur '\0' ou autre EOF
			content += '\n';
		writer.write(content.c_str(), content.size()); // * Écrit dans le fichier '.replace' la ligne avec les occurences remplacées
	}

return ;
}
