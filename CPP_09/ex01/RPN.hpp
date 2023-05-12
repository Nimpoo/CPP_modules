/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:13:24 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/05/12 14:12:48 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <sstream>

# include <stdexcept>

# include <algorithm>
# include <stack>

class RPN {

public:

/*------------- CONST / DEST --------------*/
	RPN( std::stringstream &rpn, std::stringstream &ss );
	RPN( RPN const &src );
	~RPN( void );

	bool	issign( char c ) const;

/*----------- OPERATOR OVERLOAD -----------*/
	RPN	&operator=( RPN const &rhs );

private:

	RPN( void );

	std::stack<int>	_stack;

};

#endif
