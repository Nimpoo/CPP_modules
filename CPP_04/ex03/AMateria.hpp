/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 18:34:25 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/01 18:37:09 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class AMateria
{
public:

	AMateria(std::string const & type);
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;

protected:

	

};

#endif
