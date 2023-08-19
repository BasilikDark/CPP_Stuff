/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 10:43:27 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/16 14:17:15 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

/*Con- and Destructor's*/
Form::Form(std::string name, int toSign, int toExecute) : _name(name), _signed(false), _ableToSign(toSign), _ableToExecute(toExecute) {
	if (!(toSign >= 1 && toSign <= 150))
		formThrow(toSign);
	if (!(toExecute >= 1 && toExecute <= 150))
		formThrow(toExecute);
}

Form::Form(const Form &src) : _name(src.getName()), _signed(src.isSigned()), _ableToSign(src.getAbleToSign()), _ableToExecute(src.getAbleToExecute()) {}

Form::~Form() {}

/*Operator Overlaod's*/
/*in this Class this operator doesn't make sense!*/
Form	&Form::operator = (const Form &rhs) {
	(void)rhs;
	return (*this);
}

/*Getter and Setter*/
std::string	Form::getName(void) const {return (this->_name);}

int	Form::getAbleToSign(void) const {return (this->_ableToExecute);}

int Form::getAbleToExecute(void) const {return (this->_ableToExecute);}

bool	Form::isSigned(void) const {return (this->_signed);}

/*Memberfuctions*/
void	Form::beSigned(const Bureaucrat &Minion) {
	if (Minion.getGrade() > this->_ableToSign)
		throw low;
	_signed = true;
}

/*Exception Memberfunctions*/
const char	*Form::GradeTooLowException::what(void) const throw() {
	return ("Form::GradeTooLowException");
}

const char	*Form::GradeTooHighException::what(void) const throw() {
	return ("Form::GradeTooHighException");
}

/*Private Memberfunctions*/
void	Form::formThrow(int grade) const {
	if (grade > 150)
		throw low;
	else
		throw high;
}

std::ostream	&operator << (std::ostream &os, const Form &rhs) {
	os << "Form: " << rhs.getName() << std::endl;
	os << "Needs to be signed a grade of " << rhs.getAbleToSign() << std::endl;
	os << "Needs to be executed a grade of " << rhs.getAbleToSign() << std::endl;
	os << "Is signed ?" << std::endl << rhs.isSigned() << std::endl;
	return (os);
}