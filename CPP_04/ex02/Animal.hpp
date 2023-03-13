/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:05:16 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/13 18:25:48 by sihemayoub       ###   ########.fr       */
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

	virtual void	makeSound( void ) const = 0;

protected:

	std::string	type;

};

#endif
