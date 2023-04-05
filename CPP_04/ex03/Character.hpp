/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 23:42:02 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/05 13:48:34 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter {

public:

/*------------- CONST / DEST --------------*/
	Character( void );
	Character( std::string const &name );
	Character( Character const &cpy );
	virtual ~Character( void );

/*---------------- GETERS -----------------*/
	std::string const   &getName( void ) const;

	void	equip( AMateria* m );
	void	unequip( int idx );
	void	use( int idx, ICharacter& target );

/*----------- OPERATOR OVERLOAD -----------*/
	Character	&operator=( Character const &rhs );

private:

	std::string _name;
	AMateria	*_inventory[4];

};

/*--------------- STREAM OUT --------------*/
std::ostream	&operator<<( std::ostream &o, Character const &i );

#endif
