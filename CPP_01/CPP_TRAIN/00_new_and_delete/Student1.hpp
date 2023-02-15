/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student1.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:24:01 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/15 13:36:25 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Student {

public:

	Student( std::string login );
	~Student( void );

private:

	std::string	_login;

};
