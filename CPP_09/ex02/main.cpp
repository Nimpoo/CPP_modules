/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:31:33 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/06/29 14:16:56 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include "PmergeMe.hpp"

int main(int ac, char **av) {

/*---------------- PARSING ----------------*/
	if (ac < 2)
	{
		std::cout << "Error: Invalid argument: pass \e[1;37mAT LEAST ONE\e[0m argument pls." << std::endl;
		return (1);
	}

	try
	{
		for (int i = 1; i < ac; i++) {

			int		n = std::atoi(av[i]);
			bool	is_valid = true;

			for (char* c = av[i]; *c != '\0'; c++) {
				if (!std::isdigit(*c)) {

					is_valid = false;
					break;
				}
			}

			if (!is_valid)
				throw std::invalid_argument( "Error: Invalid argument: use \e[1;37mDIGIT\e[0m only pls." );

			if (n <= 0) 
				throw std::invalid_argument( "Error: Invalid argument: use \e[1;37mPOSITIVE DIGIT\e[0m only pls." );
		}
	}
	catch (std::exception const &e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}
/*-----------------------------------------*/

	std::vector<int>	vect;
	std::deque<int>		deq;
	int					j = 0;

/*--------------- BEFORE SORT --------------*/
	std::cout << "\e[1;31mBefore\e[0m:	";
	for (int i = 1; av[i]; i++) {

		if (!av[i + 1])
			std::cout << av[i];
		else
			std::cout << av[i] << " ";
	}
	std::cout << std::endl;
/*-----------------------------------------*/

/*########## CHRONO SORTING VECTOR ########*/
	clock_t		startVector = std::clock();

	PmergeMe	sortingVector( ac, av, vect );

	clock_t		endVector = std::clock();
	double		durationVector = static_cast<double>(endVector - startVector) / CLOCKS_PER_SEC;
/*#########################################*/

	std::vector<int>	vectorCopy = sortingVector.getVector();

/*--------------- AFTER SORT --------------*/
	std::cout << "\e[1;32mAfter\e[0m:	";
	for ( std::vector<int>::iterator it = vectorCopy.begin(); it != vectorCopy.end(); it++, j++ ) {

		// std::cout << j << std::endl;
		if (it + 1 == vectorCopy.end())
			std::cout << vectorCopy[j];
		else
			std::cout << vectorCopy[j] << " ";
	}
	std::cout << std::endl;
/*-----------------------------------------*/

/*########## CHRONO SORTING DEQUE ########*/
	clock_t	startDeque = std::clock();

	PmergeMe			sortingDeque( ac, av, deq );

	clock_t	endDeque = std::clock();
	double	durationDeque = static_cast<double>(endDeque - startDeque) / CLOCKS_PER_SEC;
/*#########################################*/

	std::cout << "Time to process a range of	" << ac - 1 << " elements with std::vector :	" << durationVector << " us" << std::endl;
	std::cout << "Time to process a range of	" << ac - 1 << " elements with std::deque  :	" << durationDeque << " us" << std::endl;

	return (0);
}
