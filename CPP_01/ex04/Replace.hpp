/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 10:43:39 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/23 17:31:26 by mayoub           ###   ########.fr       */
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

	std::ifstream	const &getInfile( void ) const;	

	void			replaceFunction( Replace &sed );

private:

/*--------------- ARGUMENTS ----------------*/
	std::string		_file;
	std::string		_s1;
	std::string		_s2;

	std::string		_fileReplace;

	std::ifstream	_infile;

};

#endif
