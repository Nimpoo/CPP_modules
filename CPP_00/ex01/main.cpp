/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:39:27 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/14 15:24:30 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

/*---------- UTILS NON-MEMBER ------------*/
bool isNumber( const std::string& s )
{
	for (int i = 0; s[i]; i++)
		if (std::isdigit(s[i]) == 0)
			return false;
	return true;
}

void	eofProtect( void ) // * Empêche le bug du CTRL_D sur le 'cin'
{
	if (std::cin.eof())
		exit(-1);
}

std::string	toupperBuffer( std::string buffer )
{
	std::string	upperBuffer;

	for (int i = 0; buffer[i]; i++)
	{
		upperBuffer += buffer[i];
	}

	for (size_t i = 0; i < upperBuffer.size(); i++)
	{
		upperBuffer[i] = std::toupper(upperBuffer[i]);
	}

	return (upperBuffer);
}
/*-----------------------------------------*/


/*~~~~~~~~~~~~~~~~~ MAIN ~~~~~~~~~~~~~~~~~~*/
int	main(void)
{
	PhoneBook	repertory;
	std::string	buffer;

	std::cout << std::endl << "Welcome to your PhoneBook ! 📬" << std::endl << std::endl;
	std::cout << "What do you want to do ?" << std::endl;
	std::cout << "Tape \"ADD\"	to add a new contact to your repertory" << std::endl;
	std::cout << "Tape \"SEARCH\"	to see your repertory" << std::endl;
	std::cout << "Tape \"HELP\"	to see valid commands" << std::endl;
	std::cout << "Tape \"EXIT\"	to say goodbye to your PhoneBook" << std::endl;

	while (buffer.compare("EXIT"))
	{
		std::cout << "📞 >> ";
		(std::getline(std::cin, buffer), eofProtect()); // * getline() permet d'empêcher à cin de split les whitespaces du buffer 
		buffer = toupperBuffer(buffer); // * Met tout le buffer en majuscule 
		if (!buffer.compare("ADD")) // * Je pouvais utiliser '=='
			repertory.addContact();
		else if (!buffer.compare("SEARCH"))
			repertory.searchContact();
		else if (!buffer.compare("HELP"))
		{
			std::cout << "Tape \"ADD\"	to add a new contact to your repertory" << std::endl;
			std::cout << "Tape \"SEARCH\"	to see your repertory" << std::endl;
			std::cout << "Tape \"HELP\"	to see valid commands" << std::endl;
			std::cout << "Tape \"EXIT\"	to say goodbye to your PhoneBook" << std::endl;
		}
	}

	std::cout << std::endl << "See you next time ! 📭" << std::endl;

	return (0);
}
