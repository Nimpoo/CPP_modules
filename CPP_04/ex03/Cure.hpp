/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 10:21:00 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/05 13:47:57 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria {

public:

/*------------- CONST / DEST --------------*/
	Cure( void );
	Cure( Cure const &src );
	virtual ~Cure( void );

	AMateria	*clone( void ) const;
	void		use( ICharacter &target );

/*----------- OPERATOR OVERLOAD -----------*/
	Cure	&operator=( Cure const &rhs );

};

/*--------------- STREAM OUT --------------*/
std::ostream	&operator<<( std::ostream &o, Cure const &i );


#endif
