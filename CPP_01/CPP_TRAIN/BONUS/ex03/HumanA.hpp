/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 12:46:29 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/19 15:18:17 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>

# include "Weapon.hpp"

class HumanA {

public:

	HumanA( std::string name, Weapon &item );
	~HumanA( void );

	void	attack( void );

private:

	Weapon		&_item;

	std::string	_name;

};

#endif
