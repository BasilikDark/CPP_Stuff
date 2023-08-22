/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 11:50:19 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/22 10:07:05 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*Con- and Destructor's*/
DiamondTrap::DiamondTrap(std::string name) {
	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
	FragTrap::_hitPoints = 100;
	ScavTrap::_energyPoints = 50;
	FragTrap::_attackDamage = 30;
	std::cout << this->_name << " " << ClapTrap::_name << " got constructed!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src.ClapTrap::_name) {*this = src;}

DiamondTrap::~DiamondTrap() {
	std::cout << this->_name << " " << ClapTrap::_name << " got destructed!" << std::endl;
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
