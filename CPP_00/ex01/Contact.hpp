/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:30:34 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/16 19:21:59 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include	<iostream>

class Contact {

public:

/*------------- CONST / DEST --------------*/
	Contact( void );
	~Contact( void );

/*---------------- GETERS -----------------*/
	std::string	getName( void ) const;
	std::string	getFirstName( void ) const;
	std::string	getNickname( void ) const;
	std::string	getDarkestSecret( void ) const;
	std::string	getPhoneNumber( void ) const;
	int			getId( void ) const;

/*---------------- SETERS -----------------*/
	void		setName( std::string name_buffer );
	void		setFirstName( std::string fisrtName_buffer );
	void		setNickname( std::string nickname_buffer );
	void		setDarkestSecret( std::string darkestSecret_buffer );
	void		setPhoneNumber( std::string phoneNumber_buffer );
	void		setId( int id_buffer );

private:

/*------------- CONTACTS INFO -------------*/
	int 		_id;

	std::string	_name;
	std::string	_firstName;
	std::string	_nickname;
	std::string	_darkestSecret;
	std::string	_phoneNumber;

};

#endif
