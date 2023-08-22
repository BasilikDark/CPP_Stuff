/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 13:53:24 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/22 13:09:40 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

/*Con- and Destructor's*/
ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap " << name << " got constructed!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) {*this = src;}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap " << this->_name << " got deconstructed!" << std::endl;
}

/*Operator Overload's*/
const ScavTrap	&ScavTrap::operator = (const ScavTrap &rhs){
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();
	return (*this);
}

/*memberfunctions*/	

void	ScavTrap::attack(const std::string &target) {
	if (this->_energyPoints && this->_hitPoints) {
		this->_energyPoints--;
		std::cout << "Scavtrap " << this->_name << " attacks ";
		std::cout << target << ", causing " << this->_attackDamage;
		std::cout << " points of damage!" << std::endl;
	}
	else if (this->_energyPoints == 0)
		std::cout << "ScavTrap " << this->_name << " is out of energy!" << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " is dead!" << std::endl;
}

void    ScavTrap::guardGate(void) {
    std::cout << "ScavTrap " << this->getName() << " is now in Gatekeeper mode!" << std::endl;
}
