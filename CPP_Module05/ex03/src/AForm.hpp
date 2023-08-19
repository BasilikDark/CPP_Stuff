/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 15:20:18 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/16 13:26:06 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <stdbool.h>
# include <iostream>

class Bureaucrat;

class AForm
{
	public:
		/*Con- and Destructor's*/
		AForm(std::string name = "Wasted Paper", int toSign = 150, int toExecute = 150);
		AForm(const AForm &src);
		virtual ~AForm();

		/*Operator Overload's*/
		AForm	&operator = (const AForm &rhs);

		/*Getter and Setter*/
		std::string		getName(void) const;
		int				getAbleToSign(void) const;
		int				getAbleToExecute(void) const;
		bool			isSigned(void) const;
		std::string		getTarget(void) const;
		void			setTarget(std::string newTarget);

		/*Memberfunctions*/
		virtual void	execute(Bureaucrat const &executor) const = 0;
		void	beSigned(const Bureaucrat &Minion);
		void	AFormThrow(int garde) const;
		void	AFormSignThrow(void) const;
	
	protected:
		/*Special Getter*/
		void	setSigned(bool issigned);

	private:
		/*Variables*/
		const std::string	_name;
		bool				_signed;
		const int			_ableToSign;
		const int			_ableToExecute;
		std::string			_target;
		class GradeTooHighException : public std::exception {
			virtual const char	*what() const throw();
		} high;
		class GradeTooLowException : public std::exception {
			virtual const char	*what() const throw();
		} low;
		class FormNotSignedException : public std::exception {
			virtual const char	*what() const throw();
		} notsigned;
};

/*Not Memberfunctions*/
std::ostream	&operator << (std::ostream &os, const AForm &rhs);

#endif