/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:39:56 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/12 13:30:41 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*Con- and Destructor's*/
WrongAnimal::WrongAnimal(const std::string type) : _type(type) {
	std::cout << "WrongAnimal Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) : _type(src.getType()) {
	std::cout << "WrongAnimal Copyconstructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Decconstructor called" << std::endl;
}

/*Operator Overload's*/
WrongAnimal	&WrongAnimal::operator = (const WrongAnimal &rhs) {
	(void)rhs;
	std::cout << "WrongAnimal = operator called" << std::endl;
	return (*this);
}

/*Getter and Setter*/
std::string WrongAnimal::getType(void) const {return (this->_type);}

/*Mamberfunctions*/
void	WrongAnimal::makeSound(void) const {
	std::cout << "Some strange noices!?" << std::endl;
}
