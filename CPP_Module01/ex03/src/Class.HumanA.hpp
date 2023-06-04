/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.HumanA.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 10:56:52 by rrupp             #+#    #+#             */
/*   Updated: 2023/06/04 12:12:55 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_HUMANA_HPP
# define CLASS_HUMANA_HPP

# include "Class.Weapon.hpp"
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
