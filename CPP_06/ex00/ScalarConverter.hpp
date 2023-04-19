/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 18:21:30 by mayoub            #+#    #+#             */
/*   Updated: 2023/04/19 10:16:52 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <iomanip>
# include <cstdlib>
# include <limits>

class ScalarConverter {

public:

	static bool	isNumber( std::string const &s );

	static void	convert( std::string const &arg );
	static void	parseChar( std::string const &character );
	static void	parseInt( std::string const &integer );
	static void	parseFloat( std::string const &floater );
	static void	parseDouble( std::string const &real );

private:

/*------------- CONST / DEST --------------*/
	ScalarConverter( void );
	ScalarConverter( ScalarConverter const &src );
	~ScalarConverter( void );

/*----------- OPERATORS OVERLOAD ----------*/
	ScalarConverter	&operator=( ScalarConverter const &rhs );

};

#endif
