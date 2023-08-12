/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 13:08:05 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/12 15:25:31 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	public:
		/*Con- and Destructor*/
		AMateria(std::string const &type);
		AMateria(AMateria const &src);
		virtual	~AMateria();
		
		/*Operator Overload's*/
		AMateria 			&operator = (AMateria const &rhs);

		/*Getter and Setter*/
		const std::string	&getType() const;
		
		/*Memberfunctions*/
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target) const;
		
		

	protected:
		const std::string	_type;
};

#endif