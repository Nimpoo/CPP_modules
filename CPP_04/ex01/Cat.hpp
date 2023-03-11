/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 02:16:03 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/11 02:16:05 by sihemayoub       ###   ########.fr       */
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
	virtual ~Cat( void );

/*----------- OPERATOR OVERLOAD -----------*/
	Cat	&operator=( Cat const &rhs );

/*-------------- ACCESSORS ----------------*/
	std::string virtual	getType( void ) const;

	virtual void	makeSound( void ) const;

protected:

	std::string	type;

};

#endif
