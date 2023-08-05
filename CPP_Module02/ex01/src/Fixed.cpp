/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 11:07:48 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/05 14:06:17 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default Constructor called!" << std::endl;
	this->_fpnValue = 0;
	return ;
}

Fixed::Fixed(const int value) : _fpnValue(value << _fractionalBits)
{
	std::cout << "Int Constructor called!" << std::endl;
	return ;
}

Fixed::Fixed(const float value) : _fpnValue(roundf(value * (1 << _fractionalBits))) 
{
	std::cout << "Float Constructor called!" << std::endl;
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

float	Fixed::toFloat(void) const
{
	return ((float)this->_fpnValue / (float)(1 << this->_fractionalBits));
}

int	Fixed::toInt(void) const
{
	return (roundf(this->toFloat()));
}

std::ostream	&operator << (std::ostream &os, const Fixed &rhs)
{
	os << rhs.toFloat();
	return (os);
}
