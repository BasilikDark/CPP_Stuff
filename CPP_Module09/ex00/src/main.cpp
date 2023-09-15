/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:48:45 by rrupp             #+#    #+#             */
/*   Updated: 2023/09/15 13:37:12 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv) {
	if (argc > 2) {
		std::cout << "Error to many arguments" << std::endl;
		return (0);
	}
	try{
		(void)argv;
		BitcoinExchange blub;
		argv[1]	? blub.exchange(argv[1]) : blub.exchange("");
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}