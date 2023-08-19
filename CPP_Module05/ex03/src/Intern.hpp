/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:59:31 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/18 11:59:41 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Bureaucrat.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class	Intern
{
	public:
		/*Con- and Destructor's*/
		Intern();
		Intern(const Intern &src);
		~Intern();

		/*Operator Overload's*/
		Intern	&operator = (const Intern &rhs);
	
		/*Memberfunctions*/
		AForm	*makeForm(std::string form, std::string target);
	
	private:
		AForm	*newShrubberyCreationForm(std::string target);
		AForm	*newRobotomyRequestForm(std::string target);
		AForm	*newPresidentialPardonForm(std::string target);
};

#endif
