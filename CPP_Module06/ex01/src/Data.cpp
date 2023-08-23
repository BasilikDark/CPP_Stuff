/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:51:32 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/22 15:04:14 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : _blub("blub"){}

Data::Data(const Data &src) {*this = src;}

Data::~Data() {}

/*Operator Overload's*/
Data	&Data::operator = (const Data &rhs) {this->_blub = rhs._blub; return (*this);}

/*Memberfunctions*/
void	Data::blub(void) const {
	std::cout << _blub << std::endl;
}
