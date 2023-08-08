/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 17:27:08 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/08 17:49:52 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include "AMateria.hpp"

class ICharacter
{
	public:
		ICharacter();
		ICharacter(ICharacter const &src);

		ICharacter const	&operator = (ICharacter const &rhs);

		std::string const	&getName() const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);

		~ICharacter();

	private:
		AMateria	*inventory[4];

};

ICharacter::ICharacter()
{
}

ICharacter::~ICharacter()
{
}

#endif
