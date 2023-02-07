/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:53:20 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/06 15:56:12 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	std::string	ret;

	if (ac <= 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}

	for (int i = 1; i < ac; i++)
	{
		ret += av[i];
	}

	for (size_t i = 0; i < ret.size(); i++)
	{
		ret[i] = std::toupper(ret[i]);
	}

	std::cout << ret << std::endl;
	return (0);
}
