/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 08:56:59 by relamine          #+#    #+#             */
/*   Updated: 2024/11/03 15:35:06 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *z = zombieHorde(5, "relamine");
	if (!z)
		return (1);

	for (int i = 0; i < 5 ; i++)
		z[i].announce();
	
	delete[] z;

	return (0);
}