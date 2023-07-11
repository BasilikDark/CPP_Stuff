/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 10:45:38 by rrupp             #+#    #+#             */
/*   Updated: 2023/07/11 15:01:26 by rrupp            ###   ########.fr       */
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
		ClapTrap	&operator = (const ClapTrap &rhs);
		std::string	getName(void) const;
		int			getHitPoints(void) const;
		int			getEnergyPoints(void) const;
		int			getAttackDamage(void) const;
		void		attack(const std::string &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		~ClapTrap();

	private:
		std::string		_name;
		int	_hitPoints = 10;
		int	_energyPoints = 10;
		int	_attackDamage = 0;
};



#endif