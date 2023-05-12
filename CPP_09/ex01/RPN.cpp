/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:13:05 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/05/12 14:31:36 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

/*############# CONST / DEST ##############*/
/*---------- DEFAULT CONSTRUCTOR ----------*/
RPN::RPN( void ) { }
/*-----------------------------------------*/

/*----------- INIT CONSTRUCTOR ------------*/
RPN::RPN( std::stringstream &rpn, std::stringstream &ss ) {

	std::string			tmp;

	while (getline(rpn, tmp, ' '))
		if ( (!isdigit(tmp[0]) && !issign(tmp[0])) || tmp.size() != 1 )
			throw std::invalid_argument("\e[1;31m[Error]\e[0m invalid argument.");

	while (getline(ss, tmp, ' ')) {

		if (!issign(tmp[0]))
		{
			this->_stack.push( atoi(tmp.c_str()) );
			continue ;
		}
		else if (this->_stack.size() > 1) {
			int nbr1 = this->_stack.top();
			this->_stack.pop();

			int nbr2 = this->_stack.top();
			this->_stack.pop();

			if (tmp == "+")
				this->_stack.push( nbr2 + nbr1 );

			else if (tmp == "-")
				this->_stack.push( nbr2 - nbr1 );

			else if (tmp == "*")
				this->_stack.push( nbr2 * nbr1 );

			else if (tmp == "/")
				this->_stack.push( nbr2 / nbr1 );
		}
	}
	if (this->_stack.size() != 1)
		throw std::invalid_argument("\e[1;31m[Error]\e[0m invalid INPUT argument.");
	std::cout << this->_stack.top() << std::endl;

}
/*-----------------------------------------*/

/*----------- COPY CONSTRUCTOR ------------*/
RPN::RPN( RPN const &src ) { *this = src; }
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
RPN::~RPN( void ) { }
/*-----------------------------------------*/
/*#########################################*/


bool	RPN::issign( char c ) const { return (c == '+' || c == '-' || c == '*' || c == '/'); }


/*########### OPERATORS OVERLOAD ##########*/
/*-------------- ASSIGNEMENT --------------*/
RPN	&RPN::operator=( RPN const &rhs ) {

	(void) rhs;

	std::cout << "Nothing to assign." << std::endl;
	return (*this);
}
/*-----------------------------------------*/
/*#########################################*/
