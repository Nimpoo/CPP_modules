/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 10:32:38 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/19 12:28:08 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.h"

int	main(void)
{
	Data	a;
	a.value = 42;

	std::cout << a.value << std::endl;

	uintptr_t	b = Serializer::serialize(&a);

	std::cout << b << std::endl;
	std::cout << Serializer::deserialize(b)->value << std::endl;

	return (0);
}
