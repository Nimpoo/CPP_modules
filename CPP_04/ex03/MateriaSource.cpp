/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 10:42:37 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/05 13:45:35 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*############# CONST / DEST ##############*/
/*---------- DEFAULT CONSTRUCTOR ----------*/
MateriaSource::MateriaSource( void ) {

	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
}
/*-----------------------------------------*/

/*----------- COPY CONSTRUCTOR ------------*/
MateriaSource::MateriaSource( MateriaSource const &src ) { *this = src; }
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
MateriaSource::~MateriaSource( void ) { }
/*-----------------------------------------*/
/*#########################################*/


void	MateriaSource::learnMateria( AMateria *m ) {

	for (int i = 0; i < 4; i++) {
		if (this->_materia[i] == NULL)
		{
			_materia[i] = m;
			return ;
		}
	}
}

AMateria	*MateriaSource::createMateria( std::string const & type ) {

	for (int i = 0; i < 4; i++)
		if (this->_materia[i] && this->_materia[i]->getType() == type)
			return (this->_materia[i]->clone());

	return (NULL);
}


/*############### ACCESSORS ###############*/
/*---------------- GETERS -----------------*/
AMateria	*MateriaSource::getMateria( std::string const & type ) {

	for (int i = 0; i < 4; i++)
		if (this->_materia[i] && this->_materia[i]->getType() == type )
			return (this->_materia[i]);

	return (NULL);
}
/*-----------------------------------------*/

/*---------------- SETERS -----------------*/
/*-----------------------------------------*/
/*#########################################*/


/*########### OPERATORS OVERLOAD ##########*/
/*-------------- ASSIGNEMENT --------------*/
MateriaSource	&MateriaSource::operator=( MateriaSource const &rhs ) {

	for (int i = 0; i < 4; i++)
		this->_materia[i] = rhs._materia[i];

	return (*this);
}
/*-----------------------------------------*/

/*--------------- STREAM OUT --------------*/
std::ostream	&operator<<( std::ostream &o, MateriaSource const &i ) {

	(void) i;

	return (o);
}
/*-----------------------------------------*/
/*#########################################*/
