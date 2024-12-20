/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:59:30 by relamine          #+#    #+#             */
/*   Updated: 2024/12/15 02:56:15 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int argc, char **argv)
{
	std::string filename;std::string t;std::string s;
	std::string s1;
	std::string s2;
	std::string line;
	
	if (argc != 4)
		return (1);
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	
	std::ifstream intfile(filename);
	if (!intfile.is_open())
	{
		std::cerr << "Error opening file!" << std::endl;
		return (1);
	}
	
	std::ofstream outfile(filename + ".replace");
	if (!outfile.is_open())
	{
		std::cerr << "Error opening file!" << std::endl;
		intfile.close();
		return (1);
	}

	while (std::getline(intfile , line))
	{
		if (!intfile.eof())
			line += '\n';
		_replace(line, s1, s2 , outfile);
	}

	outfile.close();
	intfile.close();  
	return (0);
}
