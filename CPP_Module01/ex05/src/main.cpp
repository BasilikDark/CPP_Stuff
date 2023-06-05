/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 10:33:30 by rrupp             #+#    #+#             */
/*   Updated: 2023/06/05 14:28:48 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int	main(void)
{
	std::string	lvls[] = {"debug", "info", "warning", "error"};
	Harl		harl;

	for (int i = 0; i < 4; i++)
		harl.complain(lvls[i]);
	harl.complain(lvls[2]);
	harl.complain(lvls[2]);
	harl.complain(lvls[2]);
	harl.complain(lvls[2]);
	harl.complain(lvls[2]);
	harl.complain("blub");
	harl.complain("");
	harl.complain(lvls[3]);
	//harl.complain(NULL);
	return (0);
}