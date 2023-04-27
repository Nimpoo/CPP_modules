/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:13:24 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/27 18:15:47 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RNP_HPP
# define RNP_HPP

# include <iostream>

# include <algorithm>
# include <stack>

class RNP {

public:

/*------------- CONST / DEST --------------*/
	RNP( void );
	RNP( RNP const &src );
	~RNP( void );

/*----------- OPERATOR OVERLOAD -----------*/
	RNP	&operator=( RNP const &rhs );

private:

	

};

#endif
