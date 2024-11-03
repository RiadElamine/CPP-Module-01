/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 14:38:31 by relamine          #+#    #+#             */
/*   Updated: 2024/11/03 15:33:49 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>
Zombie* zombieHorde( int N, std::string name)
{
	Zombie *a;

	a = new Zombie[N];
	if (!a || N <= 0)
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