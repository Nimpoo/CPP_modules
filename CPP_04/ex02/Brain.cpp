/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:05:04 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/13 18:05:07 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*############# CONST / DEST ##############*/
/*---------- DEFAULT CONSTRUCTOR ----------*/
Brain::Brain( void ) {

	std::cout << "\033[1;37mBrain\033[0m was \033[1;32mCONSTRUCT\033[0m 🧠" << std::endl;
	for (size_t i = 0; i < 100; i++) {
		this->ideas[i] = "Random idea N°[ " + std::to_string(i) + " ]";
	}
}
/*-----------------------------------------*/

/*----------- COPY CONSTRUCTOR ------------*/
Brain::Brain( Brain const &src ) { *this = src;

	std::cout << "\033[1;37mBrain COPY\033[0m was \033[1;32mCONSTRUCT\033[0m 🧠" << std::endl;
}
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
Brain::~Brain( void ) {

	std::cout << "\033[1;37mBrain\033[0m was \033[1;31mDESTRUCT\033[0m 💥" << std::endl;
}
/*-----------------------------------------*/
/*#########################################*/


/*############### ACCESSORS ###############*/
/*---------------- GETERS -----------------*/
std::string	Brain::getIdea( int index ) const {

	return (this->ideas[ index ]);
}
/*-----------------------------------------*/
/*---------------- SETERS -----------------*/
void	Brain::setIdea( std::string idea, int index ) {

	this->ideas[ index ] = idea;
}
/*-----------------------------------------*/
/*#########################################*/


/*########### OPERATORS OVERLOAD ##########*/
/*-------------- ASSIGNEMENT --------------*/
Brain	&Brain::operator=( Brain const &rhs ) {

	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}
/*-----------------------------------------*/
/*#########################################*/
