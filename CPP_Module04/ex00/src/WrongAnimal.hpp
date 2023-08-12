/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 13:19:51 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/12 12:33:03 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_HPP
# define WrongAnimal_HPP

# include <iostream>

class	WrongAnimal
{
	public:
		/*Con- and Destructor's*/
		WrongAnimal(const std::string type = "");
		WrongAnimal(const WrongAnimal &src);
		virtual ~WrongAnimal();

		/*Operator Overload's*/
		virtual WrongAnimal	&operator = (const WrongAnimal &rhs);

		/*Getter and Setter*/
		virtual	std::string	getType() const;

		/*Memberfunctions*/
		void		makeSound() const;

	protected:
		/*Variables*/
		std::string	_type;
};

#endif
