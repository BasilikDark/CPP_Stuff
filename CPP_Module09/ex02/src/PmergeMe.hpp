/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 10:06:44 by rrupp             #+#    #+#             */
/*   Updated: 2023/10/03 14:48:10 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <vector>
# include <exception>
# include <algorithm>
# include <time.h>

# define CHUNK 10

/*Non Memberfunctions*/
template<class Container>
void	FordJohnsonSort(Container con, typename Container::iterator l, typename Container::iterator r) {
	if (con.size() <= 1)
		return ;
	if (r == con.end())
		r--;
	if (std::distance(l, r) > CHUNK) {
		typename Container::iterator m = l + std::distance(l, r) / 2;
		FordJohnsonSort(con, l, m);
		FordJohnsonSort(con, m + 1, r);
	}
	typename Container::iterator	start = l;
	while(l <= r) {
		std::rotate(std::upper_bound(start, l, *l), l, l + 1);
		l++;
	}
}

template<class ContainerOne, class ContainerTwo>
class PmergeMe{
	public:
		/*Con- & Destructor's*/
		PmergeMe(std::vector<int> input) {
			conCheck = input;
			std::cout << "befor sort: ";
			for (std::vector<int>::iterator it = input.begin(); it != input.end(); it++)
				std::cout << *it << " ";
			std::cout << std::endl << "after sort: ";
			std::sort(input.begin(), input.end());
			for (std::vector<int>::iterator it = input.begin(); it != input.end(); it++)
				std::cout << *it << " ";
			std::cout << std::endl;
		};
		PmergeMe(const PmergeMe &src){*this = src;};
		~PmergeMe() {};

		/*Operator Overload's*/
		PmergeMe	&operator=(const PmergeMe &src) {(void)src; return(*this);};

		/*Memberfunction's*/
		void	FordJohnsonSorts() {
			clock_t start, end;
			start = clock();
			for (std::vector<int>::iterator it = conCheck.begin(); it != conCheck.end(); it++)
				conOne.push_back(*it);
			FordJohnsonSort(this->conOne, conOne.begin(), conOne.end() - 1);
			end = clock();
			std::cout << "The first given Container took " << std::fixed << double(end - start) / double(CLOCKS_PER_SEC) << " seconds!" << std::endl;
			// for (typename ContainerOne::iterator it = conOne.begin(); it != conOne.end(); it++) //int i = 0; input[i]; i++)
			// 	std::cout << *it << " ";
			// std::cout << std::endl;
			start = clock();
			for (std::vector<int>::iterator it = conCheck.begin(); it != conCheck.end(); it++)
				conTwo.push_back(*it);
			FordJohnsonSort(this->conTwo, conTwo.begin(), conTwo.end() - 1);
			end = clock();
			std::cout << "The second given Container took " << std::fixed << double(end - start) / double(CLOCKS_PER_SEC) << " seconds!" << std::endl;
			// for (typename ContainerTwo::iterator it = conTwo.begin(); it != conTwo.end(); it++) //int i = 0; input[i]; i++)
			// 	std::cout << *it << " ";
			// std::cout << std::endl;
		};
	private:
		/*private Variables*/
		ContainerOne		conOne;
		ContainerTwo		conTwo;
		std::vector<int>	conCheck;
};

#endif