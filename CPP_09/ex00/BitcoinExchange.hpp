/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 12:59:46 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/23 13:11:53 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>

# include <algorithm>

class BitcoinExchange {

public:

/*------------- CONST / DEST --------------*/
	BitcoinExchange( void );
	BitcoinExchange( BitcoinExchange const &src );
	virtual ~BitcoinExchange( void );

/*----------- OPERATORS OVERLOAD ----------*/
	BitcoinExchange	&operator=( BitcoinExchange const &rhs );

private:

	

};

#endif
