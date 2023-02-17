/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 19:11:37 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/17 16:40:09 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include	<iostream>

class Zombie {

public:

/*------------- CONST / DEST --------------*/
	Zombie( std::string name );
	~Zombie( void );

	void	announce( void );

	Zombie	*newZombie( std::string name);
	void	randomChump( std::string name);

private:

	std::string	_name;

};

#endif
