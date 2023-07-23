/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:39:20 by rrupp             #+#    #+#             */
/*   Updated: 2023/07/22 10:00:42 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat Constructor called" << std::endl;
}

Cat::Cat(const Cat &src)
{
	this->_type = src.getType();
	this->_brain = new Brain();
	*(this->_brain) = *(src._brain);
	std::cout << "Cat Copyconstructor called" << std::endl;
}

Cat	&Cat::operator = (const Cat &rhs)
{
	this->_type = rhs.getType();
	*(this->_brain) = *(rhs._brain);
	std::cout << "Cat = operator called" << std::endl;
	return (*this);
}

std::string	Cat::getType(void) const
{
	return (this->_type);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miiiaaauuu" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Deconstructor called" << std::endl;
	delete this->_brain;
}
