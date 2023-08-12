/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 10:34:10 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/12 11:51:15 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		/*Con- and Destructor's*/
		FragTrap(const std::string name = "");
		FragTrap(const FragTrap &src);
		~FragTrap();

		/*Operator Overload's*/
		const FragTrap	&operator = (const FragTrap &rhs);

		/*memberfunctions*/
		void			highFivesGuys(void) const;
	private:
};

#endif
