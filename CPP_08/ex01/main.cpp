/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 13:38:55 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/24 16:10:56 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include <vector>
#include <ctime>

#include "Span.hpp"

int	main(void)
{
	std::cout << std::endl;
	std::cout << "\033[1m------------------- SUBJECT TEST -------------------\033[0m" << std::endl << std::endl;

	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << std::endl;
	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl << std::endl;


	std::cout << "\033[1m----------------- INITIALISE SPAN ------------------\033[0m" << std::endl << std::endl;

	Span	span( 6 );
	std::cout << "\e[1;37mINITIALIZING\e[0m Span with \e[1;37m6\e[0m elements ->" << std::endl;
	std::cout << std::endl;

		span.addNumber( 17 );
		span.addNumber( 75 );
		span.addNumber( 43 );
		span.addNumber( 1 );
		span.addNumber( 23 );
		span.addNumber( 20 );

	std::cout << std::endl;
	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl << std::endl;


	std::cout << "\033[1m--------------- INITIALISE RANGE SPAN --------------\033[0m" << std::endl << std::endl;

	Span	span_range( 6 );

	std::cout << "\e[1;37mINITIALIZING\e[0m Span with \e[1;37m6\e[0m elements with a \e[1;37mRANGE\e[0m ->" << std::endl;
	std::cout << std::endl;

	span_range.addRangeNumber( span.getSpan().begin(), span.getSpan().end() );

	std::cout << std::endl;
	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl << std::endl;


	std::cout << "\033[1m------ INITIALISE RANGE SPAN OF 1 ELEMENT ONLY -----\033[0m" << std::endl << std::endl;

	Span	span_range_one( 1 );

	std::cout << "\e[1;37mINITIALIZING\e[0m Span with \e[1;37mONLY ONE\e[0m element with a \e[1;37mRANGE\e[0m ->" << std::endl;
	std::cout << std::endl;

	span_range_one.addRangeNumber( span_range.getSpan().begin(), span_range.getSpan().end() );

	std::cout << std::endl;
	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl << std::endl;


	std::cout << "\033[1m------------------- SHORTEST SPAN ------------------\033[0m" << std::endl << std::endl;

	std::cout << "The \e[3;33mShortest span\e[0m is : \e[1;32m" << span.shortestSpan() << "\e[0m" << std::endl;

	std::cout << std::endl;
	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl << std::endl;


	std::cout << "\033[1m------------------- LONGEST SPAN -------------------\033[0m" << std::endl << std::endl;

	std::cout << "The \e[3;33mLongest span\e[0m is : \e[1;31m" << span.longestSpan() << "\e[0m" << std::endl;

	std::cout << std::endl;
	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl << std::endl;


	std::cout << "\033[1m-------------- ADD NUMBER IN FULL SPAN -------------\033[0m" << std::endl << std::endl;

	try
	{
		span.addNumber(0);
	}
	catch (std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl << std::endl;


	std::cout << "\033[1m---------- INITIALISE GIGA EXTRA LONG SPAN ----------\033[0m" << std::endl << std::endl;

	Span						extra_long_span( 100000 );
	std::vector<unsigned int>	giga( 100000, 42 );

	extra_long_span.addRangeNumber( giga.begin(), giga.end() );

	std::cout << std::endl;
	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl;

	return (0);
}
