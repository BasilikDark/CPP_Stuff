/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TestClass.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 12:39:45 by rrupp             #+#    #+#             */
/*   Updated: 2023/05/21 14:51:08 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TestClass.hpp"
#include <iostream>

TestClass::TestClass(void) : foo(42)
{
	std::cout << "Constructor called" << std::endl;
	this->_count++;
	this->bar();
	return ;
}

TestClass::~TestClass(void)
{
	std::cout << "Deconstuctor called" << std::endl;
	this->_count--;
	return ;
}

void	TestClass::bar(void) const
{
	std::cout << "Member function bar called" << std::endl;
	return ;
}

int		TestClass::get_private(void) const
{
	return (this->_private);
}

void	TestClass::set_private(int v)
{
	if (v >= 0)
		this->_private = v;
	else
		std::cout << "Just positive numbers pls!!" << std::endl;
	return ;
}

int		TestClass::comp_private(TestClass *other) const
{
	if (this->_private < other->get_private())
		return (-1);
	else if (this->_private > other->get_private())
		return (1);
	return (0);
}

int		TestClass::get_count(void) const
{
	return (this->_count);
}

int	TestClass::_count = 0;
