/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 11:07:48 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/12 10:18:20 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed(void) {this->_fpnValue = 0;}

Fixed::Fixed(const int value) : _fpnValue(value << _fractionalBits) {}

Fixed::Fixed(const float value) : _fpnValue(roundf(value * (1 << _fractionalBits))) {}

Fixed::Fixed(Fixed const &src) {*this = src;}

Fixed::~Fixed() {}

Fixed	&Fixed::operator = (const Fixed &rhs) {
    this->_fpnValue = rhs.getRawBits();
	return (*this);
}

bool	Fixed::operator > (const Fixed &rhs) const {return (this->_fpnValue > rhs.getRawBits());}

bool	Fixed::operator < (const Fixed &rhs) const {return (this->_fpnValue < rhs.getRawBits());}

bool	Fixed::operator >= (const Fixed &rhs) const {return (this->_fpnValue >= rhs.getRawBits());}

bool	Fixed::operator <= (const Fixed &rhs) const {return (this->_fpnValue <= rhs.getRawBits());}

bool	Fixed::operator == (const Fixed &rhs) const {return (this->_fpnValue == rhs.getRawBits());}

bool	Fixed::operator != (const Fixed &rhs) const {return (this->_fpnValue != rhs.getRawBits());}

Fixed	Fixed::operator + (const Fixed &rhs) const {
	Fixed	sum(this->toFloat() + rhs.toFloat());
	return (sum);
}

Fixed	Fixed::operator - (const Fixed &rhs) const {
	Fixed	sum(this->toFloat() - rhs.toFloat());
	return (sum);
}

Fixed	Fixed::operator * (const Fixed &rhs) const {
	Fixed	sum((this->toFloat() * rhs.toFloat()));
	return (sum);
}

Fixed	Fixed::operator / (const Fixed &rhs) const {
	Fixed	sum((this->toFloat() / rhs.toFloat()));
	return (sum);
}

Fixed	&Fixed::operator ++ (void) {
	this->setRawBits((this->getRawBits() + 1));
	return (*this);
}

Fixed	Fixed::operator ++ (int) {
	Fixed	temp = *this;
	this->setRawBits((this->getRawBits() + 1));
	return (temp);
}

Fixed	&Fixed::operator -- (void) {
	this->setRawBits((this->getRawBits() - 1));
	return (*this);
}

Fixed	Fixed::operator -- (int) {
	Fixed	temp = *this;
	this->setRawBits((this->getRawBits() - 1));
	return (temp);
}

int	Fixed::getRawBits(void) const {return (this->_fpnValue);}

void	Fixed::setRawBits(int const raw) {this->_fpnValue = raw;}

float	Fixed::toFloat(void) const {return ((float)this->_fpnValue / (float)(1 << this->_fractionalBits));}

int	Fixed::toInt(void) const {return (roundf(this->toFloat()));}

Fixed	&Fixed::min(Fixed &a, Fixed &b) {return (a <= b ? a : b);}

Fixed const	&Fixed::min(Fixed const &a, Fixed const &b) {return(a <= b ? a : b);}

Fixed	&Fixed::max(Fixed &a, Fixed &b) {return (a >= b ? a : b);}

Fixed const	&Fixed::max(Fixed const &a, Fixed const &b) {return (a >= b ? a : b);}

std::ostream	&operator << (std::ostream &os, const Fixed &rhs) {
	os << rhs.toFloat();
	return (os);
}
