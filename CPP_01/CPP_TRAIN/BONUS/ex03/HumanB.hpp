/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 12:48:02 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/19 15:25:54 by mayoub           ###   ########.fr       */
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

	void		attack( void );

	void		setWeapon( Weapon &item );

private:

	Weapon		*_item;

	std::string	_name;

};

#endif
