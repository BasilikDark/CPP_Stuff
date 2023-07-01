/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 13:50:17 by rrupp             #+#    #+#             */
/*   Updated: 2023/07/01 16:26:03 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

Point::Point(void) : _x(0), _y(0) {}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Point::Point(const Point &src) : _x(src.getX()), _y(src.getY()) {}

Point::~Point() {}

Point	&Point::operator = (const Point &rhs)
{
	(Fixed)this->_x = rhs.getX();
    (Fixed)this->_y = rhs.getY();
	return (*this);
}

Fixed Point::getX(void) const
{
	return (this->_x);
}

Fixed Point::getY(void) const
{
	return (this->_y);
}
