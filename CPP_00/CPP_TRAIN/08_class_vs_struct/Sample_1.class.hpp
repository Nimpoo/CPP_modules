/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample_1.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 10:44:03 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/08 12:02:28 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ? Quelle est la différence entre une class et une structure ?
// * Elles ont exactement la même synthax, et fonctionnent rigoureusement de la même façon en C++

#ifndef SAMPLE_1_CLASS_HPP
# define SAMPLE_1_CLASS_HPP

# include <iostream>

// * Ici, une structure
// ? À aucun moment il n'y a de scope 'public' ou 'privé'

// * Par défaut, il y a une scope 'public' dans les structures

struct	Sample_1 {

	int		foo;

	Sample_1( void );
	~Sample_1( void );

	void	Bar( void ) const;

};

#endif
