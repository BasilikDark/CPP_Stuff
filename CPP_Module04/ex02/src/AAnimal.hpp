/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 13:19:51 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/12 15:17:01 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class	AAnimal
{
	public:
		/*Con- and Destructor's*/
		AAnimal(const std::string type = "");
		AAnimal(const AAnimal &src);
		virtual ~AAnimal();

		/*Operator Overload's*/
		virtual AAnimal	&operator = (const AAnimal &rhs);

		/*Getter and Setter*/
		virtual	std::string	getType() const;

		/*Memberfunctions*/
		virtual void		makeSound() const = 0 ;

	protected:
		/*Variables*/
		std::string	_type;
};

#endif
