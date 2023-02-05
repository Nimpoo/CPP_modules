/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample_1.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:40:06 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/05 17:14:17 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ? Les constructeurs peuvent avoir des paramètres, il faudra initialiser les attribues qui vont y correspondre

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

# include <iostream>

class	Sample_1 {

public:

	char	a1;
	int		a2;
	float	a3;

	Sample_1( char p1, int p2, float p3 );
	~Sample_1( void );

	void	bar( void )	;

};

#endif
