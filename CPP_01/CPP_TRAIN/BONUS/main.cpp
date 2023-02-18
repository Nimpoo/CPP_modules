/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:58:49 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/18 15:53:23 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int		N = 3;

	Zombie	Construct;

	Zombie	*horde;

	horde = Construct.zombieHorde(N, "Monsieur");

	for (int i = 0; i != N; i++) {
		horde[i].announce();
	}

	delete [] horde;

	return (0);
}
