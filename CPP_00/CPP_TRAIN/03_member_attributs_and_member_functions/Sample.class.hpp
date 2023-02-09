/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:40:06 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/05 13:14:27 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ! ATTRIBUT MEMBRE ≠ FONCTION MEMBRE

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

# include <iostream>

class	Sample {

public:

// ? Attribut membre = variable dans une classe que l'on peut utiliser à partir d'une instance
// ? Cette attribut existera et sera différente pour chaque instance de notre class

	int		foo;

	Sample( void );
	~Sample( void );

// ? Fonction membre = fonction dans une classe que l'on peut utiliser à partir d'une instance
// ? Son implémentation pourrait être comparable aux structures en C, mais en beaucoup moins compliqué
// ? Son implémentation est pareil que celle des Dest/Cons

	void	bar( void )	;

};

#endif
