/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample_2.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:40:06 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/05 17:14:17 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPL_2_CLASS_HPP
# define SAMPL_2_CLASS_HPP

# include <iostream>

// * Sample_2 est exactement le même que Sample_1, seulement l'initialisation des
// * attribus seront différent dans Sample_2.class.cpp

class	Sample_2 {

public:

	char	a1;
	int		a2;
	float	a3;

	Sample_2( char p1, int p2, float p3 );
	~Sample_2( void );

	void	bar( void )	;

};

#endif
