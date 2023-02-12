/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 14:55:32 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/12 20:48:39 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/*------------- CONSTRUCTOR ---------------*/
PhoneBook::PhoneBook( void ) {

	this->_index = 0;

	return ;
}
/*-----------------------------------------*/


/*-------------- DESTRUCTOR ---------------*/
PhoneBook::~PhoneBook( void ) {
	return ;
}
/*-----------------------------------------*/

/*########### ANNEXES FUNCTIONS ###########*/

/*--------------- DISPLAYER ---------------*/
void	PhoneBook::displayContact( std::string info ) {

	std::string	buffer;

// ? Affiche les infos des contacts
	if (info.size() > 10)
		std::cout << "|" << std::setw(10) << info.replace(9, info.size(), (std::string) ".");
	else
		std::cout << "|" << std::setw(10) << info;
	return ;
}
/*-----------------------------------------*/

/*---------------- REPLACER ---------------*/
void	PhoneBook::removingOldestContact( void ) {

	this->_index = MAX_CONTACTS;
	for (int i = 0; i + 1 < MAX_CONTACTS; i++)
	{
		this->_tabContact[i].setName(this->_tabContact[i + 1].getName());
		this->_tabContact[i].setFirstName(this->_tabContact[i + 1].getFirstName());
		this->_tabContact[i].setNickname(this->_tabContact[i + 1].getNickname());
		this->_tabContact[i].setDarkestSecret(this->_tabContact[i + 1].getDarkestSecret());

		this->_tabContact[i].setPhoneNumber(this->_tabContact[i + 1].getPhoneNumber());
	}
	
	std::cout << "WARNING /!\\: Your oldest contact was deleted and replace by your new contact register 🤙" << std::endl;

	return ;
}
/*-----------------------------------------*/

/*------- INFOS CONTACTS DISPLAYER --------*/
void	PhoneBook::infoContact( std::string buffer )
{
	if ((atoi(buffer.c_str()) >= 1 && atoi(buffer.c_str()) <= 8) || atoi(buffer.c_str()))
	{

		std::cout << "buffer number: " << atoi(buffer.c_str()) << std::endl;
		
		while (this->_tabContact[ atoi(buffer.c_str()) - 1 ].getName().empty())
		{
			std::cout << "This contact doesn't exist :/ Choose an existing contact PLZ" << std::endl;
			std::cout << "📞 >> ";
			(std::getline(std::cin, buffer), eofProtect());
		}

		// ! while (!isNumber(buffer) || atoi(buffer.c_str()))
		// ! {
		// ! 	std::cout << "Please tape the NUMBER of the contact :|" << std::endl;
		// ! 	std::cout << "📞 >> ";
		// ! 	(std::getline(std::cin, buffer), eofProtect());
		// ! }

		while (atoi(buffer.c_str()) < 0 && atoi(buffer.c_str()) > 8)
		{
			std::cout << "WOW !!! CALM DOWN ! You exceed the limit of the contact number ! >>:[" << std::endl;
			std::cout << "📞 >> ";
			(std::getline(std::cin, buffer), eofProtect());
		}
		std::cout << std::endl;
		std::cout << "Here is the contact info :" << std::endl;
		std::cout << "~ Contact N˚ [ " << this->_tabContact[ atoi(buffer.c_str()) - 1 ].getId() << " ]" << std::endl;
		std::cout << "~ First Name :			" << this->_tabContact[atoi(buffer.c_str()) - 1].getFirstName() << std::endl;
		std::cout << "~ Name :			" << this->_tabContact[atoi(buffer.c_str()) - 1].getName() << std::endl;
		std::cout << "~ Nickname :			" << this->_tabContact[atoi(buffer.c_str()) - 1].getNickname() << std::endl;
		std::cout << "~ The Darkest Secret 👀 :	" << this->_tabContact[atoi(buffer.c_str()) - 1].getDarkestSecret() << std::endl;
		std::cout << "~ Phone Number :		" << this->_tabContact[atoi(buffer.c_str()) - 1].getPhoneNumber() << std::endl;
	}

	return ;
}
/*-----------------------------------------*/

/*#########################################*/


/*############# MAIN FUNCTIONS ############*/

