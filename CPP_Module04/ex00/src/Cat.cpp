/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:39:20 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/12 13:32:06 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*Con- and Destructor's*/
Cat::Cat() : Animal("Cat") {
	std::cout << "Cat Constructor called" << std::endl;
}

Cat::Cat(const Cat &src) : Animal("Cat"){
	(void)src;
}

Cat::~Cat() {
	std::cout << "Cat Deconstructor called" << std::endl;
}

/*Operator Overload's*/
Cat	&Cat::operator = (const Cat &rhs) {
	(void)rhs;
	return (*this);
}

/*Memberfunctions*/
void	Cat::makeSound(void) const {
	std::cout << "Miiiaaauuu" << std::endl;
}
