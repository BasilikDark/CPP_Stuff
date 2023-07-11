/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 10:45:38 by rrupp             #+#    #+#             */
/*   Updated: 2023/07/11 13:17:36 by rrupp            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef	CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	public:
		ClapTrap(std::string Name = "");
		ClapTrap(ClapTrap &src);
		ClapTrap		&operator = (const ClapTrap &rhs);
		std::string		getName(void) const;
		unsigned int	getHitPoints(void) const;
		unsigned int	getEnergyPoints(void) const;
		unsigned int	getAttackDamage(void) const;
		void			attack(const std::string &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		~ClapTrap();

	private:
		std::string		_name;
		unsigned int	_hitPoints = 10;
		unsigned int	_energyPoints = 10;
		unsigned int	_attackDamage = 0;
};

ClapTrap::ClapTrap(std::string name) : _name(name){}

ClapTrap::ClapTrap(ClapTrap &src)
{
	this->_name = src.getName();
	this->_hitPoints = src.getHitPoints();
	this->_energyPoints	= src.getEnergyPoints();
	this->_attackDamage = src.getAttackDamage();
}

ClapTrap	&ClapTrap::operator = (const ClapTrap &rhs)
{
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints	= rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();
	return (*this);
}

std::string	ClapTrap::getName(void) const {return (this->_name);}

unsigned int	ClapTrap::getHitPoints(void) const {return (this->_hitPoints);}

unsigned int	ClapTrap::getEnergyPoints(void) const {return (this->_energyPoints);}

unsigned int	ClapTrap::getAttackDamage(void) const {return (this->_attackDamage);}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_energyPoints && this->_hitPoints)
	{
		this->_energyPoints--;
		std::cout << "Claptrap " << this->_name << " attacks ";
		std::cout << target << ", causing " << this->_attackDamage;
		std::cout << " points of damage!" << std::endl;
	}
}

ClapTrap::~ClapTrap(){}

#endif