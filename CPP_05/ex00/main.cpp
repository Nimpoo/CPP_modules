/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 12:52:55 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/07 11:08:36 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << std::endl;
	std::cout << "\033[1m------------------ UPGRADE METHOD ------------------\033[0m" << std::endl << std::endl;

	Bureaucrat	Robot("Bender", 75);

	std::cout << std::endl;
	std::cout << "The method \e[1;34mupGrade()\e[0m is used on \e[1;37mBender\e[0m. His actual grade : \e[1;35m" << Robot.getGrade() << "\e[0m." << std::endl;
	Robot.upGrade();
	std::cout << "Now, the new grade of \e[1;37mBender\e[0m is : \e[1;35m" << Robot.getGrade() << "\e[0m. \e[1;32mWow great job for your increase !!!\e[0m" << std::endl;

	std::cout << std::endl;
	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl << std::endl;


	std::cout << "\033[1m----------------- DOWNGRADE METHOD -----------------\033[0m" << std::endl << std::endl;

	std::cout << "The method \e[1;34mdownGrade()\e[0m is used on \e[1;37mBender\e[0m. His actual grade : \e[1;35m" << Robot.getGrade() << "\e[0m." << std::endl;
	Robot.downGrade();
	std::cout << "Now, the new grade of \e[1;37mBender\e[0m is : \e[1;35m" << Robot.getGrade() << "\e[0m. \e[1;31mI'm so sorry for your decrease...\e[0m" << std::endl;

	std::cout << std::endl;
	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl << std::endl;

/*-------------------------------------------------------*/

	std::cout << "\033[1m----------- OVER-UPGRADE EXCEPTION CATCH -----------\033[0m" << std::endl << std::endl;

	Bureaucrat	High("Leela", 1);

	std::cout << std::endl;
	std::cout << "The method \e[1;34mupGrade()\e[0m is used on \e[1;37mLeela\e[0m. His actual grade : \e[1;35m" << High.getGrade() << "\e[0m." << std::endl;
	std::cout << "[Keywords \e[4;34mtry\e[0m and \e[4;34mcatch\e[0m is used here]" << std::endl << std::endl;

/*#######################################################*/
	try
	{
		High.upGrade();
		std::cout << "Now, the new grade of \e[1;37mLeela\e[0m is : \e[1;35m" << High.getGrade() << "\e[0m. \e[1;32mWow great job for your increase !!!\e[0m" << std::endl;
	}

	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
/*#######################################################*/



	std::cout << "\033[1m---------- OVER-DOWNGRADE EXCEPTION CATCH ----------\033[0m" << std::endl << std::endl;

	Bureaucrat	Low("Fry", 150);

	std::cout << std::endl;
	std::cout << "The method \e[1;34mdownGrade()\e[0m is used on \e[1;37mFry\e[0m. His actual grade : \e[1;35m" << Low.getGrade() << "\e[0m." << std::endl;
	std::cout << "[Keywords \e[4;34mtry\e[0m and \e[4;34mcatch\e[0m is used here]" << std::endl << std::endl;

/*#######################################################*/
	try
	{
		Low.downGrade();
		std::cout << "Now, the new grade of \e[1;37mFry\e[0m is : \e[1;35m" << Low.getGrade() << "\e[0m. \e[1;31mI'm so sorry for your decrease...\e[0m" << std::endl;
	}

	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
/*#######################################################*/



	std::cout << "\033[1m--------- OVER-UP/DOWNGRADE EXCEPTION CATCH --------\033[0m" << std::endl << std::endl;

	Bureaucrat	High_2("Amy", 1);
	Bureaucrat	Low_2("Zoidberg", 150);

	std::cout << std::endl;
	std::cout << "[ FIRST ]	The method \e[1;34mupGrade()\e[0m is used on \e[1;37mAmy\e[0m. His actual grade : \e[1;35m" << High_2.getGrade() << "\e[0m." << std::endl;
	std::cout << "[ SECOND ]	The method \e[1;34mdownGrade()\e[0m is used on \e[1;37mZoidberg\e[0m. His actual grade : \e[1;35m" << Low_2.getGrade() << "\e[0m." << std::endl;
	std::cout << "[Keywords \e[4;34mtry\e[0m and \e[4;34mcatch\e[0m is used here]" << std::endl << std::endl;

/*#######################################################*/
	try
	{
		High_2.upGrade();
		Low_2.downGrade();
		std::cout << "Now, the new grade of \e[1;37mAmy\e[0m is : \e[1;35m" << High_2.getGrade() << "\e[0m. \e[1;32mWow great job for your increase !!!\e[0m" << std::endl;
		std::cout << "Now, the new grade of \e[1;37mZoidberg\e[0m is : \e[1;35m" << Low_2.getGrade() << "\e[0m. \e[1;31mI'm so sorry for your decrease...\e[0m" << std::endl;
	}

	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
/*#######################################################*/



	std::cout << "\033[1m--------------- EXCEPTION CONSTRUCTOR --------------\033[0m" << std::endl << std::endl;

	std::cout << "[Keywords \e[4;34mtry\e[0m and \e[4;34mcatch\e[0m is used here]" << std::endl << std::endl;

/*#######################################################*/
	try
	{
		Bureaucrat	Too_High("Pr.Farnsworth", 0);
		Bureaucrat	Too_Low("Hermes", 151);

		std::cout << std::endl;
		std::cout << "[ FIRST ]	The method \e[1;34mupGrade()\e[0m is used on \e[1;37mPr.Farnsworth\e[0m. His actual grade : \e[1;35m" << Too_High.getGrade() << "\e[0m." << std::endl;
		std::cout << "[ SECOND ]	The method \e[1;34mdownGrade()\e[0m is used on \e[1;37mHermes\e[0m. His actual grade : \e[1;35m" << Too_Low.getGrade() << "\e[0m." << std::endl;

		Too_High.upGrade();
		Too_Low.downGrade();
		std::cout << "Now, the new grade of \e[1;37mPr.Farnsworth\e[0m is : \e[1;35m" << Too_High.getGrade() << "\e[0m. \e[1;32mWow great job for your increase !!!\e[0m" << std::endl;
		std::cout << "Now, the new grade of \e[1;37mHermes\e[0m is : \e[1;35m" << Too_Low.getGrade() << "\e[0m. \e[1;31mI'm so sorry for your decrease...\e[0m" << std::endl;

	}

	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
/*#######################################################*/


	std::cout << "\033[1m---------------- DEFAULT DESTRUCTOR ----------------\033[0m" << std::endl << std::endl;

	return (0);
}
