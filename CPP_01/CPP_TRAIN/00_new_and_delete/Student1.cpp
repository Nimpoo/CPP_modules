/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student1.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 11:34:02 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/15 13:38:01 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Student1.hpp"

Student::Student( std::string login ) : _login(login) {

	std::cout << "Student " << _login << " is born" << std::endl;

	return ;
}

Student::~Student( void ) {

	std::cout << "Student " << _login << " died" << std::endl;

	return ;
}
