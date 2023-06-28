/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 11:07:48 by rrupp             #+#    #+#             */
/*   Updated: 2023/06/28 12:43:44 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default Constructor called!" << std::endl;
	this->_fpnValue = 0;
	return ;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Deconstructor called!" << std::endl;
	return ;
}

Fixed	&Fixed::operator = (const Fixed &rhs)
{
    std::cout << "Copy operator called" << std::endl;
    this->_fpnValue = rhs.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
	return (this->_fpnValue);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fpnValue = raw;
}
