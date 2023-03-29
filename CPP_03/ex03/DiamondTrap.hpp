/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 18:06:46 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/29 18:09:21 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include   "ClapTrap.hpp"

class DiamondTrap : public ClapTrap {

public:

/*------------- CONST / DEST --------------*/
	DiamondTrap( void );
	DiamondTrap( DiamondTrap const &src );
	DiamondTrap( std::string name );
	~DiamondTrap( void );

/*----------- OPERATOR OVERLOAD -----------*/
	DiamondTrap	&operator=( DiamondTrap const &rhs );

};

/*--------------- STREAM OUT --------------*/
std::ostream	&operator<<( std::ostream &o, DiamondTrap const &i );

#endif
