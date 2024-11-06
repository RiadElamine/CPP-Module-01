/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 08:56:59 by relamine          #+#    #+#             */
/*   Updated: 2024/11/03 15:26:49 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *z;

	z = newZombie("riad");
	if (!z)
	{
		std::cout << "Memory allocation failed\n";
		return (1);
	}

	z->announce();

	randomChump("elamine");

	delete z;
	return (0);
}