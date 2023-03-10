/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:57:12 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/19 15:34:38 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>

# include "Weapon.hpp"

class HumanA {

public:

	HumanA( std::string name, Weapon &type );
	~HumanA( void );

	void		attack( void );

private:

	std::string	_type;
	std::string	_name;

	Weapon		&_item;

};

#endif
