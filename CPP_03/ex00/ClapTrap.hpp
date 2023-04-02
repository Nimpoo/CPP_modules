/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 01:08:49 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/02 17:41:17 by mayoub           ###   ########.fr       */
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
	ClapTrap( const std::string &name );
	virtual ~ClapTrap();

	void	attack( const std::string &target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );

/*---------------- GETERS -----------------*/
	unsigned int	getHitPoints( void );
	unsigned int	getEnergyPoints( void );
	unsigned int	getAttackDamage( void );

/*----------- OPERATOR OVERLOAD -----------*/
	ClapTrap	&operator=( ClapTrap const &rhs );

private:

	std::string		_name;
	unsigned int	_hit_points;
	unsigned int	_energy_points;
	unsigned int	_attack_damage;

};

/*--------------- STREAM OUT --------------*/
std::ostream	&operator<<( std::ostream &o, ClapTrap const &i );

#endif
