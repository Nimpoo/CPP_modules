/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 10:35:19 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/19 11:36:20 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

/*############# CONST / DEST ##############*/
/*---------- DEFAULT CONSTRUCTOR ----------*/
Serializer::Serializer( void ) { }
/*-----------------------------------------*/

/*----------- COPY CONSTRUCTOR ------------*/
Serializer::Serializer( Serializer const &src ) { *this = src; }
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
Serializer::~Serializer( void ) { }
/*-----------------------------------------*/
/*#########################################*/


uintptr_t	Serializer::serialize( Data *ptr ) { return ( reinterpret_cast<uintptr_t>(ptr) ); }

Data	*Serializer::deserialize( uintptr_t raw ) { return ( reinterpret_cast<Data *>(raw) ); }


/*########### OPERATORS OVERLOAD ##########*/
/*-------------- ASSIGNEMENT --------------*/
Serializer	&Serializer::operator=( Serializer const &rhs ) {

	(void) rhs;

	std::cout << "Nothing to assign." << std::endl;
	return (*this);
}
/*-----------------------------------------*/
/*#########################################*/
