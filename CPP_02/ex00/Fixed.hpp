/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 10:20:42 by mayoub            #+#    #+#             */
/*   Updated: 2023/03/03 14:02:30 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include	<iostream>

class Fixed {

public:

/*------------- CONST / DEST --------------*/
	Fixed( void );
	Fixed( Fixed const &src );
	~Fixed( void );

/*-------------- ASSIGNEMENT --------------*/
	Fixed	&operator=( Fixed const &rhs );

	void	setRawBits( int const raw );
	int		getRawBits( void ) const;

private:

	int					_bits;
	static const int	_rawBits;

};

/*--------------- STREAM OUT --------------*/
std::ostream	&operator<<( std::ostream &o, Fixed const &i );

#endif
