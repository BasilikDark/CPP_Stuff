/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 12:53:57 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/08 11:50:29 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap(std::string name = "");
		DiamondTrap(const DiamondTrap &src);

		DiamondTrap	&operator = (const DiamondTrap &rhs);

		void		whoAmI(void) const;

		~DiamondTrap();

	private:
		std::string	_name;
};

#endif
