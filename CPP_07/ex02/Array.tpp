/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 13:02:23 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/20 15:40:34 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>

template< typename T = int >
class Array {

public:

/*------------- CONST / DEST --------------*/
	Array( void ) : _n( 0 ) { std::cout << "\e[1;37mDEFAULT\e[0m \e[1;32mArray contruct ✅\e[0m with a \e[1;35mSIZE of " << this->_n << "\e[0m" << std::endl; };
	Array( unsigned int n ) : _n( n ) { this->_array = new T[ this->_n ]; std::cout << "\e[1;37mINIT\e[0m \e[1;32mArray contruct ✅\e[0m with a \e[1;35mSIZE of " << this->_n << "\e[0m" << std::endl; };
	Array( Array<T> const &src ) { *this = src; std::cout << "\e[1;37mCOPY\e[0m \e[1;32mArray contruct ✅\e[0m with a \e[1;35mSIZE of " << this->_n << "\e[0m" << std::endl; };
	~Array( void ) { std::cout << "\e[1;31mArray destruct ❌\e[0m with a \e[1;35mSIZE of " << this->_n << "\e[0m" << std::endl; };

	size_t	size( void ) const { return ( this->_n ); };

/*----------- OPERATORS OVERLOAD ----------*/
	Array<T>	&operator=( Array<T> const &rhs ) { if (this != &rhs) {this->_array = rhs._array; this->_n = rhs._n;} std::cout << "Operator \e[1;37mASSIGNEMENT\e[0m overload \e[1;33mUSED\e[0m 🆗" << std::endl; return (*this); };
	T			&operator[]( size_t i ) { if (i >= this->_n) throw std::out_of_range("\e[1;31m[ /!\\ OUT OF RANGE /!\\ ]\e[0m"); return ( this->_array[ i ] ); };

private:

	T		*_array;
	size_t	_n;

};
