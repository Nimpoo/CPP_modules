/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 13:06:46 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/27 18:06:30 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/*############# CONST / DEST ##############*/
/*---------- DEFAULT CONSTRUCTOR ----------*/
BitcoinExchange::BitcoinExchange( void ) : _fileName( ".txt" ), _input( ".txt" ), _csvFile( "data.csv" ) { }
/*-----------------------------------------*/

/*----------- INIT CONSTRUCTOR ------------*/
BitcoinExchange::BitcoinExchange( std::string const &fileName ) : _fileName( fileName ), _input( fileName ), _csvFile( "data.csv" ) {

	exceptionCatch();

	std::string	info;

	getline(this->_csvFile, info);
	while (getline(this->_csvFile, info, '\n') && this->_csvFile.is_open()) {

		this->_map.insert( std::pair<std::string, float>( info.substr(0, info.find_first_of(",")), atof( (info.substr(info.find_first_of(",") + 1)).c_str() ) ) );
	}
}
/*-----------------------------------------*/

/*----------- COPY CONSTRUCTOR ------------*/
BitcoinExchange::BitcoinExchange( BitcoinExchange const &src ) { *this = src; }
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
BitcoinExchange::~BitcoinExchange( void ) { }
/*-----------------------------------------*/
/*#########################################*/


void	BitcoinExchange::blockChienne( void ) {

	std::string	info;
	std::string	date;

	while (getline(this->_input, info, '\n') && this->_input.is_open()) {

		std::string	value;
		size_t		pos = info.find("|");

		pos ? date = info.substr(0, pos) : date = info.substr(0, info.find_first_of(' '));
		date.erase(remove(date.begin(), date.end(), ' '), date.end());

		if (date.size() != 10 || pos == std::string::npos) {

			std::cout << "Error: bad input => " << info << std::endl;
			continue ;
		}

		value = info.substr(pos + 1);
		value.erase(remove(value.begin(), value.end(), ' '), date.end());{
		if (!inputCheck( date ) || value.empty()) {

			std::cout << "Error: bad input => " << info << std::endl;
			continue ;
		}

		switch (valueCheck(value))
		{
			case 1:
				std::cout << "Error: not a positive number." << std::endl;
				break ;

			case 2:
				std::cout << "Error: too large number." << std::endl;
				break ;

			case 3:
				std::cout << "Error: not a valid number." << std::endl;
				break ;

			default:
				std::map< std::string, float >::iterator	it = this->_map.find(date);
				float	it_value = 0.0f;

				if (it != this->_map.end())
						it_value = it->second;

				else if (!this->_map.empty()) {

					it = this->_map.lower_bound(date);
					if (it != this->_map.begin()) {
						--it;
						date = it->first;
						it_value = it->second;
					}
				}
				std::cout << date << " => " << it_value * atof( value.c_str() ) << std::endl;
			}
		}
	}
}

void	BitcoinExchange::exceptionCatch( void ) const {

	if (this->_fileName.size() < 4 || this->_fileName.substr( this->_fileName.size() - 4) != ".txt")
		throw std::invalid_argument( "Error: bad file extension." );

	if (this->_input.fail() || this->_input.bad())
		throw std::ifstream::failure( "Error: impossible to open the file input " );

	if (this->_csvFile.fail() || this->_csvFile.bad())
		throw std::ifstream::failure( "Error: impossible to open the .csv file " );
}

bool	BitcoinExchange::isLeapYear( int const &year ) const {

	if (year % 4 != 0) { return false; }

	else if (year % 100 != 0) { return true; } 

	else if (year % 400 != 0) { return false; }

	else { return true; }
}

bool	BitcoinExchange::pairMonthCheck( int const &year, int const &month, int const &day ) const {

	int	daysInMonth;

	switch (month)
	{
		case 2:
			daysInMonth = 28;
			if (isLeapYear(year))
				daysInMonth = 29;
			break;

		case 4: case 6: case 9: case 11:
			daysInMonth = 30;
			break;

		default:
			daysInMonth = 31;
			break;
	}

	if (day < 1 || day > daysInMonth) {
		return false;
	}

	return true;
}

int		BitcoinExchange::valueCheck( std::string const &value ) const {

	if (atof( value.c_str() ) < 0)
		return (1);

	if (atof( value.c_str() ) > 1000)
		return (2);

	if ( std::find_if(value.begin(), value.end(), ::isalpha) != value.end()
		|| std::find_if_not(value.begin(), value.end(), ::isdigit) != value.end() )
		return 3;

	return (4);
}

bool	BitcoinExchange::inputCheck( std::string const &date ) const {

	std::string	year = date.substr( 0, 4 );
	std::string	month = date.substr( 5, 2 );
	std::string	day = date.substr( 8, 2 );

	if (date.size() != 10)
		return (false);

	if (date[4] != '-' || date[7] != '-')
		return (false);

	if (atoi( year.c_str() ) > 2022 || atoi( year.c_str() ) < 2009)
		return (false);

	if (atoi( month.c_str() ) > 12 || atoi( month.c_str() ) < 1)
		return (false);

	if (atoi( day.c_str() ) > 31 || atoi( day.c_str() ) < 1)
		return (false);

	if (!pairMonthCheck( atoi(year.c_str()), atoi(month.c_str()), atoi(day.c_str()) ))
		return (false);

	if (atoi( year.c_str() ) < 2009 && atoi( month.c_str() ) < 1 && atoi( day.c_str() ) < 2)
		return (false);

	return (true);
}


/*########### OPERATORS OVERLOAD ##########*/
/*-------------- ASSIGNEMENT --------------*/
BitcoinExchange	&BitcoinExchange::operator=( BitcoinExchange const &rhs ) {

	if (this != &rhs)
		this->_fileName = rhs._fileName;

	return (*this);
}
/*-----------------------------------------*/
/*#########################################*/
