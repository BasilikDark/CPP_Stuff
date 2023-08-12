/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:25:36 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/12 15:25:54 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*Con- and Destructor*/
AMateria::AMateria(std::string const &type) : _type(type) {
	std::cout << "AMateria Constructor called!" << std::endl;
}

AMateria::AMateria(AMateria const &src) : _type(src.getType()) {}

AMateria::~AMateria() {
	std::cout << "AMateria Deconstructor called!" << std::endl;
}

/*Operator Overload's*/
AMateria	&AMateria::operator = (AMateria const &rhs) {
	(void)rhs;
	return (*this);
}

/*Getter and Setter*/
const std::string	&AMateria::getType() const {return (_type);}

/*Memberfunctions*/
void	AMateria::use(ICharacter &target) const {
	std::cout << "Nothing happens to " << target.getName() << std::endl;
}
