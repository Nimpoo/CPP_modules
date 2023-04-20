/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 11:55:59 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/20 12:59:10 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	multiplicator_by_two( int &nbr ) { nbr *= 2; }

int	main(void)
{
	int				array[9] = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
	size_t const	size = 9;


	std::cout << std::endl << "Initialising an \e[1;32mARRAY\e[0m of \e[1;32mINT\e[0m with a \e[1;31msize of 9\e[0m" << std::endl << std::endl;

	std::cout << "\033[1m------------ ARRAY BEFORE MULTIPLICATING -----------\033[0m" << std::endl << std::endl;

	for (size_t i = 0; i < size; i++)
		std::cout << "array[ \e[1;37m" << i << "\e[0m ] : \e[1;37m" << array[i] << "\e[0m" << std::endl;

	std::cout << std::endl;
	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl << std::endl;


	::iter<int>( array, size, multiplicator_by_two );


	std::cout << "\033[1m------------ ARRAY AFTER MULTIPLICATING ------------\033[0m" << std::endl << std::endl;

	for (size_t i = 0; i < size; i++)
		std::cout << "array[ \e[1;37m" << i << "\e[0m ] : \e[1;37m" << array[i] << "\e[0m" << std::endl;

	std::cout  << std::endl;
	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl;

	return (0);
}
