/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 18:21:30 by mayoub            #+#    #+#             */
/*   Updated: 2023/04/18 18:51:47 by mayoub           ###   ########.fr       */
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

/*------------- CONST / DEST --------------*/
	ScalarConverter( void );
	ScalarConverter( ScalarConverter const &src );
	~ScalarConverter( void );

	void	convert( std::string const &arg ) const;

/*----------- OPERATORS OVERLOAD ----------*/
	ScalarConverter	&operator=( ScalarConverter const &rhs );

};

#endif
