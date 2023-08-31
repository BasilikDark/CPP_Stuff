/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:03:14 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/31 10:57:34 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

# define TEST_SIZE 10

int	main(void) { {
		Span	blub(3);
		try {
			blub.addNumber(-10);
			blub.addNumber(10);
			blub.addNumber(9);
			std::cout << blub.shortestSpan() << std::endl;
			std::cout << blub.longestSpan() << std::endl;
		}
		catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
	} {
		srand(time(NULL));
		std::vector<int>	toFill;
		Span				blub(TEST_SIZE);
		for (int i = 0; i < TEST_SIZE; i++)
			toFill.push_back(std::rand());
		for (std::vector<int>::iterator it = toFill.begin(); it < toFill.end(); it++)
			std::cout << *it << std::endl;
		// blub.addManyNumber(toFill.begin(), toFill.end());
	}
	return (0);
}