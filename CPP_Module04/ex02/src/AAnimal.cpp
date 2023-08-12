/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:39:56 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/12 15:13:32 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

/*Con- and Destructor's*/
AAnimal::AAnimal(const std::string type) : _type(type) {
	std::cout << "AAnimal Constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &src) : _type(src.getType()) {
	std::cout << "AAnimal Copyconstructor called" << std::endl;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal Decconstructor called" << std::endl;
}

/*Operator Overload's*/
AAnimal	&AAnimal::operator = (const AAnimal &rhs) {
	(void)rhs;
	std::cout << "AAnimal = operator called" << std::endl;
	return (*this);
}

/*Getter and Setter*/
std::string AAnimal::getType(void) const {return (this->_type);}

/*Mamberfunctions*/
// void	Animal::makeSound(void) const {
// 	std::cout << "Some strange noices!?" << std::endl;
// }
