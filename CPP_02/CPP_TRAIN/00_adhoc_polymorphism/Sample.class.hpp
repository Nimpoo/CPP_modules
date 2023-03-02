/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 14:29:40 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/01 18:27:51 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_CLAS_HPP
# define SAMPLE_CLAS_HPP

# include	<iostream>

// ? Polymorphism adhoc aussi appelé "SURCHARGE DE FONCTION"
// * Permet d'écrire deux fonction avec éxactement le même NOM
// * mais avec des paramètres DIFFÉRENTS

class Sample {

public:

	Sample( void );
	~Sample( void );

	void	bar( char const c ) const;
	void	bar( int const n ) const;
	void	bar( float const z ) const;
	void	bar( Sample const &i ) const;

};

#endif
