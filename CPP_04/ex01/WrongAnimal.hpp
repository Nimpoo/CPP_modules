/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 02:17:20 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/11 16:38:09 by mayoub           ###   ########.fr       */
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

	/* virtual */void	makeSound( void ) const;

protected:

	std::string	type;

};

#endif
