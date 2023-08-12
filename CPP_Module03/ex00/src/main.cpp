/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:02:21 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/12 10:42:01 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	karl("Karl");
	ClapTrap	ruben("Ruben");

	karl.attack(ruben.getName());
	ruben.takeDamage(karl.getAttackDamage());
	ruben.attack("nothing");
	ruben.attack("nothing");
	ruben.attack("nothing");
	ruben.attack("nothing");
	ruben.attack("nothing");
	ruben.attack("nothing");
	ruben.attack("nothing");
	ruben.beRepaired(200);
	ruben.attack("nothing");
	ruben.attack("nothing");
	ruben.attack("nothing");
	ruben.attack("nothing");
	ruben.beRepaired(200);
}
