/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 10:41:21 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/17 15:36:13 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

/*Helperfunctions*/
static void	printAsciiTreesInTargetFile(std::string target) {
	std::string		file_name = target + "_shrubbery";
	std::ofstream	outfile(file_name.c_str());
	if(!outfile.is_open()) {
		std::cout << "Error: opening the file!" << std::endl;
		return ;
	}
	for (int d = 0; d < 2; d++) {
		for (int i = 0; i < TREE_HIGHT; ++i) {
			for (int j = 0; j < TREE_HIGHT - i - 1; ++j)
				outfile << " ";
			for (int j = 0; j < 2 * i + 1; ++j)
				outfile << "*";
			outfile << std::endl;
		}
		for (int i = 0; i < TREE_HIGHT - 1; i++)
			outfile << " ";
		outfile << "|" << std::endl << std::endl;
	}
	outfile.close();
}

/*Con- and Destuctor's*/
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137) {
	this->setTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src.getName(), src.getAbleToSign(), src.getAbleToExecute()) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

/*Operator Overload's*/
ShrubberyCreationForm	&ShrubberyCreationForm::operator = (const ShrubberyCreationForm &rhs) {
	this->setTarget(rhs.getTarget());
	this->setSigned(rhs.isSigned());
	return (*this);
}

/*Memberfunctions*/
void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	if (executor.getGrade() > this->getAbleToExecute())
		this->AFormThrow(155);
	if (this->isSigned() == false)
		this->AFormSignThrow();
	printAsciiTreesInTargetFile(this->getTarget());
}
