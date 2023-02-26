/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 15:14:33 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/26 15:38:20 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/*------------- CONSTRUCTOR ---------------*/
Harl::Harl( void ) {

	std::cout << "\033[1;32mHarl is construct 🤖\033[0m" << std::endl;

	return ;
}
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
Harl::~Harl( void ) {

	std::cout << "\033[1;31mHarl is destruct 🔨\033[0m" << std::endl;

	return ;
}
/*-----------------------------------------*/


void	Harl::debug( void ) {

	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger." << std::endl;
	std::cout << "I really do !";
	std::cout << std::endl;

	return ;
}

void	Harl::info( void ) {

	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !";
	std::cout << std::endl;

	return ;
}

void	Harl::warning( void ) {

	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I ve been coming for years whereas you started working here since last month.";
	std::cout << std::endl;

	return ;
}

void	Harl::error( void ) {

	std::cout << "This is unacceptable ! I want to speak to the manager now.";
	std::cout << std::endl;

	return ;
}


void	Harl::complain( std::string level ) {

	std::string	levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	int			s = -1;

	for (int i = 0; i < 4; i++)
		if (levels[i] == level)
			s = i;

	switch (s)
	{
		case 0:
				std::cout << "[ DEBUG ]" << std::endl;
				this->debug();
		case 1:
				std::cout << "[ INFO ]" << std::endl;
				this->info();
		case 2:
				std::cout << "[ WARNING ]" << std::endl;
				this->warning();
		case 3:
				std::cout << "[ ERROR ]" << std::endl;
				this->error();
				break ;
		default:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}

	return ;
}
