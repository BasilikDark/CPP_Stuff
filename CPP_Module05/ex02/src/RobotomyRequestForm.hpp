/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 10:46:40 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/17 14:23:13 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <cstdlib>
# include <ctime>

class RobotomyRequestForm : public AForm
{
	public:
		/*Con- and Destructor's*/
		RobotomyRequestForm(std::string target = "");
		RobotomyRequestForm(const RobotomyRequestForm &src);
		~RobotomyRequestForm();

		/*Operator Overload's*/
		RobotomyRequestForm &operator = (const RobotomyRequestForm &rhs);

		/*Memberfunctions*/
		void	execute(const Bureaucrat &executor) const;
	private:
};

#endif
