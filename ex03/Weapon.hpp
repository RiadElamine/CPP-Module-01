/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:43:58 by relamine          #+#    #+#             */
/*   Updated: 2024/11/03 18:24:44 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>


class Weapon
{
	private:
		std::string type;
	public:
		Weapon(std::string type);
		std::string const & getType();
		void setType(std::string type);
};