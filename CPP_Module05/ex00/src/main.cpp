/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 10:53:03 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/15 15:18:15 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void){ {
		try {
			Bureaucrat blub("blub", 155);
		}
		catch (std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
		}
	} std::cout << std::endl; {
		try {
			Bureaucrat blub("blub", 0);
		}
		catch (std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
		}
	} std::cout << std::endl; {
		try {
			Bureaucrat blub("blub", 10);
			std::cout << blub << std::endl;
		}
		catch (std::exception &e) {
			std::cout << " Error: " << e.what() << std::endl;
		}
	} std::cout << std::endl; {
		try {
			Bureaucrat blub("blub", 1);
			std::cout << blub << std::endl;
			blub.incrementGrade();
		}
		catch (std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
		}
	} std::cout << std::endl; {
		try {
			Bureaucrat blub;
			std::cout << blub << std::endl;
			blub.decrementGrade();
		}
		catch (std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
}
