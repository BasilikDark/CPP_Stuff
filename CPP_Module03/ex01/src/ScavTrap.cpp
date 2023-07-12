/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 13:53:24 by rrupp             #+#    #+#             */
/*   Updated: 2023/07/12 15:57:26 by rrupp            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

# include "ScavTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(100), _energyPoints(50), _attackDamage(20)
{
	std::cout << "ScavTrap " << name << " got constructed!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ScavTrap " << this->_name << " got deconstructed!" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_energyPoints && this->_hitPoints)
	{
		this->_energyPoints--;
		std::cout << "ScavTrap " << this->_name << " attacks ";
		std::cout << target << ", causing " << this->_attackDamage;
		std::cout << " points of damage!" << std::endl;
	}
	else if (this->_energyPoints == 0)
	{
		std::cout << "ScavTrap " << this->_name << " is out of energy!" << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << this->_name << " is dead!" << std::endl;
	}
}

void    ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->getName() << " is now in Gatekeeper mode!" << std::endl;
}
