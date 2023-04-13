/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 12:55:43 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/13 08:38:26 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	(void) av;
	if (ac != 2)
	{
		std::cerr << "Plz tape \e[1;37mONE\e[0m argument only : [int] [float] [char] [special : -/+inf or nan]." << std::endl;
		return (1);
	}

	std::string arg(av[1]);

	bool	nbr = false;
	bool	point = false;
	bool	flt = false;

	

	return (0);
}
