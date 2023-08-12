/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:33:42 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/12 15:33:57 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/*Con- and Destructor*/
Ice::Ice() : AMateria("ice") {
	std::cout << "Ice Constructor called!" << std::endl;
}

Ice::Ice(const Ice &src) : AMateria(src.getType()) {}

Ice::~Ice() {
	std::cout << "Ice Deconstructur called!" << std::endl;
}

/*Operator Overload's*/
const Ice	&Ice::operator = (const Ice &rhs) {
	(void)rhs;
	return (*this);
}

/*Memberfunctions*/
Ice	*Ice::clone(void) const {return (new Ice);}

void	Ice::use(ICharacter &target) const {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
