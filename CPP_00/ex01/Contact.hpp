/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:30:34 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/09 23:35:32 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact {

public:

	Contact( void );
	~Contact( void );

	std::string	getName( void );
	void		setName( std::string name_buffer );
	void		setFirstName( std::string fisrtName_buffer );
	void		setNickname( std::string nickname_buffer );
	void		setDarkestSecret( std::string darkestSecret_buffer );
	void		setPhoneNumber( int phoneNumber_buffer );
	void		setId( int id_buffer );
	

private:

	int 		_id;
	
	std::string	_name;
	std::string	_firstName;
	std::string	_nickname;
	std::string	_darkestSecret;
	int			_phoneNumber;

};

#endif
