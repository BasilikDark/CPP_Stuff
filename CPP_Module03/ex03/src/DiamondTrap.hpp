/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 12:53:57 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/12 12:03:46 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		/*Con- and Destructor's*/
		DiamondTrap(std::string name = "");
		DiamondTrap(const DiamondTrap &src);
		~DiamondTrap();

		/*Operator Overload's*/
		DiamondTrap	&operator = (const DiamondTrap &rhs);

		/*memberfunctions*/
		void		whoAmI(void) const;


	private:
		/*Variables*/
		std::string	_name;
};

#endif
