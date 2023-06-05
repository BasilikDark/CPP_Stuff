/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 15:38:34 by rrupp             #+#    #+#             */
/*   Updated: 2023/06/05 16:54:19 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
	public:
		Zombie(std::string name = "");
		~Zombie(void);
		
		void	announce(void) const;

	private:
		std::string	_name;	
};

	Zombie	*newZombie(std::string name);
	void	randomChump(std::string name);
#endif