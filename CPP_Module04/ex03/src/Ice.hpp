/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 16:20:05 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/08 16:59:19 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public virtual AMateria
{
	public:
		Ice();
		Ice(const Ice &src);

		const Ice	&operator = (const Ice &rhs);
		Ice			*clone(void) const;
		void		use(ICharacter &target) const;
		
		~Ice();
	private:
};

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice Constructor called!" << std::endl;
}

Ice::Ice(const Ice &src) : AMateria(src.getType()){}

const Ice	&Ice::operator = (const Ice &rhs) {return (*this);}

Ice	*Ice::clone(void) const
{
	Ice *tmp = new Ice;
	return (tmp);
}

void	Ice::use(ICharacter &target) const
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice Deconstructur called!" << std::endl;
}


#endif
