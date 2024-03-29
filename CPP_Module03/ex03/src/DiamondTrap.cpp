/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 11:50:19 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/22 13:48:50 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*Con- and Destructor's*/
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name") {
	this->_name = name;
	FragTrap::_hitPoints = 100;
	ScavTrap::_energyPoints = 50;
	FragTrap::_attackDamage = 30;
	std::cout << "DiamondTrap " << this->_name << " " << ClapTrap::_name << " got constructed!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src.ClapTrap::_name) {*this = src;}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << this->_name << " " << ClapTrap::_name << " got destructed!" << std::endl;
}

/*Operator Overload's*/
DiamondTrap	&DiamondTrap::operator = (const DiamondTrap &rhs) {
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	ClapTrap::_name = rhs.ClapTrap::_name;
	return (*this);
}

/*memberfunctions*/
void	DiamondTrap::whoAmI(void) const {
	std::cout << "Hi my Claptrap_name is: " << ClapTrap::_name;
	std::cout << " and my name is: " << this->_name << "!" << std::endl;
}
