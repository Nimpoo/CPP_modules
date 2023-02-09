/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample_2.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 10:44:03 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/08 12:03:01 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_2_CLASS_HPP
# define SAMPLE_2_CLASS_HPP

# include <iostream>

// * Ici une class
// ? À aucun moment il n'y a de scope 'public' ou 'privé'

// * Par défaut, il y a une scope 'private' dans une class

class	Sample_2 {

	int		foo;

	Sample_2( void );
	~Sample_2( void );

	void	Bar( void ) const;

};

#endif
