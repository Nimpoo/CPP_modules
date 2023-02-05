/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:40:06 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/05 17:01:10 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ? Comment faire référence à l'instance courante de la class ?
// ? On utilise le mot clé 'this'

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

# include <iostream>

class	Sample {

public:

	int		foo;

	Sample( void );
	~Sample( void );

	void	bar( void )	;

};

#endif
