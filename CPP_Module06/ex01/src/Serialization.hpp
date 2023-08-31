/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:17:18 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/31 11:57:26 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

# include <iostream>
# include <stdint.h>
# include "Data.hpp"

class Serialization
{
	public:
		/*static Memberfunctions*/
		static uintptr_t	serialize(Data *ptr);
		static Data			*deserialize(uintptr_t raw);
	
	private:
		/*Con- and Destructor's*/
		Serialization();
		Serialization(const Serialization &src);
		virtual ~Serialization() = 0;

		/*Operator Overload's*/
		Serialization &operator = (const Serialization &rhs);
		
};


#endif