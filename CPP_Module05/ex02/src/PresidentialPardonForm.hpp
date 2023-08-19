/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:58:13 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/17 15:43:49 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		/*Con- and Destructor's*/
		PresidentialPardonForm(std::string target = "");
		PresidentialPardonForm(const PresidentialPardonForm &src);
		~PresidentialPardonForm();

		/*Operator Overload's*/
		PresidentialPardonForm &operator = (const PresidentialPardonForm &rhs);

		/*Memberfunctions*/
		void	execute(const Bureaucrat &executor) const;
	private:
};

#endif
