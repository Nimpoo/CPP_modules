/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:42:58 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/21 17:51:57 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

/*------------- CONSTRUCTOR ---------------*/
Replace::Replace( std::string file, std::string s1, std::string s2 ) {

	this->_file = file;
	this->_s1 = s1;
	this->_s2 = s2;

	this->_fileReplace = file + ".replace";

	this->_buf.open(file);

	return ;
}
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
Replace::~Replace( void ) {
	return ;
}
/*-----------------------------------------*/


std::ifstream	const &Replace::getBuf( void ) const {
	return (this->_buf);
}

void	Replace::replaceFunction( Replace &sed ) const {

	std::string		content;
	int				i = 0;

	while (sed._buf.good())
	{
		getline(sed._buf, content, '\n');
		if (!sed._buf.eof())
		content += '\n';
		i++;
		std::cout << "[ " << i << " ]" << std::endl;
		std::cout << content;
		// sed._buf.getline() >> std::noskipws >> content;
	}

	return ;
}
