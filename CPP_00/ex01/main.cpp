/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:39:27 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/10 13:22:45 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void	eofProtect( void ) // * Empêche le bug du CTRL_D sur le 'cin'
{
	if (std::cin.eof())
		exit(-1);
}

int	main(void)
{
	PhoneBook	repertory;
	std::string	buffer;

	while (true)
	{
		std::cout << "PhoneBook ! What do you want to do ?" << std::endl;
		(std::cin >> buffer, eofProtect());
		if (!buffer.compare("ADD")) // * Je pouvais utiliser '=='
			repertory.addContact();
		else if (!buffer.compare("SEARCH"))
			repertory.searchContact();
		else if (!buffer.compare("EXIT"))
			break ;
	}



	return (0);
}
