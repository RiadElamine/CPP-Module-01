/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 22:03:30 by relamine          #+#    #+#             */
/*   Updated: 2024/11/18 05:16:29 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void _replace(std::string line, std::string s1, std::string s2, std::ofstream &outfile)
{

    size_t pos = 0;
    size_t start = 0;

	pos = line.find(s1, start);
    while (pos != std::string::npos)
	{
        outfile << line.substr(start, pos - start);
        outfile << s2;
        start = pos + s1.length();
		pos = line.find(s1, start);
    }
	outfile << line.substr(start);
}
