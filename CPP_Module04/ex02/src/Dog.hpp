/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:19:43 by rrupp             #+#    #+#             */
/*   Updated: 2023/07/23 10:55:33 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog &src);

		Dog 		&operator = (const Dog &rhs);

		std::string	getType(void) const;
		void		makeSound(void) const;

		~Dog();
	private:
		Brain		*_brain;
};

#endif
