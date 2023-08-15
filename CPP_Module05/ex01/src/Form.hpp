/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 15:20:18 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/15 15:44:13 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_CPP
# define FORM_CPP

# include <iostream>
# include <cstdbool>

class Form
{
	public:
		/*Con- and Destructor's*/
		Form(std::string name = "Wasted Paper", int toSign = 150, int toExecute = 150);
		Form(const Form &src);
		~Form();

		/*Operator Overload's*/
		Form	&operator = (const Form &rhs);

	private:
		/*Variables*/
		const std::string	_name;
		bool				_signed;
		const int			_ableToSign;
		const int			_ableToExecute;
		class GradeTooHighException : public std::exception {
			virtual const char	*what() const throw();
		} high;
		class GradeTooLowException : public std::exception {
			virtual const char	*what() const throw();
		} low;
};

Form::Form(std::string name, int toSign, int toExecute) : _name(name), _ableToSign(toSign), _ableToExecute(toExecute)
{
	if (!(toSign >= 1 && toSign <= 150))
		
	if (!(toSign >= 1 && toSign <= 150))
}

Form::~Form()
{
}

void	Bureaucrat::bureaucratThrow(int grade) const {
	if (grade > 150)
		throw low;
	else
		throw high;
}
const char	*Form::GradeTooLowException::what(void) const throw() {
	return ("Form::GradeTooLowException");
}

const char	*Form::GradeTooHighException::what(void) const throw() {
	return ("Form::GradeTooHighException");
}

#endif