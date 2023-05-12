/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:32:05 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/05/12 13:27:32 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>

# include <stdexcept>

# include <algorithm>
# include <vector>
# include <deque>

class PmergeMe {

public:

/*------------- CONST / DEST --------------*/
	PmergeMe( int ac, char **av, std::vector<int> vect );
	PmergeMe( int ac, char **av, std::deque<int> deq );
	PmergeMe( PmergeMe const &src );
	~PmergeMe( void );

	void	sortingVector( std::vector<int> vector, std::vector<int>::iterator it_begin, std::vector<int>::iterator it_end );
	void	sortingDeque( std::deque<int> deque, std::deque<int>::iterator it_begin, std::deque<int>::iterator it_end );

/*-------------- ACCESSORS ----------------*/
	std::vector<int> const	&getVector( void ) const;
	std::deque<int> const	&getDeque( void ) const;

/*----------- OPERATOR OVERLOAD -----------*/
	PmergeMe	&operator=( PmergeMe const &rhs );

private:

	PmergeMe( void );
	std::vector<int>	_vector;
	std::deque<int>		_deque;

};

#endif
