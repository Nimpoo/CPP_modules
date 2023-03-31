/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 18:04:57 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/31 02:19:02 by sihemayoub       ###   ########.fr       */
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

	unsigned int	getHitPoints( void );
	unsigned int	getEnergyPoints( void );
	unsigned int	getAttackDamage( void );

/*---------------- GETERS -----------------*/
	std::string	getName( void ) const;

/*----------- OPERATOR OVERLOAD -----------*/
	ClapTrap	&operator=( ClapTrap const &rhs );

protected:

	std::string	_name;

	unsigned int	_hit_points;
	unsigned int	_energy_points;
	unsigned int	_attack_damage;

};

/*--------------- STREAM OUT --------------*/
std::ostream	&operator<<( std::ostream &o, ClapTrap const &i );

#endif
