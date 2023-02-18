/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 15:55:50 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/18 16:02:18 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	brain = "HI THIS IS BRAIN";

	std::string	*stringPTR = &brain;
	std::string	&stringREF = brain;

	std::cout << "address of [brain], the VARIABLE =	" << &brain << std::endl;
	std::cout << "address of [brain], the POINTER =	" << stringPTR << std::endl;
	std::cout << "address of [brain], the REFERENCE =	" << &stringREF << std::endl;


	std::cout << "value of [brain], the VARIABLE =	" << brain << std::endl;
	std::cout << "address of [brain], the POINTER =	" << *stringPTR << std::endl;
	std::cout << "address of [brain], the REFERENCE =	" << stringREF << std::endl;

	return (0);
}
