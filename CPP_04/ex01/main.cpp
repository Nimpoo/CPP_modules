/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 02:16:22 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/14 18:53:32 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include "Brain.hpp"

#define NBR_ANIMALS	10

int	main(void)
{
	Animal	*tab[NBR_ANIMALS];

	std::cout << "\033[1m-------------------- TAB ANIMAL --------------------\033[0m" << std::endl << std::endl;

	for (int i = 0; i < NBR_ANIMALS; i++) {
		if (i % 2 == 0)
			tab[i] = new Cat(), std::cout << std::endl;
		else
			tab[i] = new Dog(), std::cout << std::endl;
	}

	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl << std::endl;


	std::cout << "\033[1m------------------ DEEP COPY DOG 🐶 ----------------\033[0m" << std::endl << std::endl;

	Dog	Dobberman;
	std::cout << std::endl;

	Dog	Rottweiler = Dobberman;
	std::cout << std::endl;

	std::cout << "Idea n°[ 42 ] of \033[1;35mDobberman\033[0m :	\033[1m\" " << Dobberman.getBrain()->getIdea(42) << "\033[0m \"" << std::endl;
	std::cout << "Idea n°[ 42 ] of \033[1;36mRottweiler\033[0m :	\033[1m\" " << Rottweiler.getBrain()->getIdea(42) << "\033[0m \"" << std::endl << std::endl;

	std::cout << "\033[1;36m???????????????????????????????????????????????????????????????????????????????????\033[0m" << std::endl;
	std::cout << "\033[1;36m? \033[mModify the value of \033[1mIdea n°[ 42 ]\033[0m of \033[1;35mDobberman\033[0m to \033[1m\"I want to eat some CROCKETS\"\033[0m\033[1;36m ?\033[0m" << std::endl;
	std::cout << "\033[1;36m???????????????????????????????????????????????????????????????????????????????????\033[0m" << std::endl << std::endl;

	Dobberman.getBrain()->setIdea("I want to eat some CROCKETS", 42);

	std::cout << "Idea n°[ 42 ] of \033[1;35mDobberman\033[0m :	\033[1m\" " << Dobberman.getBrain()->getIdea(42) << "\033[0m \"" << std::endl;
	std::cout << "Idea n°[ 42 ] of \033[1;36mRottweiler\033[0m :	\033[1m\" " << Rottweiler.getBrain()->getIdea(42) << "\033[0m \"" << std::endl;

	std::cout << std::endl << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl << std::endl;



	std::cout << "\033[1m------------------ DEEP COPY CAT 😺 ----------------\033[0m" << std::endl << std::endl;

	Cat	Bengal;
	std::cout << std::endl;

	Cat	Siamois = Bengal;
	std::cout << std::endl;

	std::cout << "Idea n°[ 42 ] of \033[1;33mBengal\033[0m :	\033[1m\" " << Bengal.getBrain()->getIdea(42) << "\033[0m \"" << std::endl;
	std::cout << "Idea n°[ 42 ] of \033[1;32mSiamois\033[0m :	\033[1m\" " << Siamois.getBrain()->getIdea(42) << "\033[0m \"" << std::endl << std::endl;

	std::cout << "\033[1;36m????????????????????????????????????????????????????????????????????????????????\033[0m" << std::endl;
	std::cout << "\033[1;36m? \033[mModify the value of \033[1mIdea n°[ 42 ]\033[0m of \033[1;33mBengal\033[0m to \033[1m\"I want to eat some CROCKETS\"\033[0m\033[1;36m ?\033[0m" << std::endl;
	std::cout << "\033[1;36m????????????????????????????????????????????????????????????????????????????????\033[0m" << std::endl << std::endl;

	Bengal.getBrain()->setIdea("I want to eat some CROCKETS", 42);

	std::cout << "Idea n°[ 42 ] of \033[1;33mBengal\033[0m :	\033[1m\" " << Bengal.getBrain()->getIdea(42) << "\033[0m \"" << std::endl;
	std::cout << "Idea n°[ 42 ] of \033[1;32mSiamois\033[0m :	\033[1m\" " << Siamois.getBrain()->getIdea(42) << "\033[0m \"" << std::endl;

	std::cout << std::endl << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl << std::endl;


	std::cout << "\033[1m----------- DELETE ELEMENTS OF TAB ANIMAL ----------\033[0m" << std::endl << std::endl;

	for (int i = 0; i < NBR_ANIMALS; i++)
		delete tab[i], std::cout << std::endl;

	std::cout << std::endl << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl << std::endl;


	std::cout << "\033[1m----------------------- LEAKS ----------------------\033[0m" << std::endl << std::endl;

	system("leaks Je_ne_veux_pas_brûler_le_monde");

	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl << std::endl << std::endl;


	std::cout << "\033[1m----------------- DEFAULT DESTRUCTOR ---------------\033[0m" << std::endl << std::endl;

	return (0);
}
