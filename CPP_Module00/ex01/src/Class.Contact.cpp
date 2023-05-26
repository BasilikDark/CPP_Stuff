/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.Contact.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 15:55:41 by rrupp             #+#    #+#             */
/*   Updated: 2023/05/26 16:59:48 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.Contact.hpp"

Contact::Contact(void)
{
	std::cout << "Constructor called" << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "Deconstructor called" << std::endl;
}

void	Contact::add_contact(void)
{
	std::string	buff0;

	std::cout << "Please enter your first name: " << std::endl;
	std::getline(std::cin, buff0);
	this->_first_name = buff0;
	std::cout << "Please enter your last name: " << std::endl;
	std::getline(std::cin, buff0);
	this->_last_name = buff0;
	std::cout << "Please enter your nickname: " << std::endl;
	std::getline(std::cin, buff0);
	this->_nickname = buff0;
	std::cout << "Please enter your phone number: " << std::endl;
	std::getline(std::cin, buff0);
	this->_phone_number = buff0;
	std::cout << "Please tell me your darkest secret: " << std::endl;
	std::getline(std::cin, buff0);
	this->_darkest_secret = buff0;
}

std::string	Contact::get_string(int check) const
{
	std::string	fin;
	if (check == FIRST_NAME)
		return (fin = this->_first_name);
	else if (check == LAST_NAME)
		return (fin = this->_last_name);
	else if (check == NICKNAME)
		return (fin = this->_nickname);
	else if (check == PHONE_NUMBER)
		return (fin = this->_phone_number);
	else
		return (NULL);
}

std::string Contact::_formatstr(const std::string &source) const
{
	std::string	formated;

	formated = source.substr(0, 11);
	if (formated.length() == 11)
	{
		formated[9] = '.';
		formated[10] = '\0';
	}
	return (formated);
}

void	Contact::print_bookline(void) const
{
	std::cout << std::setw(10);
	std::cout << _formatstr(this->_first_name) << "|";
	std::cout << std::setw(10);
	std::cout << _formatstr(this->_last_name)<< "|";
	std::cout << std::setw(10);
	std::cout << _formatstr(this->_nickname) << "|";
	std::cout << std::setw(10);
	std::cout << _formatstr(this->_phone_number) << std::endl;
}
