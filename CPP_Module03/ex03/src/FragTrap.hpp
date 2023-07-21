/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 10:34:10 by rrupp             #+#    #+#             */
/*   Updated: 2023/07/20 09:59:37 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(const std::string name = "");
		FragTrap(const FragTrap &src);

		const FragTrap	&operator = (const FragTrap &rhs);

		void			highFivesGuys(void) const;

		~FragTrap();
		
	private:
};

#endif
