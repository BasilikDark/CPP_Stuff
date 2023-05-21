/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 12:44:00 by rrupp             #+#    #+#             */
/*   Updated: 2023/05/21 15:14:21 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Test.hpp"

int	main(void)
{
	TestClass	test;
	std::cout << "The value of test_count = " << test.get_count() << std::endl;

	TestClass	test2;
	std::cout << "The value of test2_count = " << test2.get_count() << std::endl;
	std::cout << "The value of test_count is now as well = " << test.get_count() << std::endl << std::endl;

	int			blub;

	std::cout << "test.foo = " << test.foo << std::endl;
	test.foo = 10;
	std::cout << "test.foo = " << test.foo << std::endl << std::endl << std::endl;
	test.bar();


	blub = test.get_private();
	std::cout << "blub = " << blub << std::endl;
	test.set_private(42);
	blub = test.get_private();
	std::cout << "blub = " << blub << std::endl;
	test.set_private(-42);
	blub = test.get_private();
	std::cout << "blub = " << blub << std::endl << std::endl;


	if (&test == &test)
		std::cout << "test and test is the same god thanks!" << std::endl;
	else
		std::cout << "what tha fuck!!!" << std::endl;
	if (&test == &test2)
		std::cout << "I do not think so!" << std::endl;
	else
		std::cout << "surprise two different pointers are not the same!" << std::endl;
	test2.set_private(42);
	if (test.comp_private(&test2) == 0)
		std::cout << "42 is 42 I guess!!" << std::endl;
	else
		std::cout << "I did not understand that right I guess!" << std::endl;
	test2.set_private(21);
	if (test.comp_private(&test2) == 0)
		std::cout << "I hope this is not the same!" << std::endl;
	else
		std::cout << "42 & 21 is not the same Nice!!" << std::endl << std::endl;
	return (0);
}