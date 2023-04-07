/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 23:23:50 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/07 08:17:32 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Form {

public:

/*------------- CONST / DEST --------------*/
	Form( void );
	Form( std::string const &name );
	Form( Form const &src );
	virtual ~Form( void );

private:

	std::string const	_name;
	int const			_gradeSign;
	int const			_gradeExec;
	bool				_signed;

};

#endif
