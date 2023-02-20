/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:42:58 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/20 18:09:42 by mayoub           ###   ########.fr       */
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

	std::string		buf;

	(void) sed;

	while (sed._buf)
	{
		std::getline(sed._buf) >> buf;
		std::cout << buf << " ";
	}

	return ;
}
