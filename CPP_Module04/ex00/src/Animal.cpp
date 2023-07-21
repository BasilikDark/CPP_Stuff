/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:39:56 by rrupp             #+#    #+#             */
/*   Updated: 2023/07/21 14:59:54 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->_type = "";
	std::cout << "Animal Constructor called" << std::endl;
}

Animal::Animal(const Animal &src)
{
    this->_type = src.getType();
	std::cout << "Animal Copyconstructor called" << std::endl;
}

Animal	&Animal::operator = (const Animal &rhs)
{
    this->_type = rhs.getType();
	std::cout << "Animal = operator called" << std::endl;
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "Some strange noices!?" << std::endl;
}

std::string Animal::getType(void) const
{
    return (this->_type);
}

Animal::~Animal()
{
	std::cout << "Animal Decconstructor called" << std::endl;
}

