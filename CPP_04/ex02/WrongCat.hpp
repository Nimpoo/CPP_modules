/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:03:40 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/13 18:03:43 by sihemayoub       ###   ########.fr       */
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
