/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 08:56:59 by relamine          #+#    #+#             */
/*   Updated: 2024/11/03 16:39:24 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "The memory address of str: "
	<< &str << std::endl;
	std::cout << "The memory address held by stringPTR: "
	<< stringPTR << std::endl;
	std::cout << "The memory address held by stringREF: "
	<< &stringREF << std::endl;

	std::cout << "The value of str: "
	<< str << std::endl;
	std::cout << "The value pointed to by stringPTR: "
	<< *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF: "
	<< str << std::endl;
}