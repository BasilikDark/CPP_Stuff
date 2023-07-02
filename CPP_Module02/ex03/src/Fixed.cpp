/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 11:07:48 by rrupp             #+#    #+#             */
/*   Updated: 2023/07/02 09:53:16 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed(void)
{
	// std::cout << "Default Constructor called!" << std::endl;
	this->_fpnValue = 0;
	return ;
}

Fixed::Fixed(const int value) : _fpnValue(value << _fractionalBits)
{
	// std::cout << "Int Constructor called!" << std::endl;
	return ;
}

Fixed::Fixed(const float value) : _fpnValue(roundf(value * (1 << _fractionalBits))) 
{
	// std::cout << "Float Constructor called!" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &src)
{
	// std::cout << "Copy Constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed()
{
	// std::cout << "Deconstructor called!" << std::endl;
	return ;
}

Fixed	&Fixed::operator = (const Fixed &rhs)
{
    // std::cout << "Copy operator called" << std::endl;
    this->_fpnValue = rhs.getRawBits();
	return (*this);
}

bool	Fixed::operator > (const Fixed &rhs)
{
	if (this->_fpnValue > rhs.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator < (const Fixed &rhs)
{
	if (this->_fpnValue < rhs.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator >= (const Fixed &rhs)
{
	if (this->_fpnValue >= rhs.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator <= (const Fixed &rhs)
{
	if (this->_fpnValue <= rhs.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator == (const Fixed &rhs)
{
	if (this->_fpnValue == rhs.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator != (const Fixed &rhs)
{
	if (this->_fpnValue != rhs.getRawBits())
		return (true);
	else
		return (false);
}

Fixed	Fixed::operator + (const Fixed &rhs)
{
	Fixed	sum;

	sum.setRawBits(this->_fpnValue + rhs.getRawBits());
	return (sum);
}

Fixed	Fixed::operator - (const Fixed &rhs)
{
	Fixed	sum;

	sum.setRawBits(this->_fpnValue - rhs.getRawBits());
	return (sum);
}

Fixed	Fixed::operator * (const Fixed &rhs)
{
	Fixed	sum;

	sum.setRawBits((this->toFloat() * rhs.toFloat()) * (1 << this->_fractionalBits));
	return (sum);
}

Fixed	Fixed::operator / (const Fixed &rhs)
{
	Fixed	sum;

	sum.setRawBits((this->toFloat() / rhs.toFloat()) * (1 << this->_fractionalBits));
	return (sum);
}

Fixed	&Fixed::operator ++ (void)
{
	this->setRawBits((this->getRawBits() + 1));
	return (*this);
}

Fixed	Fixed::operator ++ (int)
{
	Fixed	temp;

	temp = *this;
	this->setRawBits((this->getRawBits() + 1));
	return (temp);
}

Fixed	&Fixed::operator -- (void)
{
	this->setRawBits((this->getRawBits() - 1));
	return (*this);
}

Fixed	Fixed::operator -- (int)
{
	Fixed	temp;

	temp = *this;
	this->setRawBits((this->getRawBits() - 1));
	return (temp);
}

int	Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
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
	return (this->_fpnValue >> this->_fractionalBits);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a <= b)
		return (a);
	else
		return (b);
}

Fixed const	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() <= b.getRawBits())
		return (a);
	else
		return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a >= b)
		return (a);
	else
		return (b);
}

Fixed const	&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() >= b.getRawBits())
		return (a);
	else
		return (b);
}

std::ostream	&operator << (std::ostream &os, const Fixed &rhs)
{
	os << rhs.toFloat();
	return (os);
}
