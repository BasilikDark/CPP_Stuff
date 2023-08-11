/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 17:27:08 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/11 17:46:25 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

# define I_SIZE 4

class Character : public ICharacter
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
		AMateria	*_inventory[I_SIZE];
		std::string	_name;
};

Character::Character(std::string name) : _name(name)
{
	std::cout << "Character Constructor called!" << std::endl;
	for (int i = 0; i < I_SIZE; i++)
		_inventory[i] = NULL;
}

Character::Character(Character const &src)
{
	std::cout << "Character Copyconstructor called!" << std::endl;
	*this = src;
}

Character const	&Character::operator = (Character const &rhs)
{
	std::cout << "Character Copy Operator called!" << std::endl;
	this->_name = rhs.getName();
	for (int i = 0; i < I_SIZE; i++)
		this->_inventory[i] = rhs._inventory[i];
	return (*this);
}

std::string const	&Character::getName(void) const
{
	// std::cout << "Character getName function called!" << std::endl;
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	int i = 0;

	std::cout << "Character equip function called!" << std::endl;	
	while (i < I_SIZE && _inventory[i])
		i++;
	if (i < I_SIZE)
		_inventory[i] = m;	
}

void	Character::unequip(int idx)
{
	std::cout << "Character unequip function called!" << std::endl;
	if (idx >= I_SIZE)
		return ;
	if (_inventory[idx])
	{
		delete _inventory[idx];
		_inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	std::cout << "Character use function called!" << std::endl;
	if (idx >= I_SIZE)
		return ;
	if (_inventory[idx])
		_inventory[idx]->use(target);
}

Character::~Character()
{
	std::cout << "Character Destructor called!" << std::endl;
	for (int i = 0; i < I_SIZE; i++)
		if(_inventory[i])
			delete _inventory[i];
}

#endif
