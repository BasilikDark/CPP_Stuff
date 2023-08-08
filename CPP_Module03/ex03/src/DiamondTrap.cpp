/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 11:50:19 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/08 11:50:47 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name)
{
	this->_name = "DiamondTrap";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << this->_name << " " << ClapTrap::_name << " got constructed!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src.ClapTrap::_name)
{
	*this = src;
	std::cout << this->_name << " " << ClapTrap::_name << " Copyconstructor got called!" << std::endl;
}

DiamondTrap	&DiamondTrap::operator = (const DiamondTrap &rhs)
{
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	ClapTrap::_name = rhs.ClapTrap::_name;
	std::cout << this->_name << " " << ClapTrap::_name << " = operator got called!" << std::endl;
	return (*this);
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "Hi my name is " << ClapTrap::_name;
	std::cout << " and I am a " << this->_name << "!" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << this->_name << " " << ClapTrap::_name << " got destructed!" << std::endl;
}
