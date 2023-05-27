/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.PhoneBook.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 11:12:31 by rrupp             #+#    #+#             */
/*   Updated: 2023/05/27 17:43:38 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.PhoneBook.hpp"

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
	this->_contact[this->_count % 2].add_contact();
	this->_count++;
}

void	PhoneBook::PrintBook(void) const
{
	for (int i = 0; i < 2; i++)
		if (this->_contact[i].get_string(FIRST_NAME) != "")
			this->_contact[i].print_bookline();
}
