/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.HumanB.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 12:14:24 by rrupp             #+#    #+#             */
/*   Updated: 2023/06/05 17:20:40 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_HUMANB_CPP
# define CLASS_HUMANB_CPP

# include "Class.Weapon.hpp"
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