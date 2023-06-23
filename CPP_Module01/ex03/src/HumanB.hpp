/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 12:14:24 by rrupp             #+#    #+#             */
/*   Updated: 2023/06/23 14:30:48 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CPP
# define HUMANB_CPP

# include "Weapon.hpp"
# include <iostream>

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB();
		void	setWeapon(Weapon &type);
		void	attack(void) const;

	private:
		std::string	_name;
		Weapon		*_type;
};

#endif