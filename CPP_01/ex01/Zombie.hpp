/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 14:51:22 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/19 15:34:15 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP 

#include <iostream>

class Zombie {

public:

/*------------- CONST / DEST --------------*/
	Zombie( void );
	~Zombie( void );

	void		announce( void ) const;

	Zombie		*newZombie( std::string name);
	void		randomChump( std::string name);

	void		setName( std::string name );
	std::string	getName( void ) const;

private:

	std::string	_name;

};

Zombie	*zombieHorde( int N, std::string name );

#endif
