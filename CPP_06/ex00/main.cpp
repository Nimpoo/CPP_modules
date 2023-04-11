/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 12:55:43 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/11 18:08:25 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	parsArg( std::string const &arg ) {

	
}

int	main(int ac, char **av)
{
	(void) av;
	if (ac != 2)
	{
		std::cerr << "Plz tape \e[1;37mONE\e[0m argument only : [int] [float] [char] [special : -/+inf or nan]." << std::endl;
		return (1);
	}

	parsArg( std::string(av[1]) );

	

	return (0);
}
