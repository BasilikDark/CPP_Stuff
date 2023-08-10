/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 17:27:08 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/09 15:44:39 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public virtual ICharacter
{
	public:
		Character(std::string name = "");
		Character(Character const &src);

		Character const	&operator = (Character const &rhs);

		std::string const	&getName() const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);

		~Character();

	private:
		AMateria	*_inventory[4];
		int			_inventory_size = 4;
		std::string	_name;

};

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(Character const &src)
{
	*this = src;
}

Character const	&Character::operator = (Character const &rhs)
{
	this->_name = rhs.getName();
	for (int i = 0; i < _inventory_size; i++)
		this->_inventory[i] = rhs._inventory[i];
	return (*this);
}

std::string const	&Character::getName(void) const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	int i = 0;
	
	while (i < _inventory_size && _inventory[i])
		i++;
	if (i < _inventory_size)
		_inventory[i] = m;	
}

void	Character::unequip(int idx)
{
	if (_inventory[idx])
		_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (_inventory[idx])
		_inventory[idx]->use(target);
}

Character::~Character() {}

#endif
