/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 10:45:38 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/12 10:35:18 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	public:
		/*Con- and Destructor's*/
		ClapTrap(std::string name = "");
		ClapTrap(ClapTrap &src);
		~ClapTrap();
		
		/*Operator Overload's*/
		ClapTrap	&operator = (const ClapTrap &rhs);
		
		/*getter and setter*/
		std::string	getName(void) const;
		int			getHitPoints(void) const;
		int			getEnergyPoints(void) const;
		int			getAttackDamage(void) const;

		/*memberfunctions*/		
		void		attack(const std::string &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

	private:
		/*Variables*/
		std::string		_name;
		int	_hitPoints;
		int	_energyPoints;
		int	_attackDamage;
};



#endif