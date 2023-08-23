/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:23:45 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/22 15:33:07 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int	main(void) {
	Data		blub;
	Data		*blubi;
	uintptr_t	ptr;

	ptr = Serialization::serialize(&blub);
	blubi = Serialization::deserialize(ptr);
	if (&blub == blubi)
		std::cout << "The Pointer's are the same!" << std::endl;
	else
		std::cout << "What the Fuck!" << std::endl;
	blub.blub();
	blubi->blub();
}
