/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:10:34 by rrupp             #+#    #+#             */
/*   Updated: 2023/09/28 10:16:00 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <deque>
#include <limits>
#include <cctype>

void	simpleCheck(int argc, char **argv) {
	for (int i = 1; i < argc && argv[i]; i++) {
		for (int j = 0; argv[i][j]; j++) {	
			if (!isdigit(argv[i][j]))
				throw std::runtime_error("wrong input");
		}
	}
}

void	fillVec(char **argv, std::vector<int> &test) {
	double	check;
	for (int i = 1; argv[i]; i++){
		check = std::strtod(argv[i], NULL);
		if (check > std::numeric_limits<int>::max())
			throw std::runtime_error("to big for an integer!");
		test.push_back(static_cast<int>(check));
	}
}

int	main(int argc, char **argv) {
	try {
		std::vector<int>	test;

		simpleCheck(argc, argv);
		fillVec(argv, test);
		PmergeMe<std::vector<int>, std::deque<int> >	testi(test);
		testi.FordJohnsonSorts();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
