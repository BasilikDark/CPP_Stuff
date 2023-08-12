/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:39:20 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/12 13:47:15 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*Con- and Destructor's*/
WrongCat::WrongCat() : WrongAnimal("WrongCat") {
	std::cout << "WrongCat Constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal("WrongCat"){
	(void)src;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat Deconstructor called" << std::endl;
}

/*Operator Overload's*/
WrongCat	&WrongCat::operator = (const WrongCat &rhs) {
	(void)rhs;
	return (*this);
}

/*Memberfunctions*/
void	WrongCat::makeSound(void) const {
	std::cout << "Miiiaaauuu" << std::endl;
}
