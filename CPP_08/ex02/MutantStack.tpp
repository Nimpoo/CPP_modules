/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 18:02:24 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/22 19:11:30 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template< class Container >
class MutantStack : public std::stack<Container> {

public:

/*------------- CONST / DEST --------------*/
	MutantStack( void ) {};
	MutantStack( MutantStack const &src ) { *this = src; };
	virtual ~MutantStack( void ) {};

	typedef typename std::stack<Container>::container_type::iterator		iterator;
	typedef typename std::stack<Container>::container_type::const_iterator	const_iterator;

	iterator		begin( void ) { return ( this->c.begin() ); };
	const_iterator	begin( void ) const { return ( this->c.begin() ); };
	
	iterator		rbegin( void ) { return ( this->c.rbegin() ); };
	const_iterator	rbegin( void ) const { return ( this->c.rbegin() ); };


	iterator		end( void ) { return ( this->c.end() ); };
	const_iterator	end( void ) const { return ( this->c.end() ); };
	
	iterator		rend( void ) { return ( this->c.rend() ); };
	const_iterator	rend( void ) const { return ( this->c.rend() ); };

/*----------- OPERATORS OVERLOAD ----------*/
	MutantStack	&operator=( MutantStack const &rhs ) { (void) rhs; return (*this); };

private:

	

};

