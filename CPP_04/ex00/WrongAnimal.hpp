/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 19:01:33 by mayoub            #+#    #+#             */
/*   Updated: 2023/03/11 15:55:44 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include	<iostream>

class WrongAnimal {

public:

/*------------- CONST / DEST --------------*/
	WrongAnimal( void );
	WrongAnimal( WrongAnimal const &src );
	virtual ~WrongAnimal( void );

/*----------- OPERATOR OVERLOAD -----------*/
	WrongAnimal	&operator=( WrongAnimal const &rhs );

/*-------------- ACCESSORS ----------------*/
	std::string virtual	getType( void ) const;

	/* virtual */ void	makeSound( void ) const;

protected:

	std::string	type;

};

#endif
