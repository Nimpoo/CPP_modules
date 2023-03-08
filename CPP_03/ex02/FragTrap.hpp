/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 00:46:17 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/09 00:49:26 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include   "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:

/*------------- CONST / DEST --------------*/
	FragTrap( void );
	FragTrap( FragTrap const &src );
	FragTrap( std::string name );
	~FragTrap( void );

	void	attack( const std::string &target );

	void	highFivesGuys( void );

/*----------- OPERATOR OVERLOAD -----------*/
	FragTrap	&operator=( FragTrap const &rhs );

};

/*--------------- STREAM OUT --------------*/
std::ostream	&operator<<( std::ostream &o, FragTrap const &i );

#endif
