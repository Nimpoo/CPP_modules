/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 18:34:28 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/05 11:13:22 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include <iostream>

# include "AMateria.hpp"

class AMateria;

class ICharacter {

public:

	virtual			~ICharacter( void ) {};
	virtual			std::string const & getName( void ) const = 0;
	virtual void	equip( AMateria* m ) = 0;
	virtual void	unequip( int idx ) = 0;
	virtual void	use( int idx, ICharacter& target ) = 0;

};

#endif
