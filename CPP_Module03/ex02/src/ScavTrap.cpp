/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 13:53:24 by rrupp             #+#    #+#             */
/*   Updated: 2023/07/13 10:12:15 by rrupp            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

# include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap " << name << " got constructed!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	this->_name = src.getName();
	this->_hitPoints = src.getHitPoints();
	this->_energyPoints = src.getEnergyPoints();
	this->_attackDamage = src.getAttackDamage();
	std::cout << "ScavTrap " << this->_name << " got Copy assignment constructed!" << std::endl;
}

const ScavTrap	&ScavTrap::operator = (const ScavTrap &rhs)
{
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();
	std::cout << "ScavTrap " << this->_name << " got Copy Operator constructed!" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->_name << " got deconstructed!" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
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
