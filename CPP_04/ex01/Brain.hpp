/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 02:18:35 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/13 16:07:09 by sihemayoub       ###   ########.fr       */
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

/*-------------- ACCESSORS ----------------*/
	std::string	getIdea( int index ) const;
	void	setIdea( std::string ideas, int index );

/*----------- OPERATOR OVERLOAD -----------*/
	Brain	&operator=( Brain const &rhs );

protected:

	std::string	ideas[100];

};

#endif
