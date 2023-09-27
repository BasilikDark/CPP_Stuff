/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:10:34 by rrupp             #+#    #+#             */
/*   Updated: 2023/09/27 17:16:55 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <deque>

int	main(void) {
	std::vector<int>	test;
	
	test.push_back(2);
	test.push_back(6);
	test.push_back(1);
	test.push_back(4);
	test.push_back(9);
	PmergeMe<std::vector<int>, std::deque<int> >	testi(test);
	testi.FordJohnsonSorts();
}
