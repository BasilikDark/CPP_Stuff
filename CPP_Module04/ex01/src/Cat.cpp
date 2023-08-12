/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:39:20 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/12 14:12:49 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*Con- and Destructor's*/
Cat::Cat() : Animal("Cat") {
	this->_brain = new Brain();
	std::cout << "Cat Constructor called" << std::endl;
}

Cat::Cat(const Cat &src) : Animal("Cat"){
	this->_brain = new Brain();
	*this = src;
}

Cat::~Cat() {
	delete this->_brain;
	std::cout << "Cat Deconstructor called" << std::endl;
}

/*Operator Overload's*/
Cat	&Cat::operator = (const Cat &rhs) {
	*(this->_brain) = *(rhs._brain);
	return (*this);
}

/*Memberfunctions*/
void	Cat::makeSound(void) const {
	std::cout << "Miiiaaauuu" << std::endl;
}
