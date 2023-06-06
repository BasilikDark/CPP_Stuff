/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 10:33:30 by rrupp             #+#    #+#             */
/*   Updated: 2023/06/06 11:37:22 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int	main(int argc, char *argv[])
{

	if (argc != 2)
	{
		std::cout << "Please Enter DEBUG, INFO, WARNING or ERROR or whatever he said this time!" << std::endl;
		return (0);
	}
	std::string	comp[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	std::string	lvl = argv[1];
	std::string	lvls[] = {"debug", "info", "warning", "error"};
	Harl		harl;
	int			i = -1;

	while (++i < 4)
		if (comp[i].compare(lvl) == 0)
			break;
	switch (i)
	{
		case (0):
		{
			std::cout << "[ DEBUG ]" << std::endl;
			harl.complain(lvls[0]);
			std::cout << std::endl;
		}
		case (1):
		{
			std::cout << "[ INFO ]" << std::endl;
			harl.complain(lvls[1]);
			std::cout << std::endl;
		}
		case (2):
		{
			std::cout << "[ WARNING ]" << std::endl;
			harl.complain(lvls[2]);
			std::cout << std::endl;
		}
		case (3):
		{
			std::cout << "[ ERROR ]" << std::endl;
			harl.complain(lvls[3]);
			std::cout << std::endl;
			break ;
		}
		default:
		{
			std::cout << "[ Probaply complaining about insignificant problems ]" << std::endl;
			break;
		}
	}
	return (0);
}