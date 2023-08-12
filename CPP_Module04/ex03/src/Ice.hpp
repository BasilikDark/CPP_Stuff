/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 16:20:05 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/12 15:33:30 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public virtual AMateria
{
	public:
		/*Con- and Destructor's*/
		Ice();
		Ice(const Ice &src);
		~Ice();

		/*Operator Overload's*/
		const Ice	&operator = (const Ice &rhs);
		
		/*Memberfunctions*/
		Ice			*clone(void) const;
		void		use(ICharacter &target) const;
		
	private:
};

#endif
