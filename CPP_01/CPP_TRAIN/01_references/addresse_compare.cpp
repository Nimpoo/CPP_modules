/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addresse_compare.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:01:05 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/16 18:56:29 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


// * Teste de valeur d'addresse entre un pointeur, une référence et ce qu'ils pointent
int	main()
{
	int	num = 5;

	int	*ptr = &num;

	int	&ref = num;

	std::cout << "ptr: " << *ptr << ", ref:" << ref << " and num: " << num << std::endl;
	std::cout << "adress_ptr: " << ptr << ", adree_ref: " << &ref << " and adress_num : " << &num << std::endl; 

	return (0);
}
