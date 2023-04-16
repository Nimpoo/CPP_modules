/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 12:55:43 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/16 16:32:26 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
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

void	parseFloat( double floater ) {

	(void) floater;
}

void	parseInt( std::string integer ) {

	(void) integer
}

void	parseChar( std::string character ) {

	const char	*cast = character.c_str();

	if (((atoi(cast) > 126 && atoi(cast) < 0)) || (character.size() != 1 && !isNumber(character)))
		std::cout << "char: impossible" << std::endl;
	else if (character.size() == 1 && !isNumber(character))
		std::cout << "char: '" << cast << "'" << std::endl;
	else
	{
		if (atoi(cast) > 32 && atoi(cast) < 126)
			std::cout << "char: '" << static_cast<char>(atoi(cast)) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
}

int	main(int ac, char **av)
{
	(void) av;
	if (ac != 2)
	{
		std::cerr << "Plz tape \e[1;37mONE\e[0m argument only : [int] [float] [char] [special : -/+inf or nan]." << std::endl;
		return (1);
	}

	std::string string_av(av[1]);

	bool	nbr = false;
	bool	point = false;
	bool	flt = false;
	bool	error = false;

	if (string_av[string_av.size() - 1] == 'f')
		flt = true;

	for (int i = 0; string_av[i]; i++) {

		if (string_av[i] >= '0' && string_av[i] <= '9')
			nbr = true;
		if (string_av[i] == '.')
			point = true;
	}

	// if (!nbr && string_av.size() != 1)
	// 	error = true;

	if (!error)
	{
		parseChar( string_av );
		parseInt( string_av );
		if ( nbr && point && flt ) parseFloat( atof(av[1]) );
		else if ( nbr && point ) parseDouble( atof(av[1]) );
	}
	return (0);
}