/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 02:18:32 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/11 17:49:01 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*############# CONST / DEST ##############*/
/*---------- DEFAULT CONSTRUCTOR ----------*/
Brain::Brain( void ) {

	std::cout << "\033[1;37mBrain\033[0m was \033[1;32mCONSTRUCT\033[0m 🧠" << std::endl;
}
/*-----------------------------------------*/

/*----------- COPY CONSTRUCTOR ------------*/
Brain::Brain( Brain const &src ) { *this = src;

	std::cout << "\033[1;37mBrain COPY\033[0m was \033[1;32mCONSTRUCT\033[0m 🧠" << std::endl;
}
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
Brain::~Brain( void ) {

	std::cout << "\033[1;37mBrain\033[0m was \033[1;32mDESTRUCT\033[0m 💥" << std::endl;
}
/*-----------------------------------------*/
/*#########################################*/


/*############### ACCESSORS ###############*/
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
