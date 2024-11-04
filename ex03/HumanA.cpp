/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 18:58:54 by relamine          #+#    #+#             */
/*   Updated: 2024/11/04 09:00:26 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack()
{
	std::cout << name << " attacks with their " << w.getType() << std::endl;
};

HumanA::HumanA(std::string name, Weapon &w) :  w(w), name(name)
{
};