/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 16:54:43 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/18 17:37:41 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {

public:

	Weapon( std::string type );
	~Weapon( void );

	const std::string	&getType( void ) const;
	void				setType( std::string type );

private:

	std::string	_type;

};

#endif
