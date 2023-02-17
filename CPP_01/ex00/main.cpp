/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 19:24:07 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/17 16:46:39 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	newBorn("Zombie [3]");

	Zombie	*zombieCreation = newBorn.newZombie("Zombie [2]");

	newBorn.randomChump("Zombie [1]");

	zombieCreation->announce();

	newBorn.announce();

	delete zombieCreation;

	return (0);
}
