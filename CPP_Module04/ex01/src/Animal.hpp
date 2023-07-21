/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 13:19:51 by rrupp             #+#    #+#             */
/*   Updated: 2023/07/21 14:57:38 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class	Animal
{
	public:
		Animal();
		Animal(const Animal &src);

		virtual Animal	&operator = (const Animal &rhs);

		virtual void		makeSound() const;
		virtual	std::string	getType() const;

		virtual ~Animal();
	protected:
		std::string	_type;
};

#endif
