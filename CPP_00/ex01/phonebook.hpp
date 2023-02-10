/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:31:34 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/10 14:33:50 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include	<iostream>
# include	<iomanip>

# include	"Contact.hpp"

# define	NBR_CONTACTS 8

class PhoneBook {

public:

	PhoneBook( void );
	~PhoneBook( void );

	void	addContact( void );
	void	searchContact( void );

private:

	Contact _tabContact[8]; // * Créer un TABLEAU D'OBJETS de la class CONTACT
	int		_index;

	void	displayContact( void );
	void	removingOldestContact( void );

};

void	eofProtect( void );

#endif
