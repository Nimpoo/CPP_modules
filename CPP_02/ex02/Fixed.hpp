/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 10:20:42 by mayoub            #+#    #+#             */
/*   Updated: 2023/03/06 17:29:17 by mayoub           ###   ########.fr       */
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

/*----------- OPERATOR OVERLOAD -----------*/
	Fixed	&operator=( Fixed const &rhs );
	Fixed	operator+( Fixed const &rhs ) const;
	Fixed	operator-( Fixed const &rhs ) const;
	Fixed	operator*( Fixed const &rhs ) const;
	Fixed	operator/( Fixed const &rhs ) const;
	Fixed	&operator++( void );
	Fixed	operator++( int increment );
	Fixed	&operator--( void );
	Fixed	operator--( int decrement );
	bool	operator>( const Fixed &other ) const;
	bool	operator<( const Fixed &other ) const;
	bool	operator>=( const Fixed &other ) const;
	bool	operator<=( const Fixed &other ) const;
	bool	operator==( const Fixed &other ) const;
	bool	operator!=( const Fixed &other ) const;

/*--------------- ACCESSORS ---------------*/
	void	setRawBits( int const raw );
	int		getRawBits( void ) const;

	float	toFloat( void ) const;
	int		toInt( void ) const;

	static Fixed		max( Fixed &x, Fixed &y ) ;
	static const Fixed	max( Fixed const &x, Fixed const &y ) ;

	static Fixed		min( Fixed &x, Fixed &y ) ;
	static const Fixed	min( Fixed const &x, Fixed const &y ) ;

private:

	int					_bits;
	static const int	_rawBits;

};

/*--------------- STREAM OUT --------------*/
std::ostream	&operator<<( std::ostream &o, Fixed const &i );

#endif
