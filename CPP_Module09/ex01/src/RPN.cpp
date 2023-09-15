/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 15:56:54 by rrupp             #+#    #+#             */
/*   Updated: 2023/09/15 17:08:39 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

/*Con- and Destructor's*/
RPN::RPN() {}

RPN::RPN(const RPN &src) {*this = src;}

RPN::~RPN() {}

/*Operator Overload's*/
RPN	&RPN::operator=(const RPN &rhs) {(void)rhs; return (*this);}

/*Memberfuntion's*/
void	RPN::PushToStack(const int number) {
	numbersToCalculate.push(number);
}

void	RPN::popCal(std::string operation) {
	if (numbersToCalculate.size() < 2)
		throw cal;
	int	a = numbersToCalculate.top();
	numbersToCalculate.pop();
	int b = numbersToCalculate.top();
	numbersToCalculate.pop();
	
	if (operation == "+")
		numbersToCalculate.push(a+b);
	else if (operation == "-")
		numbersToCalculate.push(a-b);
	else if (operation == "/")
		b == 0 ? throw cal : numbersToCalculate.push(a/b);
	else 
		numbersToCalculate.push(a*b);
}

std::size_t	RPN::stackSize(void) const {
	return (numbersToCalculate.size());
}

void	RPN::result(void) const {
	if (stackSize() == 1)
		std::cout << numbersToCalculate.top() << std::endl;
	else
		throw cal;
}

/*Exception's*/
const char	*RPN::CalculatorException::what(void) const throw() {return ("RPN::CalculatorException");}
