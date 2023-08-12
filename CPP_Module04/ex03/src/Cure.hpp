/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 16:24:31 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/12 15:30:06 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public virtual AMateria
{
	public:
		/*Con- and Destructor*/
		Cure();
		Cure(Cure const &src);
		~Cure();

		/*Operator Overload's*/
		Cure const	&operator = (Cure const &rhs);
		
		/*Memberfunctions*/
		Cure		*clone(void) const;
		void		use(ICharacter &target) const;

	private:
};
#endif