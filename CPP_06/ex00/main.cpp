/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 12:55:43 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/17 13:17:20 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstdlib>

bool	isNumber( const std::string &s )
{
	for (int i = 0; s[i]; i++)
		if (std::isdigit(s[i]) == 0)
			return false;
	return true;
}

void	parseDouble( double real ) {

	(void) real;
}

void	parseFloat( std::string floater ) {

	float const	cast = static_cast<float>(floater.c_str()[0]);

	if (floater.size() != 1)
		std::cout << "float: impossible" << std::endl;
	else if (!isNumber(floater))
		std::cout << std::fixed << std::setprecision(1) << "float: " << cast << "f" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(1) << "float: " << atof(floater.c_str()) << "f" << std::endl;
}

void	parseInt( std::string integer ) {

	int const	cast = static_cast<int>(integer.c_str()[0]);

	if (integer.size() != 1 && !isNumber(integer))
		std::cout << "int: impossible" << std::endl;
	else if (!isNumber(integer))
		std::cout << "int: " << cast << std::endl;
	else
		std::cout << "int: " << atoi(integer.c_str()) << std::endl;
}

void	parseChar( std::string character ) {

	const char	*cast = character.c_str();

	if (((atoi(cast) > 126 && atoi(cast) < 0)) || (character.size() != 1 && !isNumber(character)))
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
		if ((string_av[i] < '0' || string_av[i] > '9') && string_av[i] != '.' && string_av[i] != 'f')
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
		else if ((!flt && nbr && point && !chr) || (flt && nbr && point && !chr)) parseFloat( string_av.substr(0, string_av.find_first_of('.')) );
		else parseFloat( string_av );
		// if ( nbr && point ) parseDouble( atof(av[1]) );
	}
	return (0);
}
