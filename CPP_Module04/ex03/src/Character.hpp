/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 17:27:08 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/12 15:50:06 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

# define I_SIZE 4

class Character : public ICharacter
{
	public:
		/*Con- and Destructor's*/
		Character(std::string name = "");
		Character(Character const &src);
		~Character();

		/*Operator Overload's*/
		Character const	&operator = (Character const &rhs);

		/*Getter and Setter*/
		std::string const	&getName() const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		
		/*Memberfunctions*/
		void				use(int idx, ICharacter &target);

	private:
		AMateria	*_inventory[I_SIZE];
		std::string	_name;
};
#endif
