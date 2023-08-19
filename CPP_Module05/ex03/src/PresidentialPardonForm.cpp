/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentalPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:41:38 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/17 15:43:59 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

/*Con- and Destructor's*/
PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5) {
	this->setTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : AForm(src.getName(), src.getAbleToSign(), src.getAbleToExecute()) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

/*Operator Overload's*/
PresidentialPardonForm &PresidentialPardonForm::operator = (const PresidentialPardonForm &rhs) {
this->setTarget(rhs.getTarget());
this->setSigned(rhs.isSigned());
return (*this);
}

/*Memberfunctions*/
void	PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	if (executor.getGrade() > this->getAbleToExecute())
		this->AFormThrow(155);
	if (this->isSigned() == false)
		this->AFormSignThrow();
	std::cout << this->getTarget() << " got pardoned by Zaphod Beeblebrox!" << std::endl;
}
