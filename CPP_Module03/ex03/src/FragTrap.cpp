/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 11:25:20 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/12 11:59:47 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

/*Con- and Destructor's*/
FragTrap::FragTrap(const std::string name) {
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << this->_name << " got Constructed!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) {*this = src;}

FragTrap::~FragTrap(){
	std::cout << "FragTrap " << this->_name << " got Deconsructed!" << std::endl;
}

/*Operator Overload's*/
const FragTrap	&FragTrap::operator = (const FragTrap &rhs) {
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();
	std::cout << "FragTrap " << this->_name << " got Copyoperator Constructed!" << std::endl;
	return (*this);
}

/*memberfunctions*/	
void	FragTrap::highFivesGuys(void) const {
	std::cout << "FragTrap " << this->_name << " makes a positve high fives request!" << std::endl;
}
