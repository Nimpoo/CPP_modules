/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 16:50:34 by mayoub            #+#    #+#             */
/*   Updated: 2023/03/11 15:10:53 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	std::cout << "\033[1m------------------- ANIMAL CLASS -------------------\033[0m" << std::endl << std::endl;
	const Animal*		Default = new Animal();
	const Animal*		Shiba_Inu = new Dog();
	const Animal*		Savannah = new Cat();

	std::cout << std::endl << std::endl;
	std::cout << "the \033[1m'type'\033[0m of \033[1;32mDefault is [ " << Default->getType() << " ]\033[0m" << std::endl;
	std::cout << "the \033[1m'type'\033[0m of \033[1;35mShiba_Inu is [ " << Shiba_Inu->getType() << " ]\033[0m" << std::endl;
	std::cout << "the \033[1m'type'\033[0m of \033[1;36mSavannah is [ " << Savannah->getType() << " ]\033[0m" << std::endl;
	std::cout << std::endl;

	std::cout << "The sound of \033[1;32mDefault\033[0m : ", Default->makeSound(), std::cout << std::endl;
	std::cout << "The sound of \033[1;35mShiba_Inu\033[0m : ", Shiba_Inu->makeSound(), std::cout << std::endl;
	std::cout << "The sound of \033[1;36mSavannah\033[0m : ", Savannah->makeSound(), std::cout << std::endl;
	std::cout << std::endl;

	delete Default;
	delete Shiba_Inu;
	delete Savannah;

	std::cout << std::endl;
	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl;
	std::cout << std::endl << std::endl;


	std::cout << "\033[1m---------------- WRONGANIMAL CLASS -----------------\033[0m" << std::endl << std::endl;
	const WrongAnimal*	WrongDefault = new WrongAnimal();
	const WrongAnimal*	Wrong_Floppa = new WrongCat();

	std::cout << std::endl << std::endl;
	std::cout << "the 'type' of \033[1;32mWrongDefault is [ " << WrongDefault->getType() << " ]\033[0m" << std::endl;
	std::cout << "the 'type' of \033[1;33mWrong_Floppa is [ " << Wrong_Floppa->getType() << " ]\033[0m" << std::endl;
	std::cout << std::endl;

	std::cout << "The sound of \033[1;32mWrongDefault\033[0m : ", WrongDefault->makeSound(), std::cout << std::endl;
	std::cout << "The sound of \033[1;33mWrong_Floppa\033[0m : ", Wrong_Floppa->makeSound(), std::cout << std::endl;
	std::cout << std::endl;

	delete WrongDefault;
	delete Wrong_Floppa;

	std::cout << std::endl;
	std::cout << "\033[1m----------------------------------------------------\033[0m" << std::endl;
	std::cout << std::endl;

	return (0);
}
