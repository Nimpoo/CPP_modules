/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 12:55:43 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/17 18:54:26 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstdlib>

bool	isNumber( const std::string &s )
{
	for (int i = 0; s[i]; i++) {
		if ((s[i] == '-' && i == 0) || (s[i] == '+' && i == 0) || (s[i] == '.'))
			i++;
		if (std::isdigit(s[i]) == 0)
			return false;
	}
	return true;
}

void	parseDouble( std::string real ) {

	double const	cast = static_cast<double>(real.c_str()[0]);

	if (real.size() != 1 && atof(real.c_str()) < 0 && isNumber(real))
		std::cout << std::fixed << "double: " << atof(real.c_str()) << std::endl;
	else if (real.size() != 1 && !isNumber(real))
		std::cout << "double: impossible" << std::endl;
	else if (!isNumber(real))
		std::cout << std::fixed << "double: " << cast << std::endl;
	else
		std::cout << std::fixed << "double: " << atof(real.c_str()) << std::endl;
}

void	parseFloat( std::string floater ) {

	float const	cast = static_cast<float>(floater.c_str()[0]);

	if (floater.size() != 1 && atof(floater.c_str()) < 0 && isNumber(floater))
		std::cout << std::fixed << "float: " << atof(floater.c_str()) << "f" << std::endl;
	else if (floater.size() != 1 && !isNumber(floater))
		std::cout << "float: impossible" << std::endl;
	else if (!isNumber(floater))
		std::cout << std::fixed << "float: " << cast << "f" << std::endl;
	else
		std::cout << std::fixed << "float: " << atof(floater.c_str()) << "f" << std::endl;
}

void	parseInt( std::string integer ) {

	int const	cast = static_cast<int>(integer.c_str()[0]);

	if (integer.size() != 1 && atoi(integer.c_str()) < 0 && isNumber(integer))
		std::cout << "int: " << atoi(integer.c_str()) << std::endl;
	else if (integer.size() != 1 && !isNumber(integer))
		std::cout << "int: impossible" << std::endl;
	else if (!isNumber(integer))
		std::cout << "int: " << cast << std::endl;
	else
		std::cout << "int: " << atoi(integer.c_str()) << std::endl;
}

void	parseChar( std::string character ) {

	const char	*cast = character.c_str();

	if (((atoi(cast) > 126 || atoi(cast) < 0)) || (character.size() != 1 && !isNumber(character)))
		std::cout << "char: impossible" << std::endl;
	else if (character.size() == 1 && !isNumber(character))
		std::cout << "char: '" << cast << "'" << std::endl;
	else
	{
		if (atoi(cast) > 32 && atoi(cast) < 127)
			std::cout << "char: '" << static_cast<char>(atoi(cast)) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Plz tape \e[1;37mONE\e[0m argument only : [int] [float] [char] [special : -/+inf or nan]." << std::endl;
		return (1);
	}

	std::string string_av(av[1]);

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

	// if (!nbr && string_av.size() != 1)
	// 	error = true;

	if (!error)
	{
		if (flt && nbr && !point && !chr) parseChar( string_av.substr(0, string_av.size() - 1) );
		else if ((!flt && nbr && point && !chr) || (flt && nbr && point && !chr)) parseChar( string_av.substr(0, string_av.find_first_of('.')) );
		else parseChar( string_av );

		if (flt && nbr && !point && !chr) parseInt( string_av.substr(0, string_av.size() - 1) );
		else if ((!flt && nbr && point && !chr) || (flt && nbr && point && !chr)) parseInt( string_av.substr(0, string_av.find_first_of('.')) );
		else parseInt( string_av ); 

		if (flt && nbr && !point && !chr) parseFloat( string_av.substr(0, string_av.size() - 1) );
		else if ((!flt && nbr && point && !chr) || (flt && nbr && point && !chr)) parseFloat( string_av.substr(0, string_av.size()) );
		else parseFloat( string_av );

		if (flt && nbr && !point && !chr) parseDouble( string_av.substr(0, string_av.size() - 1) );
		else if ((!flt && nbr && point && !chr) || (flt && nbr && point && !chr)) parseDouble( string_av.substr(0, string_av.size()) );
		else parseDouble( string_av );
	}
	return (0);
}
