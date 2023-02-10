/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:31:34 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/09 22:54:07 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>

# include "Contact.hpp"

class PhoneBook {

public:

	PhoneBook( void );
	~PhoneBook( void );

	void	addContact( void );
	void	searchContact( void );

private:

// * Créer un TABLEAU D'OBJETS de la class CONTACT
	Contact _tabContact[8];
	int		_index;
	
};

void	eofProtect( void );

#endif
