/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 01:06:01 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/09 00:55:06 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	Gentil("Mordecai");
	ScavTrap	Mechant("Saturn");
	ScavTrap	Default;

	Gentil.attack( "Saturn" );
	std::cout << "[MAIN TEST] Damage stat [ " << Gentil.getAttackDamage() << " ]" << std::endl << std::endl;

	std::cout << "[MAIN TEST] Hit Points stat BEFORE taking damage [ " << Gentil.getHitPoints() << " ]" << std::endl;
	Gentil.takeDamage( 5 );
	std::cout << "[MAIN TEST] Hit Points stat AFTER taking damage [ " << Gentil.getHitPoints() << " ]" << std::endl << std::endl;

	std::cout << "[MAIN TEST] Energy Points stat BEFORE repared [ " << Gentil.getEnergyPoints() << " ]" << std::endl;
	Gentil.beRepaired( 2 );
	std::cout << "[MAIN TEST] Hit Points stat AFTER repared [ " << Gentil.getHitPoints() << " ]" << std::endl;
	std::cout << "[MAIN TEST] Energy Points stat [ " << Gentil.getEnergyPoints() << " ]" << std::endl << std::endl;

	Gentil.guardGate();
	std::cout << std::endl << std::endl;


	Mechant.attack( "Mordecai" );
	std::cout << "[MAIN TEST] Damage stat [ " << Mechant.getAttackDamage() << " ]" << std::endl << std::endl;

	std::cout << "[MAIN TEST] Hit Points stat BEFORE taking damage [ " << Default.getHitPoints() << " ]" << std::endl;
	Mechant.takeDamage( 3 );
	std::cout << "[MAIN TEST] Hit Points stat AFTER taking damage [ " << Mechant.getHitPoints() << " ]" << std::endl << std::endl;

	std::cout << "[MAIN TEST] Energy Points stat BEFORE repared [ " << Mechant.getEnergyPoints() << " ]" << std::endl;
	Mechant.beRepaired( 7 );
	std::cout << "[MAIN TEST] Energy Points stat AFTER repared [ " << Mechant.getEnergyPoints() << " ]" << std::endl;
	std::cout << "[MAIN TEST] Hit Points stat [ " << Mechant.getHitPoints() << " ]" << std::endl << std::endl;

	Mechant.guardGate();
	std::cout << std::endl << std::endl;


	Default.attack( "Random" );
	std::cout << "[MAIN TEST] Damage stat [ " << Default.getAttackDamage() << " ]" << std::endl << std::endl;

	std::cout << "[MAIN TEST] Hit Points stat BEFORE taking damage [ " << Default.getHitPoints() << " ]" << std::endl;
	Default.takeDamage( 4 );
	std::cout << "[MAIN TEST] Hit Points stat AFTER taking damage [ " << Default.getHitPoints() << " ]" << std::endl << std::endl;

	std::cout << "[MAIN TEST] Energy Points stat BEFORE repared [ " << Default.getEnergyPoints() << " ]" << std::endl;
	Default.beRepaired( 9 );
	std::cout << "[MAIN TEST] Energy Points stat AFTER repared [ " << Default.getEnergyPoints() << " ]" << std::endl;
	std::cout << "[MAIN TEST] Hit Points stat [ " << Default.getHitPoints() << " ]" << std::endl << std::endl;

	Default.guardGate();
	std::cout << std::endl << std::endl;

	return (0);
}
