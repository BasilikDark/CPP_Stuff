/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:07:49 by rrupp             #+#    #+#             */
/*   Updated: 2023/07/13 10:19:59 by rrupp            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

# include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	franz("Franz");
	ScavTrap	gio("Gio");

	franz.attack("Gio");
	gio.takeDamage(franz.getAttackDamage());
	gio.guardGate();
}
