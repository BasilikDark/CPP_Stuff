/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.Sed.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 15:58:36 by rrupp             #+#    #+#             */
/*   Updated: 2023/06/05 17:44:17 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Class.Sed.hpp"

Sed::Sed(std::string inFile, std::string str1, std::string str2) : _inFile(inFile), _str1(str1), _str2(str2)
{
	this->_outfile = this->_inFile;
	this->_outfile += ".replace";
}

Sed::~Sed()
{
}

int	Sed::replace(void)
{
	std::string	temp;
	if (this->_str1.length() == 0)
		return (0);
	FILE	*input = fopen(_inFile, "r");
	FILE	*output = fopen(_outfile, "w");
	if (!input || !output)
	{
		std::cout << "Error: Faild to open the Input- or Output_file!" << std::endl;
		return (1);
	}
	while (std::getline(input, temp))
	{
		size_t	pos = 0;
		while ((pos = temp.find(this->_str1)) != std::string::npos)
		{
			temp = temp.substr(0, pos) + this->_str2 + temp.substr(pos + this->_str1.length());
			pos += this->_str2.length();
		}
		output << temp << std::endl;
	}
	input.close();
	output.close();
	std::cout << "Finished writing to a differant file with alternated text!" << std::endl;
	return (0);
}
