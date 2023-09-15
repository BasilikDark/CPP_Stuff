/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 15:57:27 by rrupp             #+#    #+#             */
/*   Updated: 2023/09/15 17:26:30 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <cstdlib>

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Error: this Calculator needs just one string as input!" << std::endl;
		return (0);
	}
	
	RPN			calculate;
	std::string	input = argv[1];
	std::string	value;
	char		*check;
	std::size_t	index = 0;
	int			number;

	try{
		while (input[index]) {
			while (input[index] == ' ')
				index++;
			value = input.substr(index, input.find(' ', index) - index);
			std::cout << index << std::endl;
			if (value == "*" || value == "/" || value == "+" || value == "-")
				calculate.popCal(value);
			else {
				std::cout << "      " << &value[index] << std::endl;
				number = strtol(&value[index], &check, 10);
				if (*check != '\0' && *check != ' ') {
					std::cout << "Error: invalid input!" << check << std::endl;
					return (0);
				}
				std::cout << " blub " << number << std::endl;
				calculate.PushToStack(number);
			}
			while (input[index] && input[index] != ' ')
				index++;
		}
		calculate.result();
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << "!" << std::endl;
	}
}