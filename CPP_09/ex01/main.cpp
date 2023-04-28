/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 12:45:22 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/28 16:45:47 by sihemayoub       ###   ########.fr       */
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
		RPN	test( (std::stringstream(av[1])), (std::stringstream(av[1])) );
	}
	catch (std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
