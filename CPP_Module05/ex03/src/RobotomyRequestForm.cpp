/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 12:41:46 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/17 15:35:31 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

/*Helperfunctions*/
static bool	fifty_fifty(void) {
	return ((std::rand() % 2) ? true : false);
}

/*Con- and Destructor's*/
RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45) {
	std::srand(std::time(NULL));
	this->setTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm("RobotomyRequestForm", 72, 45) {
	(void)src;
	std::srand(std::time(NULL));
}

RobotomyRequestForm::~RobotomyRequestForm() {}

/*Operator Overload's*/
RobotomyRequestForm	&RobotomyRequestForm::operator = (const RobotomyRequestForm &rhs) {
	this->setTarget(rhs.getTarget());
	this->setSigned(rhs.isSigned());
	return(*this);
}

/*Memberfuncctions*/
void	RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	if (executor.getGrade() > this->getAbleToExecute())
		this->AFormThrow(155);
	if (this->isSigned() == false)
		this->AFormSignThrow();
	std::cout << "Some drilling noices!" << std::endl;
	if (fifty_fifty())
		std::cout << this->getTarget() << " has been robotomized!" << std::endl;
	else
		std::cout << "Sadly the robotomy failed!" << std::endl;
}

