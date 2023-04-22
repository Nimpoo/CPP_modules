/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 18:26:08 by mayoub            #+#    #+#             */
/*   Updated: 2023/04/22 13:45:08 by sihemayoub       ###   ########.fr       */
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


bool	ScalarConverter::isNumber( std::string const &s ) {

	if (s[1] == '+' || s[1] == '-')
		return false;
	// if (atol(s.c_str()) > INT_MAX || atol(s.c_str()) < INT_MIN)
	// 	return false;

	for (int i = 0; s[i]; i++) {
		if ((s[i] == '-' && i == 0) || (s[i] == '+' && i == 0) || (s[i] == '.'))
			i++;

		if (s.substr(i, s.size()) == "inf" || s.substr(i, s.size()) == "inff"
		 || s.substr(i, s.size()) == "nan" || s.substr(i, s.size()) == "nanf")
			return true;

		if (std::isdigit(s[i]) == 0)
			return false;
	}
	return true;
}

void	ScalarConverter::convert( std::string const &string_av ) {

	bool	nbr = false;
	bool	chr = false;
	bool	point = false;
	bool	flt = false;
	bool	error = false;

	if (string_av[string_av.size() - 1] == 'f')
		flt = true;

	for (int i = 0; string_av[i]; i++) {

		if (string_av[i] >= '0' && string_av[i] <= '9')
			nbr = true;
		if ((string_av[i] < '0' || string_av[i] > '9') && string_av[i] != '.' && string_av[i] != 'f' && string_av[i] != '+' && string_av[i] != '-')
			chr = true;
		if (string_av[i] == '.')
			point = true;
	}

	if (!error)
	{
		if (flt && nbr && !point && !chr) ScalarConverter::parseChar( string_av.substr(0, string_av.size() - 1) );
		else if ((!flt && nbr && point && !chr) || (flt && nbr && point && !chr)) ScalarConverter::parseChar( string_av.substr(0, string_av.find_first_of('.')) );
		else ScalarConverter::parseChar( string_av );

		if (flt && nbr && !point && !chr) ScalarConverter::parseInt( string_av.substr(0, string_av.size() - 1) );
		else if ((!flt && nbr && point && !chr) || (flt && nbr && point && !chr)) ScalarConverter::parseInt( string_av.substr(0, string_av.find_first_of('.')) );
		else ScalarConverter::parseInt( string_av ); 

		if (flt && nbr && !point && !chr) ScalarConverter::parseFloat( string_av.substr(0, string_av.size() - 1) );
		else if (!flt && nbr && point && !chr) ScalarConverter::parseFloat( string_av.substr(0, string_av.size()) + "0" );
		else if (flt && nbr && point && !chr) ScalarConverter::parseFloat( string_av.substr(0, string_av.size() - 1) + "0" );
		else ScalarConverter::parseFloat( string_av );

		if (flt && nbr && !point && !chr) ScalarConverter::parseDouble( string_av.substr(0, string_av.size() - 1) );
		else if (!flt && nbr && point && !chr) ScalarConverter::parseDouble( string_av.substr(0, string_av.size()) + "0" );
		else if (flt && nbr && point && !chr) ScalarConverter::parseDouble( string_av.substr(0, string_av.size() - 1) + "0" );
		else ScalarConverter::parseDouble( string_av );
	}
}

