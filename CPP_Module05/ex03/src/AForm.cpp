/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 10:43:27 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/16 14:17:15 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

/*Con- and Destructor's*/
AForm::AForm(std::string name, int toSign, int toExecute) : _name(name), _signed(false), _ableToSign(toSign), _ableToExecute(toExecute) {
	if (!(toSign >= 1 && toSign <= 150))
		AFormThrow(toSign);
	if (!(toExecute >= 1 && toExecute <= 150))
		AFormThrow(toExecute);
	this->_target = "";
}

AForm::AForm(const AForm &src) : _name(src.getName()),  _ableToSign(src.getAbleToSign()), _ableToExecute(src.getAbleToExecute()) {
	*this = src;
}

AForm::~AForm() {}

/*Operator Overlaod's*/
AForm	&AForm::operator = (const AForm &rhs) {
	this->setTarget(rhs.getTarget());
	this->setSigned(rhs.isSigned());
	return (*this);
}

/*Getter and Setter*/
std::string	AForm::getName(void) const {return (this->_name);}

int	AForm::getAbleToSign(void) const {return (this->_ableToExecute);}

int AForm::getAbleToExecute(void) const {return (this->_ableToExecute);}

bool	AForm::isSigned(void) const {return (this->_signed);}

void	AForm::setSigned(bool issigned) {this->_signed = issigned;}

std::string		AForm::getTarget(void) const {return (this->_target);}

void			AForm::setTarget(std::string target) {this->_target = target;}

/*Memberfuctions*/
void	AForm::beSigned(const Bureaucrat &Minion) {
	if (Minion.getGrade() > this->_ableToSign)
		throw low;
	_signed = true;
}

void	AForm::AFormThrow(int grade) const {
	if (grade > 150)
		throw low;
	else
		throw high;
}

void	AForm::AFormSignThrow(void) const {throw notsigned;}

/*Exception Memberfunctions*/
const char	*AForm::GradeTooLowException::what(void) const throw() {
	return ("AForm::GradeTooLowException");
}

const char	*AForm::GradeTooHighException::what(void) const throw() {
	return ("AForm::GradeTooHighException");
}

const char	*AForm::FormNotSignedException::what(void) const throw() {
	return ("AForm::FormNotSignedException");
}

/*Not Memberfunctions*/
std::ostream	&operator << (std::ostream &os, const AForm &rhs) {
	os << "AForm: " << rhs.getName() << std::endl;
	os << "Needs to be signed a grade of " << rhs.getAbleToSign() << std::endl;
	os << "Needs to be executed a grade of " << rhs.getAbleToSign() << std::endl;
	os << "Is signed ?" << std::endl << rhs.isSigned() << std::endl;
	return (os);
}