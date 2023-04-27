/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 12:59:46 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/27 18:07:43 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <cctype>

# include <exception>
# include <stdexcept>

# include <algorithm>
# include <map>

class BitcoinExchange {

public:

/*------------- CONST / DEST --------------*/
	BitcoinExchange( std::string const &input );
	BitcoinExchange( BitcoinExchange const &src );
	virtual ~BitcoinExchange( void );

	void	blockChienne( void );
	void	exceptionCatch( void ) const;
	bool	inputCheck( std::string const &date ) const;
	int		valueCheck( std::string const &value ) const;
	bool	pairMonthCheck( int const &year, int const &month, int const &day ) const;
	bool	isLeapYear( int const &year ) const;

/*----------- OPERATORS OVERLOAD ----------*/
	BitcoinExchange	&operator=( BitcoinExchange const &rhs );

private:

	BitcoinExchange( void );


	std::string		_fileName;
	std::ifstream	_input;
	std::ifstream	_csvFile;

	std::map< std::string, float >	_map;

};

#endif
