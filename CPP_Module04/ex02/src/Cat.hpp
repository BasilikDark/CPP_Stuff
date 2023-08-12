/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 13:55:51 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/12 15:15:25 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"


class Cat : public AAnimal
{
	public:
		/*Con- and Destructor's*/
		Cat();
		Cat(const Cat &src);
		~Cat();

		/*Operator Overload's*/
		Cat 		&operator = (const Cat &rhs);

		/*Memberfunction's*/
		void		makeSound(void) const;

	private:
		Brain	*_brain;
};

#endif
