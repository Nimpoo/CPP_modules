/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 02:16:16 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/11 02:16:18 by sihemayoub       ###   ########.fr       */
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
	virtual ~Dog( void );

/*----------- OPERATOR OVERLOAD -----------*/
	Dog	&operator=( Dog const &rhs );

/*-------------- ACCESSORS ----------------*/
	std::string virtual	getType( void ) const;

	virtual void	makeSound( void ) const;

protected:

	std::string	type;

};

#endif
