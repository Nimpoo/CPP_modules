/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 08:46:17 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/05 13:47:51 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria {

public:

/*------------- CONST / DEST --------------*/
	Ice( void );
	Ice( Ice const &src );
	virtual ~Ice( void );

	AMateria	*clone( void ) const;
	void		use( ICharacter &target );

/*----------- OPERATOR OVERLOAD -----------*/
	Ice	&operator=( Ice const &rhs );

};

/*--------------- STREAM OUT --------------*/
std::ostream	&operator<<( std::ostream &o, Ice const &i );


#endif
