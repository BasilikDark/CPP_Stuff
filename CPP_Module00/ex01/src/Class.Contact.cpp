/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.Contact.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 15:55:41 by rrupp             #+#    #+#             */
/*   Updated: 2023/05/21 17:43:03 by rrupp            ###   ########.fr       */
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

void Contact::add_contact(void)
{
	char	buff0[11];

	std::cout << "Please enter your first name: " << std::endl;
	std::cin >> buff0;
	buff0[10] = '\0';
	std::cout << buff0 << std::endl;
	std::cout << std::endl;
	for (int i = -1; i < 10; ++i)
		this->first_name[i] = buff0[i];
}

char	*Contact::get_cont(int check, char *tmp)
{
	if (check == FIRST_NAME)
	{
		for (int i = -1; i < 10; ++i)
			tmp[i] = this->first_name[i];
		return (tmp);
	}
	else
		return (NULL);
}