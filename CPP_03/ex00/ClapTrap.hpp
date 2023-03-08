/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 01:08:49 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/08 02:00:47 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include   <iostream>

class ClapTrap {

public:

/*------------- CONST / DEST --------------*/
	ClapTrap( void );
	ClapTrap( ClapTrap const &src );
	ClapTrap( std::string name );
	~ClapTrap();

	void	attack( const std::string &target ) ;
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );

/*----------- OPERATOR OVERLOAD -----------*/
	ClapTrap	&operator=( ClapTrap const &rhs );

private:

	std::string	_name;
	unsigned int	_hit_points;
	unsigned int	_energy_points;
	unsigned int	_attack_damage;

};

/*--------------- STREAM OUT --------------*/
std::ostream	&operator<<( std::ostream &o, ClapTrap const &i );

#endif
