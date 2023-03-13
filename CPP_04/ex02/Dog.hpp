/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:04:35 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/13 18:04:37 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include	"Animal.hpp"

# include	"Brain.hpp"

class Dog : public Animal {

public:

/*------------- CONST / DEST --------------*/
	Dog( void );
	Dog( Dog const &src );
	virtual ~Dog( void );

/*----------- OPERATOR OVERLOAD -----------*/
	Dog	&operator=( Dog const &rhs );

/*-------------- ACCESSORS ----------------*/
	std::string virtual	getType( void ) const;
	Brain	*getBrain( void ) const;

	void	makeSound( void ) const;

protected:

	std::string	type;

	Brain	*_brain;

};

#endif
