/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:58:16 by rrupp             #+#    #+#             */
/*   Updated: 2023/09/29 11:33:44 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <algorithm>

int	main() {
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "the size of the mstack is: " << mstack.size() << std::endl;
	std::cout << "the last added value is " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "the size of the mstack is: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(15);
	mstack.push(0);
	std::cout << "the size of the mstack is: " << mstack.size() << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << "the size of s after Constructing it with mstack is: " << s.size() << std::endl;	
	for (MutantStack<int>::iterator iter = mstack.begin(); iter != mstack.end(); iter++)
		std::cout << *iter << " ";
	std::cout << std::endl;
	std::sort(mstack.begin(), mstack.end());
	for (MutantStack<int>::iterator iter = mstack.begin(); iter != mstack.end(); iter++)
		std::cout << *iter << " ";
	std::cout << std::endl;
	return 0;
}