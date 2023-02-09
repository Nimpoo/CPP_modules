/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:14:32 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/09 11:20:09 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

int	main(void)
{
	Sample	instance;
	Sample	*instance_p = &instance;

	int		Sample::*p = NULL;
	void	(Sample::*f)( void ) const;

	p = &Sample::foo;

	std::cout << "Value of member foo " << instance.foo << std::endl;
	instance.*p = 21;
	std::cout << "Value of member foo " << instance.foo << std::endl;
	instance_p->*p = 42;
	std::cout << "Value of member foo " << instance.foo << std::endl;


	f = &Sample::Bar;

	(instance.*f)();
	(instance_p->*f)();

	return (0);
}
