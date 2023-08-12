/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:19:43 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/12 13:53:00 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
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
};

#endif
