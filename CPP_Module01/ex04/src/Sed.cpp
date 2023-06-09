/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 15:58:36 by rrupp             #+#    #+#             */
/*   Updated: 2023/06/28 09:22:51 by rrupp            ###   ########.fr       */
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

void	Sed::helper_fillfile(std::ifstream &input, std::ofstream &output)
{
	std::stringstream	tempstream;
	std::string			temp;
	size_t		pos = 0;

	tempstream << input.rdbuf();
	temp = tempstream.str();
	while ((pos = temp.find(this->_str1, pos)) != std::string::npos)
	{
		temp = temp.substr(0, pos) + this->_str2 + temp.substr(pos + this->_str1.length());
		pos += this->_str2.length();
	}
	output << temp << std::endl;
	std::cout << "Finished writing to a differant file with alternated text!" << std::endl;
}

int	Sed::replace(void)
{
	if (this->_str1.length() == 0)
		return (0);
	std::ifstream	input;
	std::ofstream	output;

	input.open(this->_inFile.c_str());
	if (!input.is_open())
	{
		std::cout << "Error: Faild to open the Input_file!" << std::endl;
		return (1);
	}
	output.open(this->_outfile.c_str());
	if (!output.is_open())
	{
		std::cout << "Error: Faild to open the Output_file!" << std::endl;
		input.close();
		return (1);
	}
	helper_fillfile(input, output);
	input.close();
	output.close();
	return (0);
}
