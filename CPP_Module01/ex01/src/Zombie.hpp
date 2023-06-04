/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 15:38:34 by rrupp             #+#    #+#             */
/*   Updated: 2023/06/04 10:21:52 by rrupp            ###   ########.fr       */
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
		void	setName(std::string name);

	private:
		std::string	_name;	
};

Zombie	*zombieHorde(int N, std::string name);
#endif