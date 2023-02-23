/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:42:58 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/23 18:03:37 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

/*------------- CONSTRUCTOR ---------------*/
Replace::Replace( std::string file, std::string s1, std::string s2 ) {

	this->_file = file;
	this->_s1 = s1;
	this->_s2 = s2;

	this->_fileReplace = file + ".replace";

	this->_infile.open(file);

	return ;
}
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
Replace::~Replace( void ) {
	return ;
}
/*-----------------------------------------*/


std::ifstream	const &Replace::getInfile( void ) const {
	return (this->_infile);
}

void	Replace::replaceFunction( Replace &sed ) {

	(void) sed;

	std::string		content;
	std::ofstream	writer(this->_fileReplace);
	std::ifstream	outfile(this->_file);
	int				i = 0;

	while (outfile.good())
	{
		getline(outfile, content, '\n');
		if (!outfile.eof())
			content += '\n';
		writer.write(content.c_str(), content.size());
		i++;
		std::cout << "[ " << i << " ]" << std::endl;
		std::cout << content;
	}

	i = 0;

	outfile.close();
	content.clear();

	if (outfile.is_open())
	{
		while (outfile.good())
		{
			getline(outfile, content, '\n');
			i++;
			std::cout << "[ " << i << " ]" << std::endl;
			std::cout << content;
		}
	}

return ;
}
