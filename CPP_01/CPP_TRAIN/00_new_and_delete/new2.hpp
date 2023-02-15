/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new2.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:51:55 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/15 13:27:33 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Student {

public:

	Student( void );
	~Student( void );

	static int		number;

private:

	std::string		_login;

};
