/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 14:34:04 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/17 14:23:40 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# define TREE_HIGHT 10

# include "AForm.hpp"
# include "fstream"

class	ShrubberyCreationForm : public AForm
{
	public:
		/*Con- and Destructor's*/
		ShrubberyCreationForm(std::string target = "");
		ShrubberyCreationForm(const ShrubberyCreationForm &src);
		~ShrubberyCreationForm();

		/*Operator Overload's*/
		ShrubberyCreationForm	&operator = (const ShrubberyCreationForm &rhs);

		/*Memberfunctions*/
		void	execute(const Bureaucrat &executor) const;
	private:
};

#endif
