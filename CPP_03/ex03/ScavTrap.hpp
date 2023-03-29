/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 18:05:30 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/29 18:05:31 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include   "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:

/*------------- CONST / DEST --------------*/
	ScavTrap( void );
	ScavTrap( ScavTrap const &src );
	ScavTrap( std::string name );
	~ScavTrap( void );

	void	attack( const std::string &target );

	void	guardGate( void );

/*----------- OPERATOR OVERLOAD -----------*/
	ScavTrap	&operator=( ScavTrap const &rhs );

};

/*--------------- STREAM OUT --------------*/
std::ostream	&operator<<( std::ostream &o, ScavTrap const &i );

#endif
