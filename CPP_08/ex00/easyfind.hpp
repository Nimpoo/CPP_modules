/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 22:30:51 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/22 13:21:43 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

class	NotOccurenceException : public std::exception {

public:

	const char	*what() const throw() { return ( "\e[1;37mThe value is not found 🤒\e[0m" ); };

};

#endif
