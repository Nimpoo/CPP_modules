/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:34:06 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/05/12 13:18:03 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/*############# CONST / DEST ##############*/
/*---------- DEFAULT CONSTRUCTOR ----------*/
PmergeMe::PmergeMe( void ) { }
/*-----------------------------------------*/

/*----------- VECT CONSTRUCTOR ------------*/
PmergeMe::PmergeMe( int ac, char **av, std::vector<int> vect ) {

	for (int i = 1; i < ac; i++)
		vect.push_back( atoi(av[i]) );

	this->_vector = vect;

	std::vector<int>::iterator it_begin = this->_vector.begin();
	std::vector<int>::iterator it_end = this->_vector.end();

	sortingVector( this->_vector, it_begin, it_end );
}
/*-----------------------------------------*/

/*----------- DEQU CONSTRUCTOR ------------*/
PmergeMe::PmergeMe( int ac, char **av, std::deque<int> deq ) {

	for (int i = 1; i < ac; i++)
		deq.push_back( atoi(av[i]) );

	this->_deque = deq;

	std::deque<int>::iterator it_begin = this->_deque.begin();
	std::deque<int>::iterator it_end = this->_deque.end();

	sortingDeque( this->_deque, it_begin, it_end );
}
/*-----------------------------------------*/

/*----------- COPY CONSTRUCTOR ------------*/
PmergeMe::PmergeMe( PmergeMe const &src ) { *this = src; }
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
PmergeMe::~PmergeMe( void ) { }
/*-----------------------------------------*/
/*#########################################*/


void	PmergeMe::sortingVector( std::vector<int> vector, std::vector<int>::iterator it_begin, std::vector<int>::iterator it_end ) {

	const int	insertion_threshold = 10;
	int			size = std::distance(it_begin, it_end);

	if (size <= insertion_threshold) {

		for (std::vector<int>::iterator it = it_begin; it != it_end; it++) {

			std::vector<int>::value_type value = *it;
			std::vector<int>::iterator insertion_pos = std::upper_bound(it_begin, it, value);
			std::rotate(insertion_pos, it, std::next(it));
		}
	}
	else {

		std::vector<int>::iterator mid = std::next(it_begin, size / 2);
		sortingVector(vector, it_begin, mid);
		sortingVector(vector, mid, it_end);

		std::vector<int>			merged;
		std::vector<int>::iterator	left = it_begin;
		std::vector<int>::iterator	right = mid;

		while (left != mid && right != it_end) {

			if (*left < *right) {
				merged.push_back(*left);
				++left;
			}

			else {
				merged.push_back(*right);
				++right;
			}
		}
		merged.insert(merged.end(), left, mid);
		merged.insert(merged.end(), right, it_end);

		std::copy(merged.begin(), merged.end(), it_begin);
	}
}

void	PmergeMe::sortingDeque( std::deque<int> deque, std::deque<int>::iterator it_begin, std::deque<int>::iterator it_end ) {

	const int	insertion_threshold = 10;
	int			size = std::distance(it_begin, it_end);

	if (size <= insertion_threshold) {

		for (std::deque<int>::iterator it = it_begin; it != it_end; it++) {

			std::deque<int>::value_type value = *it;
			std::deque<int>::iterator insertion_pos = std::upper_bound(it_begin, it, value);
			std::rotate(insertion_pos, it, std::next(it));
		}
	}
	else {

		std::deque<int>::iterator mid = std::next(it_begin, size / 2);
		sortingDeque(deque, it_begin, mid);
		sortingDeque(deque, mid, it_end);

		std::deque<int>				merged;
		std::deque<int>::iterator	left = it_begin;
		std::deque<int>::iterator	right = mid;

		while (left != mid && right != it_end) {

			if (*left < *right) {
				merged.push_back(*left);
				++left;
			}

			else {
				merged.push_back(*right);
				++right;
			}
		}
		merged.insert(merged.end(), left, mid);
		merged.insert(merged.end(), right, it_end);

		std::copy(merged.begin(), merged.end(), it_begin);
	}
}


/*############### ACCESSORS ###############*/
/*---------------- GETERS -----------------*/
std::vector<int> const	&PmergeMe::getVector( void ) const { return (this->_vector); }
std::deque<int> const	&PmergeMe::getDeque( void ) const { return (this->_deque); }
/*-----------------------------------------*/
/*#########################################*/


/*########### OPERATORS OVERLOAD ##########*/
/*-------------- ASSIGNEMENT --------------*/
PmergeMe	&PmergeMe::operator=( PmergeMe const &rhs ) {

	(void) rhs;

	std::cout << "Nothing to assign." << std::endl;
	return (*this);
}
/*-----------------------------------------*/
/*#########################################*/
