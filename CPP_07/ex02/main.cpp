/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:00:49 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/20 15:39:43 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#include "Array.tpp"

int	main(void)
{
	std::cout << std::endl;
	std::cout << "\033[1m------------------ DEFAULT ARRAY -------------------\033[0m" << std::endl << std::endl;

	Array<>	tab_default;

	std::cout << std::endl;
	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl << std::endl;

	std::cout << "\033[1m-------------------- INIT ARRAY --------------------\033[0m" << std::endl << std::endl;

	Array<>	tab_init( 10 );

	for (size_t i = 0; i < tab_init.size(); i++) {

		tab_init[ i ] = i;
		std::cout << "tab_init [ \e[1;37m" << i << "\e[0m ] : \e[1;35m" << tab_init[ i ] << "\e[0m" << std::endl;
	}

	std::cout << std::endl;
	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl << std::endl;

	std::cout << "\033[1m-------------------- COPY ARRAY --------------------\033[0m" << std::endl << std::endl;

	Array<>	tab_copy(tab_init);

	for (size_t i = 0; i < tab_copy.size(); i++) {

		tab_copy[ i ] = i;
		std::cout << "tab_copy [ \e[1;37m" << i << "\e[0m ] : \e[1;35m" << tab_copy[ i ] << "\e[0m" << std::endl;
	}

	std::cout << std::endl;
	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl << std::endl;


	std::cout << "\033[1m-------------------- VALID INDEX -------------------\033[0m" << std::endl << std::endl;

	try
	{
		std::cout << "The element of \e[1;37mtab_init\e[0m at the \e[1;35mINDEX 5\e[0m : " << tab_init[ 5 ] << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl << std::endl;


	std::cout << "\033[1m------------------ INVALID INDEX + -----------------\033[0m" << std::endl << std::endl;

	try
	{
		std::cout << "The element of \e[1;37mtab_init\e[0m at the \e[1;35mINDEX 12\e[0m : " << tab_init[ 12 ] << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl << std::endl;


	std::cout << "\033[1m------------------ INVALID INDEX - -----------------\033[0m" << std::endl << std::endl;

	try
	{
		std::cout << "The element of \e[1;37mtab_init\e[0m at the \e[1;35mINDEX -12\e[0m : " << tab_init[ -12 ] << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl << std::endl;


	std::cout << "\033[1m----------------------- LEAKS ----------------------\033[0m" << std::endl << std::endl;

	system("leaks Array");

	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl << std::endl;


	std::cout << "\033[1m----------------- DEFAULT DESTRUCTOR ---------------\033[0m" << std::endl << std::endl;

	return (0);
}
