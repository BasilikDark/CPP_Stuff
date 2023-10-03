/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 15:57:27 by rrupp             #+#    #+#             */
/*   Updated: 2023/10/03 09:33:44 by rrupp            ###   ########.fr       */
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
			value = input.substr(index, input.find(' ', index) - index);
			if (value == "*" || value == "/" || value == "+" || value == "-")
				calculate.popCal(value);
			else {
				number = strtol(value.c_str(), &check, 10);
				if (*check != '\0' && *check != ' ') {
					std::cout << "Error: invalid input!" << check << std::endl;
					return (0);
				}
				calculate.PushToStack(number);
			}
			while (input[index] && input[index] != ' ')
				index++;
			while (input[index] == ' ')
				index++;
		}
		calculate.result();
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << "!" << std::endl;
	}
}