/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Student2.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:50:52 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/15 13:37:56 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Student2.hpp"

int	Student::number = 0;

Student::Student( void ) : _login("[DEFAULT]") {

	std::cout << "Student " << Student::number << " " << _login << " is born" << std::endl;

	Student::number++;

	return ;
}

Student::~Student( void ) {

	std::cout << "Student " << Student::number << " " << _login << " died" << std::endl;

	Student::number++;

	return ;
}
