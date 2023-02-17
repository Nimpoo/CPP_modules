/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 12:53:20 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/17 12:07:54 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Student2.hpp"

int	main()
{
// * Le CONSTRUCTEUR de chaque case est appelé
// ? Un tableau d'INSTANCE 'stud' créé à partir de la CLASS 'Student' est ALLOUÉ avec 'new'
// ! ON ALLOUE TOUJOURS ET OBLIGATOIREMENT AVEC SON CONSTRUCTEUR
	Student *stud = new Student[42];

	// Student	*stud = (Student *) malloc(sizeof(Student) * 42);

	Student::number = 0;

// * Le DESTRUCTEUR de chaque case est appelé
// ? Le tableau à été DÉSALLOUÉ
// ! Le DESTRUCTEUR ne peut être appelé seulement de cette manière si on alloue DYNAMIQUEMENT
	delete [] stud;

	// free(stud);


	return (0);
}

// ! IMPORTANT: s'il on malloc() et free(), respectivement ni le CONSTRUCTEUR ni le DESTRUCTEUR ne seront appelés
// ! S'il on malloc() puis 'delete' ---> segfault car l'INSTANCE n'a pas été alloué correctement (unkown address)
// ! S'il on 'new' puis free() ---> mémoire qui n'a pas été alloué est désalloué
