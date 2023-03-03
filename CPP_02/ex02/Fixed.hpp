/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 10:20:42 by mayoub            #+#    #+#             */
/*   Updated: 2023/03/03 18:03:55 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include	<iostream>
# include	<cmath>

class Fixed {

public:

/*------------- CONST / DEST --------------*/
	Fixed( void );
	Fixed( Fixed const &src );

	Fixed( const float f );
	Fixed( const int n );

	~Fixed( void );

/*-------------- ASSIGNEMENT --------------*/
	Fixed	&operator=( Fixed const &rhs );

	void	setRawBits( int const raw );
	int		getRawBits( void ) const;

	float	toFloat( void ) const;
	int		toInt( void ) const;

	Fixed	max( Fixed &x, Fixed &y ) const;
	Fixed	max( Fixed const &x, Fixed const &y ) const;

	Fixed	min( Fixed &x, Fixed &y ) const;
	Fixed	min( Fixed const &x, Fixed const &y ) const;

private:

	int					_bits;
	static const int	_rawBits;

};

/*--------------- STREAM OUT --------------*/
std::ostream	&operator<<( std::ostream &o, Fixed const &i );

#endif
