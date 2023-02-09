/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:08:34 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/09 10:53:41 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ? Il existe des attributs et des fonctions NON MEMBRES

#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP

# include <iostream>

class Sample {

// * Il suffit de rajouter le mot clé 'static' pour rendre un attribut/fonction NON MEMBRE
// * L'attribut/fonction existera même aprè la destruction de la class, jusqu'aà la fin du programme

public:

	Sample( void );
	~Sample( void );

	static int		getNbInst( void );

private:

	static int		_nbInst;

};

#endif
