/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 15:58:36 by rrupp             #+#    #+#             */
/*   Updated: 2023/06/23 14:35:07 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Sed.hpp"

Sed::Sed(std::string inFile, std::string str1, std::string str2) : _inFile(inFile), _str1(str1), _str2(str2)
{
	this->_outfile = this->_inFile;
	this->_outfile += ".replace";
}

Sed::~Sed()
{
}

void	Sed::helper_fillfile(FILE *input, FILE *output)
{
	std::string	temp;
	size_t		pos = 0;
	int			b_size = 1024;
	char		buffer[b_size];

	while (fgets(buffer, b_size, input))
	{
		temp += buffer;
	}
	while ((pos = temp.find(this->_str1)) != std::string::npos)
	{
		temp = temp.substr(0, pos) + this->_str2 + temp.substr(pos + this->_str1.length());
		pos += this->_str2.length();
	}
	fputs(temp.c_str(), output);
	
	std::cout << "Finished writing to a differant file with alternated text!" << std::endl;
}

int	Sed::replace(void)
{
	if (this->_str1.length() == 0)
		return (0);
	FILE	*input = fopen(this->_inFile.c_str(), "r");
	if (!input)
	{
		std::cout << "Error: Faild to open the Input_file!" << std::endl;
		return (1);
	}
	FILE	*output = fopen(this->_outfile.c_str(), "w");
	if (!output)
	{
		std::cout << "Error: Faild to open the Output_file!" << std::endl;
		return (1);
	}
	helper_fillfile(input, output);
	fclose(input);
	fclose(output);
	return (0);
}
