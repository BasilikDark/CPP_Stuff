/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:19:43 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/12 15:17:15 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
	public:
		/*Con- and Destructor's*/
		Dog();
		Dog(const Dog &src);
		~Dog();

		/*Operator Overload's*/
		Dog 		&operator = (const Dog &rhs);

		/*Memberfunctions*/
		void		makeSound(void) const;

	private:
		Brain		*_brain;
};

#endif
