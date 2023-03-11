/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 02:17:34 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/11 17:09:25 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include	"WrongAnimal.hpp"

# include	"Brain.hpp"

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

	/* virtual */void	makeSound( void ) const;

protected:

	std::string	type;

};

#endif
