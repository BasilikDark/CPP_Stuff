/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 15:37:57 by rrupp             #+#    #+#             */
/*   Updated: 2023/06/05 16:46:24 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*Here I make a pointer to a Zombie and it only Constructs it after
I call the function newZombie and gets deletet when I delete it!*/

int	main(void)
{
	Zombie *zombie;

	zombie = newZombie("Olaf");
	zombie->announce();
	randomChump("Alf");
	delete zombie;
	return (0);
}