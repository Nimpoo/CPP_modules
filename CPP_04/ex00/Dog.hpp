/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:11:01 by mayoub            #+#    #+#             */
/*   Updated: 2023/03/10 18:58:26 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include	"Animal.hpp"

class Dog : public Animal {

public:

/*------------- CONST / DEST --------------*/
	Dog( void );
	Dog( Dog const &src );
	~Dog( void );

/*----------- OPERATOR OVERLOAD -----------*/
	Dog	&operator=( Dog const &rhs );

/*-------------- ACCESSORS ----------------*/
	std::string virtual	getType( void ) const;

	virtual void	makeSound( void ) const;

protected:

	std::string	type;

};

#endif
