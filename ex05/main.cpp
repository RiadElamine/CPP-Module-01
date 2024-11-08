/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:59:30 by relamine          #+#    #+#             */
/*   Updated: 2024/11/08 22:43:33 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	
	if (argc != 2)
		return (1);

	Harl a;

	std::string s = argv[1];
	a.complain(s);

	return (0);
}