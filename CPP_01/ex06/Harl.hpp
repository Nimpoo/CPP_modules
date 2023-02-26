/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 15:15:07 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/26 15:15:08 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include	<iostream>

class Harl {

public:

/*------------- CONST / DEST --------------*/
	Harl( void );
	~Harl( void );

	void	complain( std::string level );

private:

	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );

};

#endif
