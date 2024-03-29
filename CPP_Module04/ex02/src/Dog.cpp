/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:34:25 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/12 15:15:48 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*Con- and Destructor's*/
Dog::Dog() : AAnimal("Dog") {
	this->_brain = new Brain;
	std::cout << "Dog Constructor called" << std::endl;
}

Dog::Dog(const Dog &src) : AAnimal("Dog") {
	this->_brain = new Brain;
	*this = src;
}

Dog::~Dog() {
	delete this->_brain;
	std::cout << "Dog Deconstructor called" << std::endl;
}

/*Operator Overload's*/
Dog	&Dog::operator = (const Dog &rhs) {
	*(this->_brain) = *(rhs._brain);
	return (*this);
}

/*Memberfunctions*/
void	Dog::makeSound(void) const {
	std::cout << "Bark" << std::endl;
}
