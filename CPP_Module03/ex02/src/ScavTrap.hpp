/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:37:42 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/22 13:08:57 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAFTRAP_HPP
# define SCAFTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:
		/*Con- and Destructor's*/
		ScavTrap(std::string name = "");
		ScavTrap(const ScavTrap &src);
		~ScavTrap(void);

		/*Operator Overload's*/
		const ScavTrap	&operator = (const ScavTrap &rhs);

		/*memberfunctions*/
		void		attack(const std::string &target);
		void		guardGate(void);
	private:
};

#endif
