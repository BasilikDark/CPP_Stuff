/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:07:49 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/10 16:27:12 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "DiamondTrap.hpp"

int	main(void)
{
	ClapTrap	franz("Franz");
	ScavTrap	gio("Gio");
	FragTrap	gWolf("GWolf");
	DiamondTrap	hiasi("Hiasi");

	franz.attack("Gio");
	gio.takeDamage(franz.getAttackDamage());
	gio.guardGate();
	gWolf.highFivesGuys();
	gWolf.attack("Gio");
	gio.takeDamage(gWolf.getAttackDamage());
	gWolf.attack("Gio");
	gio.takeDamage(gWolf.getAttackDamage());
	gWolf.attack("Gio");
	gio.takeDamage(gWolf.getAttackDamage());
	gWolf.attack("Gio");
	gio.takeDamage(gWolf.getAttackDamage());
	gio.guardGate();
	hiasi.whoAmI();
	std::cout << std::endl;
	std::cout << "Diamond Hiasi's Hitpoints are: " << hiasi.getHitPoints() << std::endl;
	std::cout << "Frag Gwolf's Hitpoints are: " << gWolf.getHitPoints() << std::endl;
	std::cout << "Scav Gio's Hitpoints are: " << gio.getHitPoints() << std::endl;
	std::cout << std::endl;
	std::cout << "Diamond Hiasi's Attackdmg is: " << hiasi.getAttackDamage() << std::endl;
	std::cout << "Frag Gwolf's Attackdmg is: " << gWolf.getAttackDamage() << std::endl;
	std::cout << "Scav Gio's Attackdmg is: " << gio.getAttackDamage() << std::endl;
	std::cout << std::endl;
	std::cout << "Diamond Hiasi's Energypoints are: " << hiasi.getEnergyPoints() << std::endl;
	std::cout << "Frag Gwolf's Energypoints are: " << gWolf.getEnergyPoints() << std::endl;
	std::cout << "Scav Gio's Energypoints are: " << gio.getEnergyPoints() << std::endl;
	std::cout << std::endl;
	hiasi.attack("nobody because I am a Parcifist");
	hiasi.guardGate();
	hiasi.highFivesGuys();
}
