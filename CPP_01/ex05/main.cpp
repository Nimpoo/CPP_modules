/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 17:51:10 by mayoub            #+#    #+#             */
/*   Updated: 2023/03/04 19:44:18 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	Harl;

	Harl.complain("DEBUG");
	std::cout << std::endl;

	Harl.complain("INFO");
	std::cout << std::endl;

	Harl.complain("WARNING");
	std::cout << std::endl;

	Harl.complain("ERROR");
	std::cout << std::endl;

	Harl.complain("invalid level");
	std::cout << std::endl;

	Harl.complain("");
	std::cout << std::endl;

	return (0);
}
