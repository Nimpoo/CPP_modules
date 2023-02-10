/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:34:28 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/10 09:39:48 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact( void ) {
	return ;
}

Contact::~Contact( void ) {
	return ;
}

std::string	Contact::getName( void ) {
	return this->_name;
}

void	Contact::setName( std::string name_buffer ) {

	this->_name = name_buffer;

	std::cout << "_name = " << _name << std::endl;

	return ;
}

void	Contact::setFirstName( std::string firstName_buffer ) {

	this->_firstName = firstName_buffer;

	std::cout << "_firstName = " << _firstName << std::endl;

	return ;
}

void	Contact::setNickname( std::string nickname_buffer ) {

	this->_nickname = nickname_buffer;

	std::cout << "_nickname = " << _nickname << std::endl;

	return ;
}

void	Contact::setDarkestSecret( std::string darkestSecret_buffer ) {

	this->_darkestSecret = darkestSecret_buffer;

	std::cout << "_darkestSecret = " << _darkestSecret << std::endl;

	return ;
}

void	Contact::setPhoneNumber( int phoneNumber_buffer ) {

	this->_phoneNumber = phoneNumber_buffer;

	std::cout << "_phoneNumber = " << _phoneNumber << std::endl;

	return ;
}

void	Contact::setId( int id_buffer ) {

	this->_id = id_buffer + 1;

	std::cout << "_id = " << _id << std::endl;

	return;
}
