/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 23:18:36 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/23 05:41:57 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{

	std::cout << std::endl;
	std::cout << "\033[1m-------------------- SIGN METHOD -------------------\033[0m" << std::endl << std::endl;

	Bureaucrat	Robot("Bender", 75);
	std::cout << std::endl;
	Form		Paper_0("Contrat", 149, 1);
	std::cout << std::endl;

	Robot.signForm(Paper_0);
	std::cout << std::endl;

	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl << std::endl;


	std::cout << "\033[1m----------------- OVER-SIGN METHOD -----------------\033[0m" << std::endl << std::endl;

	Bureaucrat	Over_Sign("Amy", 75);

	try
	{
		Over_Sign.signForm(Paper_0);
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl << std::endl;


	std::cout << "\033[1m--------------- SIGN METHOD | TOO LOW --------------\033[0m" << std::endl << std::endl;

	Bureaucrat Too_Low("Leela", 150);
	std::cout << std::endl;
	Form		Paper_1("Formular", 149, 1);
	std::cout << std::endl;

/*#######################################################*/
	try
	{
		Too_Low.signForm(Paper_1);
		std::cout << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
/*#######################################################*/


	std::cout << "\033[1m------------- SIGN METHOD | TOO HIGH -------------\033[0m" << std::endl << std::endl;

/*#######################################################*/
	try
	{
		Form	Too_High_Grade("Tableur", 151, 1);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl << std::endl;
	}
/*#######################################################*/

/*#######################################################*/
	try
	{
		Form	Too_Low_Grade("Certificate", 0, 1);
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
/*#######################################################*/

	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl << std::endl;


	std::cout << "\033[1m---------------- DEFAULT DESTRUCTOR ----------------\033[0m" << std::endl << std::endl;
	
	return (0);
}
