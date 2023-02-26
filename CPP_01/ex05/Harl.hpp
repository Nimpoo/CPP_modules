/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:07:10 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/26 13:10:19 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include	<iostream>

class Harl {

public:

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
