/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 19:02:11 by mayoub            #+#    #+#             */
/*   Updated: 2023/03/11 15:55:40 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include	"WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:

/*------------- CONST / DEST --------------*/
	WrongCat( void );
	WrongCat( WrongCat const &src );
	virtual ~WrongCat( void );

/*----------- OPERATOR OVERLOAD -----------*/
	WrongCat	&operator=( WrongCat const &rhs );

/*-------------- ACCESSORS ----------------*/
	std::string virtual	getType( void ) const;

	/* virtual */ void	makeSound( void ) const;

protected:

	std::string	type;

};

#endif
