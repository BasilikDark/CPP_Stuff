/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 10:37:42 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/10 16:24:47 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAFTRAP_HPP
# define SCAFTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap : public virtual ClapTrap
{
	public:
		ScavTrap(std::string name = "");
		ScavTrap(const ScavTrap &src);
		const ScavTrap	&operator = (const ScavTrap &rhs);
		void			attack(const std::string &target);
		void			guardGate(void);
		~ScavTrap(void);
	private:
};

#endif
