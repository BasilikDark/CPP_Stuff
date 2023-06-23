/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 10:56:52 by rrupp             #+#    #+#             */
/*   Updated: 2023/06/23 14:31:24 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanA
{
	public:
		HumanA(std::string name, Weapon &type);
		~HumanA();
		void attack(void) const;

	private:
		std::string	_name;
		Weapon		&_type;
};
#endif
