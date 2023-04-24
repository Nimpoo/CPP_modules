/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 18:00:01 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/24 16:11:54 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>

#include "MutantStack.tpp"

#include "MutantStack.hpp"

int main()
{
	int	i = 0;
	std::cout << std::endl;
	std::cout << "\033[1m----------------- MUTANT STACK INIT ----------------\033[0m" << std::endl << std::endl;

	MutantStack<int> mstack;
	std::cout << std::endl;

	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl;


	std::cout << std::endl;
	std::cout << "\033[1m------------- MUTANT STACK PUSH METHOD -------------\033[0m" << std::endl << std::endl;

	std::cout << "Adding \e[1;37m5\e[0m in my \e[4;33mMutantStack\e[0m" << std::endl;
	mstack.push(5);

	std::cout << "Adding \e[1;37m17\e[0m in my \e[4;33mMutantStack\e[0m" << std::endl;
	mstack.push(17);

	std::cout << std::endl;
	std::cout << "The \e[1;37mTOP\e[0m of the \e[4;33mMutantStack\e[0m : \e[1;37m" << mstack.top() << "\e[0m" << std::endl;

	std::cout << std::endl;
	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl;


	std::cout << std::endl;
	std::cout << "\033[1m------------- MUTANT STACK POP METHOD --------------\033[0m" << std::endl << std::endl;

	std::cout << "Check the \e[1;37mSIZE\e[0m BEFORE the \e[1;35mpoping\e[0m of my \e[4;33mMutantStack\e[0m : \e[1;37m" << mstack.size() << "\e[0m" << std::endl;
	std::cout << std::endl;

	std::cout << "\e[1;35mPoping\e[0m \e[1;37mTOP ELEMENT\e[0m of my \e[4;33mMutantStack\e[0m" << std::endl;
	std::cout << std::endl;
	
	mstack.pop();

	std::cout << "Check the \e[1;37mSIZE\e[0m AFTER the \e[1;35mpoping\e[0m of my \e[4;33mMutantStack\e[0m : \e[1;37m" << mstack.size() << "\e[0m" << std::endl;
	std::cout << std::endl;

	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl;


	std::cout << std::endl;
	std::cout << "\033[1m--------------- MUTANT STACK ITERATOR --------------\033[0m" << std::endl << std::endl;

	std::cout << "Adding \e[1;37m3, 5, 737, 0\e[0m in my \e[4;33mMutantStack\e[0m" << std::endl;
	std::cout << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	
	std::cout << "Check the \e[1;37mSIZE\e[0m of my \e[4;33mMutantStack\e[0m : \e[1;37m" << mstack.size() << "\e[0m" << std::endl;
	std::cout << std::endl;

	std::cout << "\e[1;37mINITIALISE\e[0m \e[1;30mIterators\e[0m : \e[1;35mit\e[0m for \e[4;33mbegin method\e[0m and \e[1;35mite\e[0m for \e[4;33mend method\e[0m" << std::endl;
	std::cout << std::endl;

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << "\e[1;35mit\e[0m point in \e[1;37m" << *it << "\e[0m in index n°	[ \e[1;37m" << i << "\e[0m ]" << std::endl;
		++it, i++;
	}

	std::cout << std::endl;
	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl;


	std::cout << std::endl;
	std::cout << "\033[1m--- STACK COPY CONSTRUCTOR CALL WITH MUTANTSTACK ---\033[0m" << std::endl << std::endl;

	std::cout << "\e[1;37mCOPY\e[0m \e[1;32mConstruct\e[0m of \e[1;35mstd::stack 🥞\e[0m" << std::endl;
	std::cout << std::endl;
	std::stack<int> s(mstack);

	std::cout << "Check the \e[1;37mSIZE\e[0m of the \e[4;33mreal stack\e[0m : \e[1;37m" << s.size() << "\e[0m" << std::endl;

	std::cout << std::endl;
	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl;


	std::cout << std::endl;
	std::cout << "\033[1m########### ALL THE SAME TESTS WITH LIST ###########\033[0m" << std::endl;

	int	j = 0;
	std::cout << std::endl;
	std::cout << "\033[1m-------------------- LIST INIT ---------------------\033[0m" << std::endl << std::endl;

	std::list<int> l;
	std::cout << "\e[1;37mINITIALISE\e[0m \e[1;35mList\e[0m" << std::endl;
	std::cout << std::endl;

	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl;


	std::cout << std::endl;
	std::cout << "\033[1m----------------- LIST PUSH METHOD -----------------\033[0m" << std::endl << std::endl;

	std::cout << "Adding \e[1;37m5\e[0m in my \e[4;33mList\e[0m" << std::endl;
	l.push_back(5);

	std::cout << "Adding \e[1;37m17\e[0m in my \e[4;33mList\e[0m" << std::endl;
	l.push_back(17);

	std::cout << std::endl;
	std::cout << "The \e[1;37mTOP\e[0m of the \e[4;33mList\e[0m : \e[1;37m" << l.back() << "\e[0m" << std::endl;

	std::cout << std::endl;
	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl;


	std::cout << std::endl;
	std::cout << "\033[1m----------------- LIST POP METHOD ------------------\033[0m" << std::endl << std::endl;

	std::cout << "Check the \e[1;37mSIZE\e[0m BEFORE the \e[1;35mpoping\e[0m of my \e[4;33mList\e[0m : \e[1;37m" << l.size() << "\e[0m" << std::endl;
	std::cout << std::endl;

	std::cout << "\e[1;35mPoping\e[0m \e[1;37mTOP ELEMENT\e[0m of my \e[4;33mList\e[0m" << std::endl;
	std::cout << std::endl;
	
	l.pop_back();

	std::cout << "Check the \e[1;37mSIZE\e[0m AFTER the \e[1;35mpoping\e[0m of my \e[4;33mList\e[0m : \e[1;37m" << l.size() << "\e[0m" << std::endl;
	std::cout << std::endl;

	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl;


	std::cout << std::endl;
	std::cout << "\033[1m------------------- LIST ITERATOR ------------------\033[0m" << std::endl << std::endl;

	std::cout << "Adding \e[1;37m3, 5, 737, 0\e[0m in my \e[4;33mList\e[0m" << std::endl;
	std::cout << std::endl;

	l.push_back(3);
	l.push_back(5);
	l.push_back(737);
	l.push_back(0);
	
	std::cout << "Check the \e[1;37mSIZE\e[0m of my \e[4;33mList\e[0m : \e[1;37m" << l.size() << "\e[0m" << std::endl;
	std::cout << std::endl;

	std::cout << "\e[1;37mINITIALISE\e[0m \e[1;30mIterators\e[0m : \e[1;35mit_list\e[0m for \e[4;33mbegin method\e[0m and \e[1;35mite_list\e[0m for \e[4;33mend method\e[0m" << std::endl;
	std::cout << std::endl;

	MutantStack<int>::iterator it_list = mstack.begin();
	MutantStack<int>::iterator ite_list = mstack.end();

	++it_list;
	--it_list;
	while (it_list != ite_list)
	{
		std::cout << "\e[1;35mit\e[0m point in \e[1;37m" << *it_list << "\e[0m in index n°	[ \e[1;37m" << j << "\e[0m ]" << std::endl;
		++it_list, j++;
	}

	std::cout << std::endl;
	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl;



	// std::cout << "---------\n";
	// std::list<int> l;
	// l.push_back(5);
	// l.push_back(17);
	// std::cout << l.back() << std::endl;
	// l.pop_back();
	// std::cout << l.size() << std::endl;
	// l.push_back(3);
	// l.push_back(5);
	// l.push_back(737);
	// l.push_back(0);
	// std::list<int>::iterator itl = l.begin();
	// std::list<int>::iterator itel = l.end();
	// ++itl;
	// --itl;
	// while (itl != itel)
	// {
	// std::cout << *itl << std::endl;
	// ++itl;
	// }




	std::cout << "\033[1m####################################################\033[0m" << std::endl << std::endl;
	return 0;
}