/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:09:51 by mayoub            #+#    #+#             */
/*   Updated: 2023/03/09 16:10:54 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include	"Animal.hpp"

class Cat : public Animal {

public:

/*------------- CONST / DEST --------------*/
	Cat( void );
	Cat( Cat const &src );
	~Cat( void );

/*----------- OPERATOR OVERLOAD -----------*/
	Cat	&operator=( Cat const &rhs );

protected:

	std::string	type;

};

/*--------------- STREAM OUT --------------*/
std::ostream	operator<<( std::ostream &o, Cat const &i );

#endif
