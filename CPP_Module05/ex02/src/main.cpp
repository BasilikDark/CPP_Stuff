/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 10:53:03 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/17 15:39:54 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void) {
	Bureaucrat 				blub("blub", 1);
	Bureaucrat				weak("weak", 150);
	ShrubberyCreationForm	tree("jo");
	RobotomyRequestForm		robo("robo");
	PresidentialPardonForm	pres("pres");

	blub.signAForm(robo);
	blub.executeForm(robo);
	blub.signAForm(pres);
	blub.executeForm(pres);
	weak.executeForm(pres);
}
