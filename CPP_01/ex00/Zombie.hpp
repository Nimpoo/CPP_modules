/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 19:11:37 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/16 19:21:49 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include	<iostream>

class Zombie {

public:

/*------------- CONST / DEST --------------*/
	Zombie( void );
	~Zombie( void );

	void	announce( void );

	Zombie	*newZombie( std::string _name);
	void	randomChump( std::string _name);

private:

	std::string	_name;

};

#endif
