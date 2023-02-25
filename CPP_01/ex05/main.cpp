/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 17:51:10 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/25 18:26:36 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	Harl;

	Harl.complain("DEBUG");

	Harl.complain("INFO");

	Harl.complain("WARNING");

	Harl.complain("ERROR");

	return (0);
}
