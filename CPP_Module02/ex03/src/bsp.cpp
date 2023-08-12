/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 13:59:13 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/12 10:12:42 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed	add_triangle(Point const p1, Point const p2, Point const p3) {
	Fixed triangle((p1.getX() * (p2.getY() - p3.getY()) + \
		p2.getX() * (p3.getY() - p1.getY()) + \
		p3.getX() * (p1.getY() - p2.getY())) / (Fixed)2);
	if (triangle < (Fixed)0)
		triangle = triangle * (Fixed)-1;
	return (triangle);
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed area(add_triangle(a, b, c));
	Fixed area1(add_triangle(point, b, c));
	Fixed area2(add_triangle(a, point, c));
	Fixed area3(add_triangle(a, b, point));
	if (area1 == (Fixed)0 || area2 == (Fixed)0 || area3 == (Fixed)0)
		return (false);
	if (area == area1 + area2 + area3)
		return (true);
	else
		return (false);
}
