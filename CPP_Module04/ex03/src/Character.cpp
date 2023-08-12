/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 15:40:03 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/12 15:40:20 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*Con- and Destructor's*/
Character::Character(std::string name) : _name(name) {
	std::cout << "Character Constructor called!" << std::endl;
	for (int i = 0; i < I_SIZE; i++)
		_inventory[i] = NULL;
}

Character::Character(Character const &src) {
	*this = src;
}

Character::~Character() {
	std::cout << "Character Destructor called!" << std::endl;
	for (int i = 0; i < I_SIZE; i++)
		if(_inventory[i])
			delete _inventory[i];
}

/*Operator Overload's*/
Character const	&Character::operator = (Character const &rhs) {
	this->_name = rhs.getName();
	for (int i = 0; i < I_SIZE; i++)
		this->_inventory[i] = rhs._inventory[i];
	return (*this);
}

/*Getter and Setter*/
std::string const	&Character::getName(void) const {return (this->_name);}

void	Character::equip(AMateria *m) {
	int i = 0;

	while (i < I_SIZE && _inventory[i])
		i++;
	if (i < I_SIZE)
		_inventory[i] = m;	
}

void	Character::unequip(int idx) {
	if (idx >= I_SIZE)
		return ;
	if (_inventory[idx]) {
		delete _inventory[idx];
		_inventory[idx] = NULL;
	}
}

/*Memberfunctions*/
void	Character::use(int idx, ICharacter &target) {
	if (idx >= I_SIZE)
		return ;
	if (_inventory[idx])
		_inventory[idx]->use(target);
}

