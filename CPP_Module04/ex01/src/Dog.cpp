/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:34:25 by rrupp             #+#    #+#             */
/*   Updated: 2023/07/21 14:55:48 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "Dog Constructor called" << std::endl;
}

Dog::Dog(const Dog &src)
{
	this->_type = src.getType();
	std::cout << "Dog Copyconstructor called" << std::endl;
}

Dog	&Dog::operator = (const Dog &rhs)
{
	this->_type = rhs.getType();
	std::cout << "Dog = operator called" << std::endl;
	return (*this);
}

std::string	Dog::getType(void) const
{
	return (this->_type);
}

void	Dog::makeSound(void) const
{
	std::cout << "Bark" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog Deconstructor called" << std::endl;
}