/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   references.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 09:28:32 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/16 18:56:51 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// ? Une RÉRÉRENCE, """""""""""c'est comme un pointeur constant"""""""""""

int	main()
{
	int	nbrOfBalls = 42;

// * int pointeur sur 'nbrOfBalls'
	int	*ballsPTR = &nbrOfBalls;

// ? La RÉFÉRENCE s'écrit avec l'esperluette '&' à la place du pointeur '*'. C'est un type RÉFÉRENCE SUR INT
// ? On lui affecte directement la variable ET NON SON ADRESSE
// ! La RÉFÉRENCE va se mettre à pointer sur la variable
// ! De plus, elle sera toujours constante. il faut directement la définir NI être NULL
	int	&ballsREF = nbrOfBalls;

	std::cout << ballsREF << nbrOfBalls << *ballsPTR;

	std::cout << "nbrOfBalls:	" << nbrOfBalls << std::endl;
// * Déréférencement du pointeur pour afficher sur ce quoi il pointe
	std::cout << "*ballsPTR:	" << *ballsPTR << std::endl;
	std::cout << "ballsREF:	" << ballsREF << std::endl;



// * La valeur de 'nbrOfBalls' a été modifié avec le POINTEUR
	*ballsPTR = 21;
	std::cout << "*ballsPTR ---> nbrOfBalls:	" << nbrOfBalls << std::endl;



// * La valeur de 'nbrOfBalls' a été modifié avec la RÉFÉRANCE
	ballsREF = 63;
	std::cout << "ballsREF ---> nbrOfBalls:	" << nbrOfBalls << std::endl;

	return (0);
}

// ! Une référence est constante car elle ne peut être nulle. Son addresse sera exactement la même
// ! que la variable qu'elle pointe.
// ! UNE RÉFÉRENCE EST AUSSI UN POINTEUR
