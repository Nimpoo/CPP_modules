/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:56:25 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/18 18:34:22 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>

# include "Weapon.hpp"

class HumanB {

public:

	HumanB( std::string name );
	~HumanB( void );

	void		attack();

	void		setWeapon( Weapon &item );

private:

	std::string	_name;

	Weapon		*_item;

};

#endif
