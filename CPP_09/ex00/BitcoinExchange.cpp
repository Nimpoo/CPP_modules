/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 13:06:46 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/23 13:09:30 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/*############# CONST / DEST ##############*/
/*---------- DEFAULT CONSTRUCTOR ----------*/
BitcoinExchange::BitcoinExchange( void ) { }
/*-----------------------------------------*/

/*----------- INIT CONSTRUCTOR ------------*/
/*-----------------------------------------*/

/*----------- COPY CONSTRUCTOR ------------*/
BitcoinExchange::BitcoinExchange( BitcoinExchange const &src ) { *this = src; }
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
BitcoinExchange::~BitcoinExchange( void ) { }
/*-----------------------------------------*/
/*#########################################*/





/*########### OPERATORS OVERLOAD ##########*/
/*-------------- ASSIGNEMENT --------------*/
BitcoinExchange	&BitcoinExchange::operator=( BitcoinExchange const &rhs ) {

	(void) rhs;

	return (*this);
}
/*-----------------------------------------*/
/*#########################################*/
