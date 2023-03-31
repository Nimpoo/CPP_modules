/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 18:06:46 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/31 01:35:47 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include   "ClapTrap.hpp"
# include   "FragTrap.hpp"
# include   "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

public:

/*------------- CONST / DEST --------------*/
	DiamondTrap( void );
	DiamondTrap( DiamondTrap const &src );
	DiamondTrap( std::string name );
	~DiamondTrap( void );

	void	attack( const std::string &target ); // * ScavTrap

	void	whoAmI( void );

/*----------- OPERATOR OVERLOAD -----------*/
	DiamondTrap	&operator=( DiamondTrap const &rhs );

private:

	std::string		_name;

	using FragTrap::_hit_points;
	using ScavTrap::_energy_points;
	using FragTrap::_attack_damage;

	// unsigned int	_hit_point;	// ? FragTrap
	// unsigned int	_energy_points;	// * ScavTrap
	// unsigned int	_attack_damage;	// ? FragTrap

};

/*--------------- STREAM OUT --------------*/
std::ostream	&operator<<( std::ostream &o, DiamondTrap const &i );

#endif
