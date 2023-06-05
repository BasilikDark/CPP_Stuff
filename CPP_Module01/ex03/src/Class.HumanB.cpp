/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.HumanB.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 12:13:43 by rrupp             #+#    #+#             */
/*   Updated: 2023/06/05 17:24:42 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Class.HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon &type)
{
	this->_type = &type;
}

void	HumanB::attack(void) const
{
	if (this->_type->getType().empty())
		std::cout << this->_name << " attacks with their bare hands" << std::endl;
	else
		std::cout << this->_name << " attacks with their "
		<< this->_type->getType() << std::endl;
}
