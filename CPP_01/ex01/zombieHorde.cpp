/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:53:45 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/26 16:11:07 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name ) {

	Zombie	*horde = new Zombie[N];

	for (int i = 0; i != N; i++) {
		horde[i].setName(name);
	}

	return (horde);
}
