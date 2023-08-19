/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 10:53:03 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/16 13:18:21 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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
			Bureaucrat	blub("blub", 10);
			Form		form("lol", 11, 11);
			blub.signForm(form);
			blub.decrementGrade();
			blub.decrementGrade();
			blub.signForm(form);
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
	} std::cout << std::endl; {
		try {
			Form	form("jo", 1, 155);
		}
		catch (std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
		}	
	} std::cout << std::endl; {
		try {
			Form	form("jo", 155, 1);
		}
		catch (std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
		}	
	} std::cout << std::endl; {
		try {
			Form	form("jo", 1, 0);
		}
		catch (std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
		}	
	} std::cout << std::endl; {
		try {
			Form	form("jo", 0, 1);
		}
		catch (std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
		}	
	} std::cout << std::endl; {
		try {
			Bureaucrat	blub("blub", 2);
			Form	form("jo", 10, 10);
			Form	form2;
			form2.beSigned(blub);
			form = form2;
			std::cout << form << form2 << std::endl;
		}
		catch (std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
		}	
	}

}
