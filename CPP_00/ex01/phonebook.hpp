/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:31:34 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/12 23:37:18 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include	<iostream>
# include	<iomanip>

# include	"Contact.hpp"

# define	MAX_CONTACTS 8

class PhoneBook {

public:

/*------------- CONST / DEST --------------*/
	PhoneBook( void );
	~PhoneBook( void );

/*------------ MAIN FUNCTIONS -------------*/
	void	addContact( void );
	void	searchContact( void );

private:

/*----------- ANNEXES FUNCTIONS -----------*/
	void	displayContact( std::string info );
	void	removingOldestContact( void );
	void	infoContact( std::string buffer );

/*------------------ TAB ------------------*/
	Contact	_tabContact[8]; // * Créer un TABLEAU D'OBJETS de la class CONTACT
	int		_index;

};

/*----------------- UTILS -----------------*/
void		eofProtect( void );
std::string	toupperBuffer( std::string buffer );
bool		isNumber(const std::string& s);

#endif
