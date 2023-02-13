/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:34:28 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/13 12:35:39 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/*------------- CONSTRUCTOR ---------------*/
Contact::Contact( void ) {
	return ;
}
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
Contact::~Contact( void ) {
	return ;
}
/*-----------------------------------------*/


/*############### ACCESSORS ###############*/

/*---------------- GETERS -----------------*/
std::string	Contact::getName( void )
{
	return (this->_name);
}

std::string	Contact::getFirstName( void )
{
	return (this->_firstName);
}

std::string	Contact::getNickname( void )
{
	return (this->_nickname);
}

std::string	Contact::getDarkestSecret( void )
{
	return (this->_darkestSecret);
}

std::string	Contact::getPhoneNumber( void )
{
	return (this->_phoneNumber);
}

int			Contact::getId( void )
{
	return (this->_id);
}
/*-----------------------------------------*/

/*---------------- SETERS -----------------*/
void	Contact::setName( std::string name_buffer ) {

	this->_name = name_buffer;

	return ;
}

void	Contact::setFirstName( std::string firstName_buffer ) {

	this->_firstName = firstName_buffer;

	return ;
}

void	Contact::setNickname( std::string nickname_buffer ) {

	this->_nickname = nickname_buffer;

	return ;
}

void	Contact::setDarkestSecret( std::string darkestSecret_buffer ) {

	this->_darkestSecret = darkestSecret_buffer;

	return ;
}

void	Contact::setPhoneNumber( std::string phoneNumber_buffer ) {

	this->_phoneNumber = phoneNumber_buffer;

	return ;
}

void	Contact::setId( int id_buffer ) {

	this->_id = id_buffer + 1;

	return ;
}
/*-----------------------------------------*/

/*#########################################*/
