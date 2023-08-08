/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 14:07:49 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/08 11:55:35 by rrupp            ###   ########.fr       */
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
	hiasi.attack("nobody because I am a Parcifist");
}
