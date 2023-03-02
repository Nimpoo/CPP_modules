/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sihemayoub <sihemayoub@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 14:48:29 by sihemayoub        #+#    #+#             */
/*   Updated: 2023/03/01 15:11:54 by sihemayoub       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"

int main(void)
{
	Sample	sample;

// * Les fonction SURCHARGÉES sont toutes appelées

	sample.bar('A');
	sample.bar(42);
	sample.bar(3.14f);
	sample.bar(sample);

	return (0);
}
