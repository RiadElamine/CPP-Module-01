/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 19:03:55 by relamine          #+#    #+#             */
/*   Updated: 2024/11/04 14:24:56 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack()
{
	if (w == NULL)
		std::cout << name << " has no weapon to attack with" << std::endl;
	else
		std::cout << name << " attacks with their " << w->getType() << std::endl;
};

HumanB::HumanB(std::string name) : name(name)
{
	this->w = NULL;
};

void HumanB::setWeapon(Weapon &w)
{
	this->w = &w;
}