/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 09:50:27 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/29 13:33:04 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <iterator>
#include <vector>

int	main(void) {
	std::vector<int> blub;
	for (int i = 0; i < 6; i++)
		blub.push_back(i);
	try {
		std::vector<int>::iterator it = easyfind(blub, 2);
		std::cout << *easyfind(blub, 2) << std::endl;
		std::cout << *it << std::endl;
		std::cout << *easyfind(blub, 7) << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
