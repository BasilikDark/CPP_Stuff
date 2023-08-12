/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:01:08 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/12 10:48:07 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*Con- and Destructor's*/

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap " << name << " got constructed!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &src) {*this = src;}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << this->_name << " got deconstruted" << std::endl;
}

/*Operator Overload's*/

ClapTrap	&ClapTrap::operator = (const ClapTrap &rhs) {
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints	= rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();
	return (*this);
}

/*getter and setter*/

std::string	ClapTrap::getName(void) const {return (this->_name);}

int	ClapTrap::getHitPoints(void) const {return (this->_hitPoints);}

int	ClapTrap::getEnergyPoints(void) const {return (this->_energyPoints);}

int	ClapTrap::getAttackDamage(void) const {return (this->_attackDamage);}

/*memberfunctions*/

void	ClapTrap::attack(const std::string &target) {
	if (this->_energyPoints && this->_hitPoints) {
		this->_energyPoints--;
		std::cout << "Claptrap " << this->_name << " attacks ";
		std::cout << target << ", causing " << this->_attackDamage;
		std::cout << " points of damage!" << std::endl;
	}
	else if (this->_energyPoints == 0)
		std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints == 0) {
		std::cout << "ClapTrap " << this->_name << " is already dead!";
		return ;
	}
	this->_hitPoints = this->_hitPoints - amount;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;
	if (this->_hitPoints > 0) {
		std::cout << "ClapTrap " << this->_name << " has taken ";
		std::cout << amount << " points of damage and has ";
		std::cout << this->_hitPoints << " hitpoints left!" << std::endl;
	}
	else {
		std::cout << "ClapTrap " << this->_name << " has taken ";
		std::cout << amount << " points of damage and died!" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energyPoints && this->_hitPoints) {
		this->_energyPoints--;
		this->_hitPoints = this->_hitPoints + amount;
		std::cout << "ClapTrap " << this->_name << " repaired for ";
		std::cout << amount << " points!" << std::endl;
	}
	else if (this->_energyPoints == 0)
		std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
}
