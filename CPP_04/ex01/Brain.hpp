/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 02:18:35 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/11 02:28:18 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include	<iostream>

class Brain {

public:

/*------------- CONST / DEST --------------*/
	Brain( void );
	Brain ( Brain const &src );
	virtual ~Brain( void );

/*----------- OPERATOR OVERLOAD -----------*/
	Brain	&operator=( Brain const &rhs );

protected:

	std::string	ideas[100];

};

#endif
