/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:08:34 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/08 14:33:28 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ? C'est quoi un accesseur ???

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

# include <iostream>

class Sample {

public:

	Sample( void );
	~Sample( void );

// * Le 'geter' permet de récupérer un attribut PRIVATE pour pouvoir l'utiliser/afficher
// * à l'extérieur de la class
	int		getFoo( void ) const;

// * Le 'seter' permet de set un attribut PRIVATE
	void	setFoo( int v );

private:

	int		_foo;

};

#endif
