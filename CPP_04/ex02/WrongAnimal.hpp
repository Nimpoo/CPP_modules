/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:04:12 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/13 18:04:14 by sihemayoub       ###   ########.fr       */
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
