/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 15:17:22 by rrupp             #+#    #+#             */
/*   Updated: 2023/06/01 15:08:50 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	handleEOF(void)
{
	std::cout << "Ctrl + d (or EOF) detected. Please don`t!" << std::endl;
}

int	main(void)
{
	PhoneBook	phonebook;
	std::string	cmd;

	while (1)
	{
		std::cout << "Pls enter a command!" << std::endl;
		std::getline(std::cin, cmd);
		if (std::cin.eof())
		{
			handleEOF();
			return (0);
		}
		else if (cmd == "ADD")
			phonebook.AddToBook();
		else if (cmd == "SEARCH")
			phonebook.PrintBook();
		else if (cmd == "EXIT")
			return (0);
		else
			std::cout << "Only ADD, SEARCH and EXIT are valid commands!" << std::endl;
	}
	return (0);
}
