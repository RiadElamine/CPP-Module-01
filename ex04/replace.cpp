/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 22:03:30 by relamine          #+#    #+#             */
/*   Updated: 2024/11/06 22:06:37 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void _replace(std::string line, std::string s1, std::string s2, std::ofstream &outfile)
{
	size_t len = line.length();
	size_t len_s1 = s1.length();
	size_t i = 0;
	size_t b;

	while (len > 0)
	{
		b = 0;
		while (len != b && len_s1 != b && line[b + i] == s1[b])
			b++;
		if (len_s1 && b == len_s1)
		{
			outfile << s2;
			i += len_s1;
			len-=len_s1;
		}
		else
		{
			outfile << line[i];	
			i++;
			len--;
		} 
	}
}
