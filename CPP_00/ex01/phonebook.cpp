/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 14:55:32 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/10 14:37:52 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ) {

	this->_index = 0;

	return ;
}

PhoneBook::~PhoneBook( void ) {
	return ;
}

void	PhoneBook::displayContact( void ) {

	std::string	buffer;

// ? Affiche tout les contacts
	for (int i = 0; i < NBR_CONTACTS && !this->_tabContact[i].getName().empty(); i++)
	{
		std::cout << "|" << std::setw(10) << this->_tabContact[i].getId();
		std::cout << "|" << std::setw(10) << this->_tabContact[i].getFirstName();
		std::cout << "|" << std::setw(10) << this->_tabContact[i].getName();
		std::cout << "|" << std::setw(10) << this->_tabContact[i].getNickname();
		std::cout << "|" << std::endl;
		for (int i = 0; i != 45; i++)
			std::cout << "-";
		std::cout << std::endl;
	}
	std::cout << std::endl;


	std::cout << "Who ?" << std::endl;
	(std::cin >> buffer, eofProtect());

	return ;
}

void	PhoneBook::searchContact( void ) {

	std::string	buffer;

	// if (PhoneBook::_tabContact[0].getName().empty())
	// {
	// 	std::cout << "No contact register :/" << std::endl;
	// 	return ;
	// }

// ? Header Maker
	for (int i = 0; i != 45; i++)
		std::cout << "-";
	std::cout << std::endl;
	std::cout << "|" << std::setw(10) << "INDEX";
	std::cout << "|" << std::setw(10) << "FIRST NAME";
	std::cout << "|" << std::setw(10) << "NAME";
	std::cout << "|" << std::setw(10) << "NICKNAME" << "|" << std::endl;
	for (int i = 0; i != 45; i++)
		std::cout << "-";
	std::cout << std::endl;

	displayContact();

	return ;
}

void	PhoneBook::removingOldestContact( void ) {

	this->_index = 8;
	for (int i = 0; i < NBR_CONTACTS - 1; i++)
	{
		this->_tabContact[i].setName(this->_tabContact[i + 1].getName());
		this->_tabContact[i].setFirstName(this->_tabContact[i + 1].getFirstName());
		this->_tabContact[i].setNickname(this->_tabContact[i + 1].getNickname());
		this->_tabContact[i].setDarkestSecret(this->_tabContact[i + 1].getDarkestSecret());

		this->_tabContact[i].setPhoneNumber(this->_tabContact[i + 1].getPhoneNumber());
	}

	return ;
}

void	PhoneBook::addContact( void ) {

	std::string	buffer;

	if (this->_index > NBR_CONTACTS)
		removingOldestContact();

	std::cout << "Name ?" << std::endl;
	(std::cin >> buffer, eofProtect());
	this->_tabContact[ this->_index ].setName(buffer);
	std::cout << std::endl << std::endl;

	std::cout << "First Name ?" << std::endl;
	(std::cin >> buffer, eofProtect());
	this->_tabContact[ this->_index ].setFirstName(buffer);
	std::cout << std::endl << std::endl;

	std::cout << "Nickname ?" << std::endl;
	(std::cin >> buffer, eofProtect());
	this->_tabContact[ this->_index ].setNickname(buffer);
	std::cout << std::endl << std::endl;

	std::cout << "Darkest secret ?" << std::endl;
	(std::cin >> buffer, eofProtect());
	this->_tabContact[ this->_index ].setDarkestSecret(buffer);
	std::cout << std::endl << std::endl;

	std::cout << "Phone Number ?" << std::endl;
	(std::cin >> buffer, eofProtect());
	this->_tabContact[ this->_index ].setPhoneNumber(atoi(buffer.c_str()));
	std::cout << std::endl << std::endl;

	this->_tabContact[ this->_index ].setId(this->_index);

	// if (this->_index < NBR_CONTACTS)
	this->_index++;

	std::cout << "_index = " << this->_index << std::endl;

	return ;
}
