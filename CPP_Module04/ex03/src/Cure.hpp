/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 16:24:31 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/08 17:26:03 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public virtual AMateria
{
private:
public:
	Cure();
	Cure(Cure const &src);
	
	Cure const	&operator = (Cure const &rhs);
	Cure		*clone(void) const;
	void		use(ICharacter &target) const;
	~Cure();
};

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure Constructor called!" << std::endl;
}

Cure::Cure(Cure const &src) : AMateria(src.getType()) {}

Cure const	&Cure::operator = (Cure const &rhs) {return (*this);}

Cure	*Cure::clone(void) const
{
	Cure	*tmp = new Cure;
	return (tmp);
}

void	Cure::use(ICharacter &target) const
{
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure Deconstructor called!" << std::endl;
}


#endif