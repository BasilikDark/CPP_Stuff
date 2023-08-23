/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:17:18 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/22 15:22:03 by rrupp            ###   ########.fr       */
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
		/*Con- and Destructor's*/
		Serialization();
		Serialization(const Serialization &src);
		~Serialization();

		/*Operator Overload's*/
		Serialization &operator = (const Serialization &rhs);
		
		static uintptr_t	serialize(Data *ptr);
		static Data			*deserialize(uintptr_t raw);
	private:
};


#endif