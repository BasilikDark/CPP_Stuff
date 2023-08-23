/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:22:06 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/22 15:28:15 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

/*Con- and Destructor's*/
Serialization::Serialization() {}

Serialization::Serialization(const Serialization &src) {*this = src;}

Serialization::~Serialization() {}

/*Operator Overload's*/
Serialization	&Serialization::operator = (const Serialization &rhs) {(void)rhs;return (*this);}

uintptr_t	Serialization::serialize(Data *ptr) {return (reinterpret_cast<uintptr_t> (ptr));}

Data		*Serialization::deserialize(uintptr_t raw) {return (reinterpret_cast<Data*> (raw));}