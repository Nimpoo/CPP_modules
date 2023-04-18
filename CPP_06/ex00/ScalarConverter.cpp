/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 18:26:08 by mayoub            #+#    #+#             */
/*   Updated: 2023/04/18 18:54:41 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

/*############# CONST / DEST ##############*/
/*---------- DEFAULT CONSTRUCTOR ----------*/
ScalarConverter::ScalarConverter( void ) { }
/*-----------------------------------------*/

/*----------- COPY CONSTRUCTOR ------------*/
ScalarConverter::ScalarConverter( ScalarConverter const &src ) { *this = src; }
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
ScalarConverter::~ScalarConverter( void ) { }
/*-----------------------------------------*/
/*#########################################*/


void	ScalarConverter::convert( std::string const &string_av ) const {

	(void) string_av;
	// void	parseDouble( std::string real ) {

	// 	double const	cast = static_cast<double>(real.c_str()[0]);

	// 	if ((!real.compare("inf") || !real.compare("inff") || !real.find("+inf") || !real.find("-inf")) && isNumber(real))
	// 	{
	// 		if (real[0] == '-')
	// 			std::cout << "float: -" << std::numeric_limits<double>::infinity() << std::endl;
	// 		else
	// 			std::cout << "float: +" << std::numeric_limits<double>::infinity() << std::endl;
	// 		return ;
	// 	}

	// 	if (real.size() != 1 && atof(real.c_str()) < 0 && isNumber(real))
	// 		std::cout << std::fixed << "double: " << atof(real.c_str()) << std::endl;
	// 	else if (real.size() != 1 && !isNumber(real))
	// 		std::cout << "double: impossible" << std::endl;
	// 	else if (!isNumber(real))
	// 		std::cout << std::fixed << "double: " << cast << std::endl;
	// 	else
	// 		std::cout << std::fixed << "double: " << atof(real.c_str()) << std::endl;
	// }

	// void	parseFloat( std::string floater ) {

	// 	float const	cast = static_cast<float>(floater.c_str()[0]);

	// 	if ((!floater.compare("inf") || !floater.compare("inff") || !floater.find("+inf") || !floater.find("-inf")) && isNumber(floater))
	// 	{
	// 		if (floater[0] == '-')
	// 			std::cout << "float: -" << std::numeric_limits<float>::infinity() << "f" << std::endl;
	// 		else
	// 			std::cout << "float: +" << std::numeric_limits<float>::infinity() << "f" << std::endl;
	// 		return ;
	// 	}

	// 	if (floater.size() != 1 && atof(floater.c_str()) < 0 && isNumber(floater))
	// 		std::cout << std::fixed << "float: " << atof(floater.c_str()) << "f" << std::endl;
	// 	else if (floater.size() != 1 && !isNumber(floater))
	// 		std::cout << "float: impossible" << std::endl;
	// 	else if (!isNumber(floater))
	// 		std::cout << std::fixed << "float: " << cast << "f" << std::endl;
	// 	else
	// 		std::cout << std::fixed << "float: " << atof(floater.c_str()) << "f" << std::endl;
	// }

	// void	parseInt( std::string integer ) {

	// 	int const	cast = static_cast<int>(integer.c_str()[0]);

	// 	if (!integer.compare("inf") || !integer.compare("inff") || !integer.find("nan") || !integer.find("nanf") || !integer.find("+nan")|| !integer.find("-nan") || !integer.find("+inf") || !integer.find("-inf"))
	// 	{
	// 		std::cout << "int: impossible" << std::endl;
	// 		return ;
	// 	}

	// 	if (integer.size() != 1 && atoi(integer.c_str()) < 0 && isNumber(integer))
	// 		std::cout << "int: " << atoi(integer.c_str()) << std::endl;
	// 	else if (integer.size() != 1 && !isNumber(integer))
	// 		std::cout << "int: impossible" << std::endl;
	// 	else if (!isNumber(integer))
	// 		std::cout << "int: " << cast << std::endl;
	// 	else
	// 		std::cout << "int: " << atoi(integer.c_str()) << std::endl;
	// }

	// void	parseChar( std::string character ) {

	// 	const char	*cast = character.c_str();

	// 	if (!character.compare("inf") || !character.compare("inff") || !character.find("nan") || !character.find("nanf") || !character.find("+nan")|| !character.find("-nan") || !character.find("+inf") || !character.find("-inf"))
	// 	{
	// 		std::cout << "char: impossible" << std::endl;
	// 		return ;
	// 	}

	// 	if (((atoi(cast) > 126 || atoi(cast) < 0)) || (character.size() != 1 && !isNumber(character)))
	// 		std::cout << "char: impossible" << std::endl;
	// 	else if (character.size() == 1 && !isNumber(character))
	// 		std::cout << "char: '" << cast << "'" << std::endl;
	// 	else
	// 	{
	// 		if (atoi(cast) > 32 && atoi(cast) < 127)
	// 			std::cout << "char: '" << static_cast<char>(atoi(cast)) << "'" << std::endl;
	// 		else
	// 			std::cout << "char: Non displayable" << std::endl;
	// 	}
	// }
}


/*########### OPERATORS OVERLOAD ##########*/
/*-------------- ASSIGNEMENT --------------*/
ScalarConverter    &ScalarConverter::operator=( ScalarConverter const &rhs ) {

	(void) rhs;

	std::cout << "Nothing to assign." << std::endl;
	return (*this);
}
/*-----------------------------------------*/
/*#########################################*/
