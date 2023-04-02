/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 17:21:03 by mayoub            #+#    #+#             */
/*   Updated: 2023/04/02 17:58:07 by mayoub           ###   ########.fr       */
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
