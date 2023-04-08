/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 23:31:14 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/08 17:54:37 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	std::cout << std::endl;
	std::cout << "\033[1m--------------------- SHRUBBERY --------------------\033[0m" << std::endl << std::endl;

	Bureaucrat				Gardener("Fry", 1);
	std::cout << std::endl;
	ShrubberyCreationForm	Garden("Garden");
	std::cout << std::endl;

/*#######################################################*/
	try
	{
		Gardener.signForm(Garden);
		Gardener.executeForm(Garden);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
/*#######################################################*/
	std::cout << std::endl;

	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl << std::endl;


	std::cout << "\033[1m--------------------- ROBOTOMIZE -------------------\033[0m" << std::endl << std::endl;

	Bureaucrat			Robot("Bender", 1);
	std::cout << std::endl;
	RobotomyRequestForm	Factory("Factory");
	std::cout << std::endl;

/*#######################################################*/
	try
	{
		Robot.signForm(Factory);
		Robot.executeForm(Factory);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
/*#######################################################*/
	std::cout << std::endl;

	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl << std::endl;


	std::cout << "\033[1m----------------------- PARDON ---------------------\033[0m" << std::endl << std::endl;

	Bureaucrat				Guilter("Zoidberg", 1);
	std::cout << std::endl;
	PresidentialPardonForm	White_House("President");
	std::cout << std::endl;

/*#######################################################*/
	try
	{
		Guilter.signForm(White_House);
		Guilter.executeForm(White_House);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
/*#######################################################*/
	std::cout << std::endl;

	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl << std::endl;


	std::cout << "\033[1m---------------- DEFAULT DESTRUCTOR ----------------\033[0m" << std::endl << std::endl;

	return (0);
}
