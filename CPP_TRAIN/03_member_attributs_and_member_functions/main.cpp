/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 11:31:50 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/06 15:27:20 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

int	main(void)
{
// * On instencie la variable "instance"
	Sample	instance;

// * On utilise l'attribut 'foo' de la variable 'instance' (si pointeur, cela aurait été une flèche ->)
	instance.foo = 42;

	std::cout << "instance foo: " << instance.foo << std::endl;

// * On fait la même chose ici avec notre fonction bar
	instance.bar();

	return (0);

}
