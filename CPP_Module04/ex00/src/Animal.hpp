/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 13:19:51 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/12 12:33:03 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class	Animal
{
	public:
		/*Con- and Destructor's*/
		Animal(const std::string type = "");
		Animal(const Animal &src);
		virtual ~Animal();

		/*Operator Overload's*/
		virtual Animal	&operator = (const Animal &rhs);

		/*Getter and Setter*/
		virtual	std::string	getType() const;

		/*Memberfunctions*/
		virtual void		makeSound() const;

	protected:
		/*Variables*/
		std::string	_type;
};

#endif
