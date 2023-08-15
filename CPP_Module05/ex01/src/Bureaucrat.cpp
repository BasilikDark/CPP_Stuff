/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 10:52:13 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/15 14:12:36 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*Not Memberfunctions*/
std::ostream	&operator << (std::ostream &os, const Bureaucrat &rhs) {
	return (os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".");
}

/*Con- and Destructor's*/
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if (grade <= 150 && grade >= 1)
		this->_grade = grade;
	else
		bureaucratThrow(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &src){*this = src;}

Bureaucrat::~Bureaucrat() {}

/*Operator Overload's*/
Bureaucrat	&Bureaucrat::operator = (const Bureaucrat &rhs) {
	this->_name = rhs.getName();
	this->_grade = rhs.getGrade();
	return (*this);
}

/*Getter and Setter*/
std::string	Bureaucrat::getName(void) const {return (this->_name);}

int	Bureaucrat::getGrade(void) const {return (this->_grade);}

void	Bureaucrat::incrementGrade(void) {
	if (this->_grade - 1 < 1)
		bureaucratThrow(this->_grade - 1);
	else
		this->_grade--;
}

void	Bureaucrat::decrementGrade(void) {
	if (this->_grade + 1 > 150)
		bureaucratThrow(this->_grade + 1);
	else
		this->_grade++;
}

/*Private Memberfunctions*/
void	Bureaucrat::bureaucratThrow(int grade) const {
	if (grade > 150)
		throw low;
	else
		throw high;
}

/*I don't know how to call that*/
const char	*Bureaucrat::GradeTooLowException::what(void) const throw() {
	return ("Bureaucrat::GradeTooLowException");
}

const char	*Bureaucrat::GradeTooHighException::what(void) const throw() {
	return ("Bureaucrat::GradeTooHighException");
}
