/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 10:35:37 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/05 13:48:45 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

public:

/*------------- CONST / DEST --------------*/
	MateriaSource( void );
	MateriaSource( MateriaSource const &cpy );
	virtual ~MateriaSource( void );


/*---------------- GETERS -----------------*/
	AMateria	*getMateria( std::string const & type );

	void		learnMateria( AMateria *m );
	AMateria	*createMateria( std::string const & type );

/*----------- OPERATOR OVERLOAD -----------*/
	MateriaSource	&operator=( MateriaSource const &rhs );

private:

	AMateria	*_materia[4];

};

/*--------------- STREAM OUT --------------*/
std::ostream	&operator<<( std::ostream &o, MateriaSource const &i );

#endif
