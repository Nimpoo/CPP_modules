/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:43:39 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/25 17:42:12 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include	<iostream>
# include	<fstream>

class Replace {

public:

/*------------- CONST / DEST --------------*/
	Replace( std::string file, std::string s1, std::string s2 );
	~Replace( void );

	void	replaceFunction( void ) const;

private:

/*--------------- ARGUMENTS ----------------*/
	std::string		_file;
	std::string		_s1;
	std::string		_s2;

	std::string		_fileReplace;

};

#endif
