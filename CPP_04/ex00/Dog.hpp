/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:11:01 by mayoub            #+#    #+#             */
/*   Updated: 2023/03/10 18:09:36 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include	"Animal.hpp"

class Dog : public Animal {

public:

/*------------- CONST / DEST --------------*/
	Dog( void );
	Dog( Dog const &src );
	~Dog( void );

/*----------- OPERATOR OVERLOAD -----------*/
	Dog	&operator=( Dog const &rhs );

protected:

	std::string	type;

};

#endif
