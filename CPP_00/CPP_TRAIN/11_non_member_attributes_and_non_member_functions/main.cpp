/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:14:32 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/09 10:43:45 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

void	f0( void )
{
	Sample	instances;

	std::cout << "Number of instances: " << Sample::getNbInst() << std::endl;

	return ;
}

void	f1( void )
{
	Sample	instance;

	std::cout << "Number of instances: " << Sample::getNbInst() << std::endl;
	f0();

	return ;
}

int	main(void)
{
	std::cout << "Number of instances: " << Sample::getNbInst() << std::endl;
	f1();
	std::cout << "Number of instances: " << Sample::getNbInst() << std::endl;

	return (0);
}
