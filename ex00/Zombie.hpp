/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 09:56:13 by relamine          #+#    #+#             */
/*   Updated: 2024/11/03 13:07:52 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(std::string name);
		~Zombie();
		void announce( void );
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );