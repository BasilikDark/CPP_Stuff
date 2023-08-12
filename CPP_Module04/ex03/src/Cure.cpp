/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:30:13 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/12 15:30:30 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/*Con- and Destructor*/
Cure::Cure() : AMateria("cure") {
	std::cout << "Cure Constructor called!" << std::endl;
}

Cure::Cure(Cure const &src) : AMateria(src.getType()) {}

Cure::~Cure() {}

/*Operator Overload's*/
Cure const	&Cure::operator = (Cure const &rhs) {
	(void)rhs;
	return (*this);
}

/*Memberfunction*/
Cure	*Cure::clone(void) const {return (new Cure);}

void	Cure::use(ICharacter &target) const {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

