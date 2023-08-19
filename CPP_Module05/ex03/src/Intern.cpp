/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 11:50:29 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/18 12:09:31 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


/*Con- and Destructor's*/
Intern::Intern() {}

Intern::Intern(const Intern &src) {(void)src;}

Intern::~Intern() {}

/*OperatorOverload's*/
Intern	&Intern::operator = (const Intern &rhs) {(void)rhs;return(*this);}

/*Memberfunctions*/
AForm	*Intern::makeForm(std::string form, std::string target) {
	if (form.empty())
		return (NULL);
	AForm	*(Intern::*functions[3])(std::string target) = {&Intern::newShrubberyCreationForm, &Intern::newRobotomyRequestForm, &Intern::newPresidentialPardonForm};
	std::string	comp[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	for (int i = 0; i < 3; i++)
		if (form.compare(comp[i]) == 0)
			return((this->*functions[i])(target));
	return (NULL);
}

AForm	*Intern::newShrubberyCreationForm(std::string target) {return (new ShrubberyCreationForm(target));}

AForm	*Intern::newRobotomyRequestForm(std::string target) {return (new RobotomyRequestForm(target));}

AForm	*Intern::newPresidentialPardonForm(std::string target) {return (new PresidentialPardonForm(target));}
