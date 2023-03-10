/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 19:01:33 by mayoub            #+#    #+#             */
/*   Updated: 2023/03/10 19:01:51 by mayoub           ###   ########.fr       */
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
	~WrongAnimal( void );

/*----------- OPERATOR OVERLOAD -----------*/
	WrongAnimal	&operator=( WrongAnimal const &rhs );

/*-------------- ACCESSORS ----------------*/
	std::string virtual	getType( void ) const;

	void virtual	makeSound( void ) const;

protected:

	std::string	type;

};

#endif
