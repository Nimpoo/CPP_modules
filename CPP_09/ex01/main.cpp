/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 12:45:22 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/05/12 14:31:29 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int ac, char **av)
{
	(void) av;
	if (ac != 2)
	{
		std::cout << "\e[1;31m[Error]\e[0m only ONE argument." << std::endl;
		return (1);
	}

	try
	{
		std::stringstream	stream_1(av[1]);
		std::stringstream	stream_2(av[1]);
		RPN	test( stream_1, stream_2 );
	}
	catch (std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
