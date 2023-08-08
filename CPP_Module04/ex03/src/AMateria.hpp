/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 13:08:05 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/08 17:34:47 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "Character.hpp"

class AMateria
{
	public:
		AMateria(std::string const &type);
		AMateria(AMateria const &src);
		
		AMateria 			&operator = (AMateria const &rhs);
		const std::string	&getType() const;
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);
		
		
		~AMateria();

	protected:
		const std::string	&_type;
};

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "AMateria Constructor called!" << std::endl;
}

AMateria::AMateria(AMateria const &src) : _type(src.getType())
{
	std::cout << "AMateria Copyconstructor called!" << std::endl;
}

AMateria	&AMateria::operator = (AMateria const &rhs)
{
	std::cout << "AMateria = operator called!" << std::endl;
	return (*this);
}

const std::string	&AMateria::getType() const
{
	return (this->_type);
}

void	AMateria::use(ICharacter &target) const
{
	std::cout << "Nothing happens to " << target.getName() << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria Deconstructor called!" << std::endl;
}

#endif