/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.HumanA.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 12:07:45 by rrupp             #+#    #+#             */
/*   Updated: 2023/06/04 12:40:17 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Class.HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type) : _name(name), _type(type)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with their "
	<< this->_type.getType() << std::endl;
}
