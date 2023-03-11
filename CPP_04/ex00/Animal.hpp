/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:58:17 by mayoub            #+#    #+#             */
/*   Updated: 2023/03/11 01:55:16 by sihemayoub       ###   ########.fr       */
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
	virtual ~Animal( void );

/*----------- OPERATOR OVERLOAD -----------*/
	Animal	&operator=( Animal const &rhs );

/*-------------- ACCESSORS ----------------*/
	std::string virtual	getType( void ) const;

	void virtual	makeSound( void ) const;

protected:

	std::string	type;

};

#endif
