/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 14:55:32 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/09 14:16:21 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ){

	this->_index = 0;

	return ;
}

PhoneBook::~PhoneBook( void ) {
	return ;
}

void	PhoneBook::searchContact( void ) {

	

	return ;
}

void	PhoneBook::addContact( void ) {

	std::string	buffer;

	std::cout << "Name ? " << std::endl;
	std::cin >> buffer;
	eofProtect();
	this->_tabContact[ this->_index ].setName(buffer);
	std::cout << std::endl << std::endl;

	std::cout << "First Name ? " << std::endl;
	std::cin >> buffer;
	eofProtect();
	this->_tabContact[ this->_index ].setFirstName(buffer);
	std::cout << std::endl << std::endl;

	std::cout << "Nickname ? " << std::endl;
	std::cin >> buffer;
	eofProtect();
	this->_tabContact[ this->_index ].setNickname(buffer);
	std::cout << std::endl << std::endl;

	std::cout << "Darkest secret ? " << std::endl;
	std::cin >> buffer;
	eofProtect();
	this->_tabContact[ this->_index ].setDarkestSecret(buffer);
	std::cout << std::endl << std::endl;

	std::cout << "Phone Number ? " << std::endl;
	std::cin >> buffer;
	eofProtect();
	this->_tabContact[ this->_index ].setPhoneNumber(atoi(buffer.c_str()));
	std::cout << std::endl << std::endl;

	this->_tabContact[ this->_index ].setId(this->_index);

	std::cout << "_index = " << this->_index << std::endl;

	this->_index++;

	return ;
}
