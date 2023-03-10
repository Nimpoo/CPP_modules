/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:58:17 by mayoub            #+#    #+#             */
/*   Updated: 2023/03/10 18:09:28 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include	<iostream>

class Animal {

public:

/*------------- CONST / DEST --------------*/
	Animal( void );
	Animal( Animal const &src );
	~Animal( void );

/*----------- OPERATOR OVERLOAD -----------*/
	Animal	&operator=( Animal const &rhs );

protected:

	std::string	type;

};

#endif
