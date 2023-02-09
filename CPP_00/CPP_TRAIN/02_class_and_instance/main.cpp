/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 11:31:50 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/05 11:48:13 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

// ? Comment créer une instance ?
// * Ça revient à une simple déclaration de variable avec le type 'Sample'

int	main(void)
{
	Sample	instance;

// ! Avec cette simple déclaration, la variable "instance" sera une INSTANCE de type 'Sample'
// ! La variable "instance" est une INSTANCE de la class 'Sample'
// * La CLASS (Sample), c'est la partie STATIQUE, le modèle
// * La variable "instance", c'est la partie DYNAMIQUE

// ? Cette ligne (L.20) aura 2 effets :
// * 1) Créer une variable de type 'Sample' (une INSTANCE de CLASS)
// * 2) Le code qui était dans le Constructeur va être exécuté

	return (0);

// * Lorsque la fonction 'main()' sera terminée, toutes les variables locales seront détruites
// * Dont la variable "instance" de type 'Sample'
// ! C'est à ce moment là que le code dans le Destructeur sera exécuté

}

// ! À RETENIR : comprendre les notion de CLASS, d'INSTANCE, de DÉCLARATION et de DÉFINITION
