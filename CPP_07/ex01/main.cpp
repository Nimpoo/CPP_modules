/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:55:59 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/20 16:02:01 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	multiplicator_by_two( int &nbr ) { nbr *= 2; }

void	add_wallet( std::string &random ) { random += " ₳"; }

int	main(void)
{
	int				array_int[9] = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
	size_t const	size_int = 9;

	std::string		array_string[9] = { "Bonjour", "Hello", "Guten Tag", "Buongiorno", "Buenos Dias", "صباح الخير", "Καλημέρα", "Bonum mane", "你好" };
	size_t const	size_string = 9;


	std::cout << std::endl << "Initialising an \e[1;32mARRAY\e[0m of \e[1;32mINT\e[0m with a \e[1;31msize of 9\e[0m" << std::endl << std::endl;

	std::cout << "\033[1m------------ ARRAY BEFORE MULTIPLICATING -----------\033[0m" << std::endl << std::endl;

	for (size_t i = 0; i < size_int; i++)
		std::cout << "array_int[ \e[1;37m" << i << "\e[0m ] : \e[1;37m" << array_int[i] << "\e[0m" << std::endl;

	std::cout << std::endl;
	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl << std::endl;


	::iter<int>( array_int, size_int, multiplicator_by_two );


	std::cout << "\033[1m------------ ARRAY AFTER MULTIPLICATING ------------\033[0m" << std::endl << std::endl;

	for (size_t i = 0; i < size_int; i++)
		std::cout << "array_int[ \e[1;37m" << i << "\e[0m ] : \e[1;37m" << array_int[i] << "\e[0m" << std::endl;

	std::cout  << std::endl;
	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl << std::endl;


	std::cout << "\033[1m-------------- ARRAY BEFORE WALLETING --------------\033[0m" << std::endl << std::endl;

	for (size_t i = 0; i < size_string; i++)
		std::cout << "array_string[ \e[1;37m" << i << "\e[0m ] : \e[1;37m" << array_string[i] << "\e[0m" << std::endl;

	std::cout  << std::endl;
	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl << std::endl;


	::iter<std::string>( array_string, size_string, add_wallet );


	std::cout << "\033[1m-------------- ARRAY AFTER WALLETING ---------------\033[0m" << std::endl << std::endl;

	for (size_t i = 0; i < size_string; i++)
		std::cout << "array_string[ \e[1;37m" << i << "\e[0m ] : \e[1;37m" << array_string[i] << "\e[0m" << std::endl;

	std::cout  << std::endl;
	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl;

	return (0);
}
