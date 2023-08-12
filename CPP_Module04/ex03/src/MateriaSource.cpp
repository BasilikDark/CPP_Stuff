/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:45:02 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/12 15:52:24 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*Con- and Destructor*/
MateriaSource::MateriaSource(void) {
	for (int i = 0; i < T_SIZE; i++)
		_templates[i] = NULL;
	std::cout << "MateriaSource Constructor called!" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &src) {
	*this = src;
}

MateriaSource::~MateriaSource(void) {
	for (int i = 0; i < T_SIZE; i++)
		if (_templates[i])
			delete _templates[i];
	std::cout << "MateriaSource Deconstructor called!" << std::endl;
}

/*Operator Overload's*/
MateriaSource	&MateriaSource::operator = (const MateriaSource &rhs) {
	for (int i = 0; i < T_SIZE; i++)
		_templates[i] = rhs._templates[i];
	return (*this);
}

/*Getter and Setter*/
void	MateriaSource::learnMateria(AMateria *materia){
	int i = 0;
	while (i < T_SIZE && _templates[i])
		i++;
	if (i < T_SIZE)
		_templates[i] = materia;
}

/*Memberfunctions*/
AMateria	*MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < T_SIZE; i++)
		if (_templates[i] && _templates[i]->getType() == type)
			return (_templates[i]->clone());
	return (NULL);
}
