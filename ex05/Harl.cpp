/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 22:12:56 by relamine          #+#    #+#             */
/*   Updated: 2024/11/09 00:27:42 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int	whois( std::string level )
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		switch (levels[i].compare(level))
		{
			case 0 :
				return (i);
		}
	}
	return (-1);
}

void Harl::complain( std::string level )
{
	void (Harl::* levels[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	switch (whois(level))
	{
		case 0:
			(this->*levels[0])();
			break;
		case 1:
			(this->*levels[1])();
			break;
		case 2:
			(this->*levels[2])();
			break;
		case 3:
			(this->*levels[3])();
			break;
	}
}
