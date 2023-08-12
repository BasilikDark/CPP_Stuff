/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:39:56 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/12 14:08:08 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*Con- and Destructor's*/
Animal::Animal(const std::string type) : _type(type) {
	std::cout << "Animal Constructor called" << std::endl;
}

Animal::Animal(const Animal &src) : _type(src.getType()) {
	std::cout << "Animal Copyconstructor called" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal Decconstructor called" << std::endl;
}

/*Operator Overload's*/
Animal	&Animal::operator = (const Animal &rhs) {
	(void)rhs;
	std::cout << "Animal = operator called" << std::endl;
	return (*this);
}

/*Getter and Setter*/
std::string Animal::getType(void) const {return (this->_type);}

/*Mamberfunctions*/
void	Animal::makeSound(void) const {
	std::cout << "Some strange noices!?" << std::endl;
}
