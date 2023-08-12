/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 13:55:51 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/12 13:27:09 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_HPP
# define WrongCat_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		/*Con- and Destructor's*/
		WrongCat();
		WrongCat(const WrongCat &src);
		~WrongCat();

		/*Operator Overload's*/
		WrongCat 		&operator = (const WrongCat &rhs);

		/*Memberfunction's*/
		void		makeSound(void) const;

	private:
};

#endif
