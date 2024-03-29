/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 15:20:18 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/16 14:36:15 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <stdbool.h>
# include <iostream>

class Bureaucrat;

class Form
{
	public:
		/*Con- and Destructor's*/
		Form(std::string name = "Wasted Paper", int toSign = 150, int toExecute = 150);
		Form(const Form &src);
		~Form();

		/*Operator Overload's*/
		Form	&operator = (const Form &rhs);

		/*Getter and Setter*/
		std::string	getName(void) const;
		int			getAbleToSign(void) const;
		int			getAbleToExecute(void) const;
		bool		isSigned(void) const;

		/*Memberfunctions*/
		void		beSigned(const Bureaucrat &Minion);

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
		/*Privat Memberfunctions*/
		void	formThrow(int garde) const;
};

/*Not Memberfunctions*/
std::ostream	&operator << (std::ostream &os, const Form &rhs);

#endif