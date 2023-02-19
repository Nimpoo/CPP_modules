/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 12:50:36 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/19 14:20:46 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Weapon_HPP
# define Weapon_HPP

# include <iostream>

class Weapon {

public:

	Weapon( std::string type );
	~Weapon( void );

	std::string	getType( void );
	void		setType( std::string type );

private:

	std::string	_type;

};

#endif
