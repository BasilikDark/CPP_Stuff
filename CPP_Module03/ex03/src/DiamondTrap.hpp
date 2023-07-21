/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 12:53:57 by rrupp             #+#    #+#             */
/*   Updated: 2023/07/20 11:30:33 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public ClapTrap
{
public:
	DiamondTrap(std::string name = "");
	DiamondTrap(const DiamondTrap &src);

	DiamondTrap	&operator = (const DiamondTrap &rhs);

	void	attack();

	~DiamondTrap();
private:
	std::string	_name;
};

DiamondTrap::DiamondTrap(std::string name) : _name(name)
{
	this->_hitPoints;
}

DiamondTrap::~DiamondTrap()
{
}


#endif
