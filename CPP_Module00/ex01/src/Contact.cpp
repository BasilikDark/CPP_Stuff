/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 15:55:41 by rrupp             #+#    #+#             */
/*   Updated: 2023/06/23 11:55:20 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	// std::cout << "Constructor called" << std::endl;
}

Contact::~Contact(void)
{
	// std::cout << "Deconstructor called" << std::endl;
}

void	Contact::_save_string(const std::string text)
{
	int		check;

	check = 0;
	while (1)
	{
		if (std::cin.eof())
			return ;
		std::cout << text << std::endl;
		std::getline(std::cin, this->_buff);
		if (std::cin.eof())
			return ;
		for (int i = 0; this->_buff[i]; i++)
		{
			if (!isspace(this->_buff[i]))
			{
				check = 1;
				break ;
			}
		}
		if (check == 1)
			break ;
		else 
			std::cout << "no valid input" << std::endl;
	}
}

void	Contact::add_contact(int index)
{
	this->_index = index;
	_save_string("Please enter your first name: ");
	if (std::cin.eof())
		return ;
	this->_first_name = this->_buff;
	_save_string("Please enter your last name: ");
	if (std::cin.eof())
		return ;
	this->_last_name = this->_buff;
	_save_string("Please enter your nickname: ");
	if (std::cin.eof())
		return ;
	this->_nickname = this->_buff;
	_save_string("Please enter your phone number: ");
	if (std::cin.eof())
		return ;
	this->_phone_number = this->_buff;
	_save_string("Please tell me your darkest secret: ");
	if (std::cin.eof())
		return ;
	this->_darkest_secret = this->_buff;
}

std::string Contact::get_string(int check) const
{
	std::string fin;
	if (check == FIRST_NAME)
		return (fin = this->_first_name);
	else if (check == LAST_NAME)
		return (fin = this->_last_name);
	else if (check == NICKNAME)
		return (fin = this->_nickname);
	else if (check == PHONE_NUMBER)
		return (fin = this->_phone_number);
	else if (check == SECRET)
		return (fin = this->_darkest_secret);
	else
		return (NULL);
}

std::string Contact::_formatstr(const std::string &source) const
{
	std::string formated;

	formated = source.substr(0, 11);
	if (formated.length() == 11)
	{
		formated[9] = '.';
		formated[10] = '\0';
	}
	return (formated);
}

void Contact::print_bookline(void) const
{
	std::cout.setf(std::ios::right);
	std::cout << std::setw(10) << this->_index << "|";
	std::cout << std::setw(10) << _formatstr(this->_first_name) << "|";
	std::cout << std::setw(10) << _formatstr(this->_last_name) << "|";
	std::cout << std::setw(10) << _formatstr(this->_nickname) << std::endl;
}
