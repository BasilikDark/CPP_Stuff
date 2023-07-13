/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 11:25:20 by rrupp             #+#    #+#             */
/*   Updated: 2023/07/13 11:26:58 by rrupp            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

# include "FragTrap.hpp"

FragTrap::FragTrap(const std::string name)
{
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << this->_name << " got Constructed!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src)
{
	this->_name = src.getName();
	this->_hitPoints = src.getHitPoints();
	this->_energyPoints = src.getEnergyPoints();
	this->_attackDamage = src.getAttackDamage();
	std::cout << "FragTrap " << this->_name << " got Copyassinment Constructed!" << std::endl;
}

const FragTrap	&FragTrap::operator = (const FragTrap &rhs)
{
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();
	std::cout << "FragTrap " << this->_name << " got Copyoperator Constructed!" << std::endl;
	return (*this);
}

void	FragTrap::highFivesGuys(void) const
{
	std::cout << "FragTrap " << this->_name << " makes a positve high fives request!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " got Deconsructed!" << std::endl;
}
