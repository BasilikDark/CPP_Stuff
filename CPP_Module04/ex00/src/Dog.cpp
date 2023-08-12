/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:34:25 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/12 13:51:58 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*Con- and Destructor's*/
Dog::Dog() : Animal("Dog") {
	std::cout << "Dog Constructor called" << std::endl;
}

Dog::Dog(const Dog &src) : Animal("Dog") {
	(void)src;
}

Dog::~Dog() {
	std::cout << "Dog Deconstructor called" << std::endl;
}

/*Operator Overload's*/
Dog	&Dog::operator = (const Dog &rhs) {
	(void)rhs;
	return (*this);
}

/*Memberfunctions*/
void	Dog::makeSound(void) const {
	std::cout << "Bark" << std::endl;
}