void	ScalarConverter::parseChar( std::string const &character ) {

	const char	*cast = character.c_str();

	if (!character.compare("inf") || !character.compare("inff") || !character.find("nan") || !character.find("nanf") || !character.find("+nan")|| !character.find("-nan") || !character.find("+inf") || !character.find("-inf"))
	{
		std::cout << "char: impossible" << std::endl;
		return ;
	}

	if (((atoi(cast) > 126 || atoi(cast) < 0)) || (character.size() != 1 && !ScalarConverter::isNumber(character)))
		std::cout << "char: impossible" << std::endl;
	else if (character.size() == 1 && !ScalarConverter::isNumber(character))
		std::cout << "char: '" << cast << "'" << std::endl;
	else
	{
		if (atoi(cast) > 32 && atoi(cast) < 127)
			std::cout << "char: '" << static_cast<char>(atoi(cast)) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
}

void	ScalarConverter::parseInt( std::string const &integer ) {

	int const	cast = static_cast<int>(integer.c_str()[0]);

	if (atol(integer.c_str()) > INT_MAX || atol(integer.c_str()) < INT_MIN)
	{
		std::cout << "int: impossible" << std::endl;
		return ;
	}

	if (!integer.compare("inf") || !integer.compare("inff") || !integer.find("nan") || !integer.find("nanf") || !integer.find("+nan")|| !integer.find("-nan") || !integer.find("+inf") || !integer.find("-inf"))
	{
		std::cout << "int: impossible" << std::endl;
		return ;
	}

	if (integer.size() != 1 && atoi(integer.c_str()) < 0 && ScalarConverter::isNumber(integer))
		std::cout << "int: " << atoi(integer.c_str()) << std::endl;
	else if (integer.size() != 1 && !ScalarConverter::isNumber(integer))
		std::cout << "int: impossible" << std::endl;
	else if (!ScalarConverter::isNumber(integer))
		std::cout << "int: " << cast << std::endl;
	else
		std::cout << "int: " << atoi(integer.c_str()) << std::endl;
}

void	ScalarConverter::parseFloat( std::string const &floater ) {

	float const	cast = static_cast<float>(floater.c_str()[0]);

	if ((!floater.compare("inf") || !floater.compare("inff") || !floater.find("+inf") || !floater.find("-inf")) && ScalarConverter::isNumber(floater))
	{
		if (floater[0] == '-')
			std::cout << "float: -" << std::numeric_limits<float>::infinity() << "f" << std::endl;
		else
			std::cout << "float: +" << std::numeric_limits<float>::infinity() << "f" << std::endl;
		return ;
	}

	if (floater.size() != 1 && atof(floater.c_str()) < 0 && ScalarConverter::isNumber(floater))
		std::cout << std::fixed << "float: " << atof(floater.c_str()) << "f" << std::endl;
	else if (floater.size() != 1 && !ScalarConverter::isNumber(floater))
		std::cout << "float: impossible" << std::endl;
	else if (!ScalarConverter::isNumber(floater))
		std::cout << std::fixed << "float: " << cast << "f" << std::endl;
	else
		std::cout << std::fixed << "float: " << atof(floater.c_str()) << "f" << std::endl;
}

void	ScalarConverter::parseDouble( std::string const &real ) {

	double const	cast = static_cast<double>(real.c_str()[0]);

	if ((!real.compare("inf") || !real.compare("inff") || !real.find("+inf") || !real.find("-inf")) && ScalarConverter::isNumber(real))
	{
		if (real[0] == '-')
			std::cout << "float: -" << std::numeric_limits<double>::infinity() << std::endl;
		else
			std::cout << "float: +" << std::numeric_limits<double>::infinity() << std::endl;
		return ;
	}

	if (real.size() != 1 && atof(real.c_str()) < 0 && ScalarConverter::isNumber(real))
		std::cout << std::fixed << "double: " << atof(real.c_str()) << std::endl;
	else if (real.size() != 1 && !ScalarConverter::isNumber(real))
		std::cout << "double: impossible" << std::endl;
	else if (!ScalarConverter::isNumber(real))
		std::cout << std::fixed << "double: " << cast << std::endl;
	else
		std::cout << std::fixed << "double: " << atof(real.c_str()) << std::endl;
}


/*########### OPERATORS OVERLOAD ##########*/
/*-------------- ASSIGNEMENT --------------*/
ScalarConverter	&ScalarConverter::operator=( ScalarConverter const &rhs ) {

	(void) rhs;

	std::cout << "Nothing to assign." << std::endl;
	return (*this);
}
/*-----------------------------------------*/
/*#########################################*/
