/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:35:24 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/16 11:48:33 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Student1.hpp"

// ? À présent, les mot clés 'new' et 'delete' remplaceront 'malloc()' et 'free()' pour simplifier
// ? Ils sont beaucoup plus utilse en C++ pour manipuler les INSTANCES/OBJETS

int	main()
{
// * On attribut l'INSTANCE 'bob' de la CLASS 'Student', on exécute la fonction avec "Bob"
// ? Le CONSTRUCTEUR est appelé
	Student	bob = Student("Bob");

// * On attribut l'INSTANCE 'bob' de la CLASS 'Student', on exécute la fonction avec "Bob"
// ! SAUF que celui ci est un pointeur, et on exécute avec le mot clé 'new'
// ! SI malloc() aurait été appelé, le CONSTRUCTEUR de "Jim" n'aurait pas été appelé
// ! 'jim' est ALLOUÉ
	Student	*jim = new Student("Jim");

// ! En utilisant 'delete', cela appellera le DESTRUCTEUR de "Jim", si 'free()' aurait été utilisé, il n'aurait pas été appelé
// ! 'jim' est DÉSALLOUÉ/LIBÉRÉ
// ! Le DESTRUCTEUR ne peut être appelé seulement de cette manière si on alloue DYNAMIQUEMENT
	delete jim;

//? Le DESTRUCTEUR de "Bob" est appelé
	return (0);
}

// ! 'new' alloue de la mémoire et renvoie un pointeur vers l'adresse de l'espace alloué dans la HEAP
// ! C'est pour ça que la variable est un poiteur.
// ? Si on ne 'delete' pas, cela créé des leaks
