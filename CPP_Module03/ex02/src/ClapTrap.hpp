/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 10:45:38 by rrupp             #+#    #+#             */
/*   Updated: 2023/07/13 09:53:40 by rrupp            ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#ifndef	CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	public:
		ClapTrap(std::string name = "");
		ClapTrap(ClapTrap &src);
		ClapTrap	&operator = (const ClapTrap &rhs);
		std::string	getName(void) const;
		int			getHitPoints(void) const;
		int			getEnergyPoints(void) const;
		int			getAttackDamage(void) const;
		void		attack(const std::string &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		~ClapTrap();

	protected:
		std::string		_name;
		int	_hitPoints;
		int	_energyPoints;
		int	_attackDamage;
};



#endif