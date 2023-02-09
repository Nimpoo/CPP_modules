/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 11:59:19 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/08 12:08:00 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample_1.class.hpp"
#include "Sample_2.class.hpp"

// ? Cela ne compilera pas
// * Seulement Sample_1 (la strcture) compilera

int	main(void)
{
// * structure
	Sample_1	instance_1;

// * class
	Sample_2	instance_2;

	return (0);
}

// ! STRUCTURE	: Scope 'PUBLIC' par défaut
// ! CLASS		: Scope 'PRIVATE' par défaut
// ? Tout ce qu'on peut faire avec une structure en C est faisable CPP mais avec plus de contrôle