/*--------------- PHONEBOOK ---------------*/
void	PhoneBook::searchContact( void ) {

	std::string	buffer;

// ? Si aucun contact n'est enregistré
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

// ? Affiche tout les contacts
	for(int i = 0; i < MAX_CONTACTS && !this->_tabContact[i].getName().empty(); i++)
	{
		std::cout << "|" << std::setw(10) << this->_tabContact[i].getId();
		displayContact(this->_tabContact[i].getFirstName());
		displayContact(this->_tabContact[i].getName());
		displayContact(this->_tabContact[i].getNickname());
		std::cout << "|" << std::endl;
		for (int i = 0; i != 45; i++)
			std::cout << "-";
		std::cout << std::endl;
	}
	std::cout << "Who ?" << std::endl;
	std::cout << "📞 >> ";
	(std::getline(std::cin, buffer), eofProtect());
	// ! while ((atoi(buffer.c_str()) < 0 && atoi(buffer.c_str()) > 8) || atoi(buffer.c_str()))
	// ! {
	// ! 	std::cout << "Please tape the NUMBER of the contact :|" << std::endl;
	// ! 	std::cout << "📞 >> ";
	// ! 	(std::getline(std::cin, buffer), eofProtect());
	// ! }
	infoContact(buffer);

	return ;
}
/*-----------------------------------------*/

/*---------------- ADDER ------------------*/
void	PhoneBook::addContact( void ) {

	std::string	buffer;
	int 		index;
	// index = (this->_index < MAX_CONTACTS ? this->_index : MAX_CONTACTS - 1);

	if (this->_index < MAX_CONTACTS)
		index = this->_index;
	else
		index = MAX_CONTACTS - 1;

	if (this->_index + 1 > MAX_CONTACTS)
		removingOldestContact();

	std::cout << "Name ?" << std::endl;
	std::cout << "📞 >> ";
	(std::getline(std::cin, buffer), eofProtect());
	while (buffer.find_first_not_of("1234567890") || buffer.empty())
	{
		std::cout << std::endl << "NOT NUMBER OR NOTHING PLZ >:(" << std::endl;
		std::cout << "📞 >> ";
		(std::getline(std::cin, buffer), eofProtect());
	}
	this->_tabContact[ index ].setName(buffer);
	std::cout << std::endl << std::endl;

	std::cout << "First Name ?" << std::endl;
	std::cout << "📞 >> ";
	(std::getline(std::cin, buffer), eofProtect());
	while (buffer.find_first_not_of("1234567890") || buffer.empty())
	{
		std::cout << std::endl << "NOT NUMBER OR NOTHING PLZ >:(" << std::endl;
		std::cout << "📞 >> ";
		(std::getline(std::cin, buffer), eofProtect());
	}
	this->_tabContact[ index ].setFirstName(buffer);
	std::cout << std::endl << std::endl;

	std::cout << "Nickname ?" << std::endl;
	std::cout << "📞 >> ";
	(std::getline(std::cin, buffer), eofProtect());
	while (buffer.empty())
	{
		std::cout << std::endl << "NOT NOTHING PLZ >:(" << std::endl;
		std::cout << "📞 >> ";
		(std::getline(std::cin, buffer), eofProtect());
	}
	this->_tabContact[ index ].setNickname(buffer);
	std::cout << std::endl << std::endl;

	std::cout << "Darkest secret ?" << std::endl;
	std::cout << "📞 >> ";
	while (buffer.empty())
	{
		std::cout << std::endl << "NOT NOTHING PLZ >:(" << std::endl;
		std::cout << "📞 >> ";
		(std::getline(std::cin, buffer), eofProtect());
	}
	(std::getline(std::cin, buffer), eofProtect());
	this->_tabContact[ index ].setDarkestSecret(buffer);
	std::cout << std::endl << std::endl;

	std::cout << "Phone Number ?" << std::endl;
	std::cout << "📞 >> ";
	(std::getline(std::cin, buffer), eofProtect());
	while (!buffer.find_first_not_of("1234567890") || buffer.empty())
	{
		std::cout << std::endl << "NOT LETTERS OR NOTHING PLZ >:(" << std::endl;
		std::cout << "📞 >> ";
		(std::getline(std::cin, buffer), eofProtect());
	}
	this->_tabContact[ index ].setPhoneNumber(buffer);
	std::cout << std::endl << std::endl;

	this->_tabContact[ index ].setId(index);

	if (this->_index < MAX_CONTACTS)
		this->_index++;

	std::cout << "_index = " << this->_index << std::endl;

	return ;
}
/*-----------------------------------------*/

/*#########################################*/
