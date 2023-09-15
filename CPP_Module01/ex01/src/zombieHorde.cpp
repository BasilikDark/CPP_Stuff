/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 17:01:43 by rrupp             #+#    #+#             */
/*   Updated: 2023/09/15 16:09:06 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*zombieHorde;

	if (N < 0)
		return (NULL);
	zombieHorde = new Zombie[N];
	for (int i = 0; i < N; i++)
		zombieHorde[i].setName(name);
	return (zombieHorde);
}
