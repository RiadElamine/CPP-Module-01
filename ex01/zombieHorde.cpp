/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 14:38:31 by relamine          #+#    #+#             */
/*   Updated: 2024/12/16 13:53:53 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
	Zombie *a;

	if (N <= 0)
	{
		std::cout << "Memory allocation failed\n";
		return (NULL);
	}
	a = new Zombie[N];
	if (!a)
	{
		std::cout << "Memory allocation failed\n";
		return (NULL);
	}

	for (int i = 0; i < N; i++)
	{
		a[i].setZombie(name);
	}

	return (a);
};
