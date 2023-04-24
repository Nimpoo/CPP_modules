/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 18:02:24 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/24 16:12:36 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template< typename T, class Allocator = std::deque< T > >
class MutantStack : public std::stack< T, Allocator > {

public:

/*------------- CONST / DEST --------------*/
	MutantStack( void ) { std::cout << "\e[1;37mDEFAULT\e[0m \e[1;32mConstruct\e[0m of \e[1;35mMutantStack 👺\e[0m" << std::endl; };
	MutantStack( MutantStack const &src ) { *this = src; std::cout << "\e[1;37mCOPY\e[0m \e[1;32mConstruct\e[0m of \e[1;35mMutantStack 👺\e[0m" << std::endl; };
	virtual ~MutantStack( void ) { std::cout << "\e[1;31mDestruct\e[0m of \e[1;35mMutantStack 💥\e[0m" << std::endl; };

	typedef typename std::stack< T >::container_type::iterator			iterator;
	typedef typename std::stack< T >::container_type::const_iterator	const_iterator;

	iterator		begin( void ) { return ( this->c.begin() ); };
	const_iterator	begin( void ) const { return ( this->c.begin() ); };
	
	iterator		rbegin( void ) { return ( this->c.rbegin() ); };
	const_iterator	rbegin( void ) const { return ( this->c.rbegin() ); };


	iterator		end( void ) { return ( this->c.end() ); };
	const_iterator	end( void ) const { return ( this->c.end() ); };
	
	iterator		rend( void ) { return ( this->c.rend() ); };
	const_iterator	rend( void ) const { return ( this->c.rend() ); };

/*----------- OPERATORS OVERLOAD ----------*/
	MutantStack	&operator=( MutantStack const &rhs ) { std::stack< T, Allocator >::operator=(rhs); return(*this); };

};
