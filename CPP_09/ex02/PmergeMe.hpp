/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 17:32:05 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/28 17:33:41 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>

# include <stdexcept>

# include <algorithm>

class PmergeMe {

public:

/*------------- CONST / DEST --------------*/
	PmergeMe( void );
	PmergeMe( PmergeMe const &src );
	~PmergeMe( void );

/*----------- OPERATOR OVERLOAD -----------*/
	PmergeMe	&operator=( PmergeMe const &rhs );

private:

	

};

#endif
