/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:13:48 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/17 12:55:24 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREUCRAT_HPP
# define BUREUCRAT_HPP

# include <iostream>
# include <exception>
# include "AForm.hpp"

class Bureaucrat
{
	public:
		/*Con- and Destructor's*/
		Bureaucrat(std::string name = "Soulless Minion", int grande = 150);
		Bureaucrat(const Bureaucrat &src);
		~Bureaucrat();


		/*Operator Overload's*/
		Bureaucrat		&operator = (const Bureaucrat &rhs);

		/*Getter and Setter*/
		std::string		getName(void) const;
		int				getGrade(void) const;
		void			incrementGrade(void);
		void			decrementGrade(void);

		/*Memberfunctions*/
		void	signAForm(AForm &src) const;
		void	executeForm(const AForm &form) const;

	private:
		/*Variables*/
		std::string		_name;
		int				_grade;
		class GradeTooHighException : public std::exception {
			virtual const char	*what() const throw();
		} high;
		class GradeTooLowException : public std::exception {
			virtual const char	*what() const throw();
		} low;
		
		/*Private Memberfunctions*/
		void			bureaucratThrow(int grade) const;
};

/*Not Memberfunctions*/
std::ostream	&operator << (std::ostream &os, const Bureaucrat &rhs);

#endif
