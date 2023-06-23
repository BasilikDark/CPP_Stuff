/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 11:12:31 by rrupp             #+#    #+#             */
/*   Updated: 2023/06/23 11:55:13 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "Phone Book was created!" << std::endl;
	this->_count = 0;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "The Phone Book is deleted" << std::endl;
}

void	PhoneBook::AddToBook(void)
{
	this->_contact[this->_count % 8].add_contact(this->_count % 8);
	this->_count++;
}

void	PhoneBook::PrintBook(void) const
{
	for (int i = 0; i < 8; i++)
		if (this->_contact[i].get_string(FIRST_NAME) != "")
			this->_contact[i].print_bookline();
}

int	PhoneBook::_ft_check_input(std::string tmp) const
{
	if (tmp[0] == '\0')
		return (1);
	for (int i = 0; tmp[i]; i++)
	{
		if (tmp[i] && !isdigit(tmp[i]))
		{
			std::cout << "Please just a digit!" << std::endl;
			return (1);
		}
		if (tmp[i] && i > 1)
		{
			std::cout << "To many digits!" << std::endl;
			return (1);
		}
	}
	if(tmp[0] && (tmp[0] - 48) > (this->_count - 1))
	{
		std::cout << "Pls enter a valid Index!" << std::endl;
		return(1);
	}
	return (0);
}

void	PhoneBook::_ft_print_info(int index) const
{
	std::cout << std::endl;
	std::cout << "The contact Infos in index " << index << "are:" << std::endl;
	std::cout << this->_contact[index].get_string(FIRST_NAME) << std::endl;
	std::cout << this->_contact[index].get_string(LAST_NAME) << std::endl;
	std::cout << this->_contact[index].get_string(NICKNAME) << std::endl;
	std::cout << this->_contact[index].get_string(PHONE_NUMBER) << std::endl;
	std::cout << this->_contact[index].get_string(SECRET) << std::endl;
}

void	PhoneBook::SearchBook(void) const
{
	std::string	tmp;
	if (this->_count == 0)
	{
		std::cout << "The phonebook is still empty you can not search!" << std::endl;
		return ;
	}
	while (1)
	{
		if (std::cin.eof())
			return ;
		std::cout << "Pls enter the Index:" << std::endl;
		std::getline(std::cin, tmp);
		if (std::cin.eof())
			return ;
		if (!_ft_check_input(tmp))
			break ;
	}
	_ft_print_info(tmp[0] - 48);
}
