/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 22:32:11 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/24 16:14:06 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include <vector>
#include <list>
#include <deque>
#include <set>

#include "easyfind.hpp"

#include "easyfind.tpp"

int	main(void)
{
	std::vector<int>	vect;
	std::list<int>		list;
	std::deque<int>		deq;
	std::set<int>		set;
	int					i = 0;

	std::cout << std::endl;
	std::cout << "\033[1m------------------ INITIALISATION ------------------\033[0m" << std::endl << std::endl;

	for (int i = 0; i < 10; i++) {

		vect.push_back( i );
		list.push_back( i );
		deq.push_back( i );
		set.insert( i );
	}

	for (std::list<int>::const_iterator list_ite = list.begin(); list_ite != list.end() ; list_ite++, i++) {

		std::set<int>::const_iterator	set_it = set.begin();

		std::cout << "\e[1;32mVECTOR\e[0m	n°[ \e[1;35m" << i << "\e[0m ] : \033[1m" << vect[ i ] << "\033[0m" << std::endl;
		std::cout << "\e[1;31mLIST\e[0m	n°[ \e[1;35m" << i << "\e[0m ] : \033[1m" << *list_ite << "\033[0m" << std::endl;
		std::cout << "\e[1;34mDEQUE\e[0m	n°[ \e[1;35m" << i << "\e[0m ] : \033[1m" << deq[ i ] << "\033[0m" << std::endl;
		std::cout << "\e[1;39mSET\e[0m	n°[ \e[1;35m" << i << "\e[0m ] : \033[1m" << *set_it << "\033[0m" << std::endl;
		std::cout << std::endl;

		set_it++;
	}

	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl << std::endl;


	std::cout << "\033[1m---------------------- VECTOR ----------------------\033[0m" << std::endl << std::endl;

	std::cout << "\e[4;32m[ SUCCESS TEST ]\e[0m with value : \e[1;35m2\e[0m" << std::endl;
	try
	{
		::easyfind< std::vector<int> >(vect, 2);
		std::cout << "\e[1;33mOccurence found 🥳\e[0m" << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "\e[4;31m[ FAILED TEST ]\e[0m with value : \e[1;35m15\e[0m\e[0m" << std::endl;
	try
	{
		::easyfind< std::vector<int> >(vect, 15);
		std::cout << "\e[1;33mOccurence found 🥳\e[0m" << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl << std::endl;


	std::cout << "\033[1m----------------------- LIST -----------------------\033[0m" << std::endl << std::endl;

	std::cout << "\e[4;32m[ SUCCESS TEST ]\e[0m with value : \e[1;35m7\e[0m" << std::endl;
	try
	{
		::easyfind< std::list<int> >(list, 7);
		std::cout << "\e[1;33mOccurence found 🥳\e[0m" << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "\e[4;31m[ FAILED TEST ]\e[0m with value : \e[1;35m-4\e[0m\e[0m" << std::endl;
	try
	{
		::easyfind< std::list<int> >(list, -4);
		std::cout << "\e[1;33mOccurence found 🥳\e[0m" << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl << std::endl;


	std::cout << "\033[1m----------------------- DEQUE ----------------------\033[0m" << std::endl << std::endl;

	std::cout << "\e[4;32m[ SUCCESS TEST ]\e[0m with value : \e[1;35m0\e[0m" << std::endl;
	try
	{
		::easyfind< std::deque<int> >(deq, 0);
		std::cout << "\e[1;33mOccurence found 🥳\e[0m" << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "\e[4;31m[ FAILED TEST ]\e[0m with value : \e[1;35m12\e[0m\e[0m" << std::endl;
	try
	{
		::easyfind< std::deque<int> >(deq, 12);
		std::cout << "\e[1;33mOccurence found 🥳\e[0m" << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl;


	std::cout << std::endl;
	std::cout << "\033[1m----------------------- SET ------------------------\033[0m" << std::endl << std::endl;

	std::cout << "\e[4;32m[ SUCCESS TEST ]\e[0m with value : \e[1;35m0\e[0m" << std::endl;
	try
	{
		::easyfind< std::set<int> >(set, 0);
		std::cout << "\e[1;33mOccurence found 🥳\e[0m" << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "\e[4;31m[ FAILED TEST ]\e[0m with value : \e[1;35m12\e[0m\e[0m" << std::endl;
	try
	{
		::easyfind< std::set<int> >(set, 12);
		std::cout << "\e[1;33mOccurence found 🥳\e[0m" << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl;

	return (0);
}
