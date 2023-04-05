/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 18:02:46 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/04/05 13:47:17 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main(void)
{
    IMateriaSource    *src = new MateriaSource;
    src->learnMateria(new Ice);
    src->learnMateria(new Cure);
    ICharacter    *me = new Character("me");
    AMateria    *tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter    *bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);

    std::cout << "---equip unexisting Materia---" << std::endl;
    tmp = src->createMateria("fire");
    me->equip(tmp);
    me->use(2, *bob);

    std::cout << "---clear inventory---" << std::endl;
    me->unequip(0);
    me->unequip(1);
    me->unequip(2);
    me->unequip(3);
    me->use(0, *bob);

    std::cout << "---add to full inventory---" << std::endl;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);

    std::cout << "---use unexisting Materia---" << std::endl;
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(3, *bob);
    me->use(4, *bob);

    std::cout << "---unequip unexisting Materia---" << std::endl;
    me->unequip(42);

    delete tmp;
    delete bob;
    delete me;
    delete src;
    return (0);
}
