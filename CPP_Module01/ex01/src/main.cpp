/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 15:37:57 by rrupp             #+#    #+#             */
/*   Updated: 2023/06/03 16:54:08 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*Here I make a pointer to a Zombie and it only Constructs it after
I call the function newZombie and gets deletet when I delete it!*/

int	main(void)
{
	Zombie	*Hiasi;
	randomChump("Horst");
	Hiasi = newZombie("Olaf");
	Hiasi->announce();
	delete Hiasi;
	return (0);
}