/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 18:06:46 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/01 17:57:45 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include   "FragTrap.hpp"
# include   "ScavTrap.hpp"

class DiamondTrap : public virtual FragTrap, public virtual ScavTrap {

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

	unsigned int	diamond_hit_points;	// ? FragTrap
	unsigned int	diamond_energy_points;	// * ScavTrap
	unsigned int	diamond_attack_damage;	// ? FragTrap

};

/*--------------- STREAM OUT --------------*/
std::ostream	&operator<<( std::ostream &o, DiamondTrap const &i );

#endif
