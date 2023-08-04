/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 13:59:13 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/04 16:25:21 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	add_triangle(Point const p1, Point const p2, Point const p3)
{
	Fixed triangle((p1.getX() * (p2.getY() - p3.getY()) + \
		p2.getX() * (p3.getY() - p1.getY()) + \
		p3.getX() * (p1.getY() - p2.getY())) / (Fixed)2);
	if (triangle < (Fixed)0)
		triangle = triangle * (Fixed)-1;
	std::cout << triangle << std::endl;
	return (triangle);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed area(add_triangle(a, b, c));
	Fixed area1(add_triangle(point, b, c));
	Fixed area2(add_triangle(a, point, c));
	Fixed area3(add_triangle(a, b, point));
	if (area == area1 + area2 + area3)
		return (true);
	else
		return (false);
}
// {
// 	Point	v_ab((b.getX() - a.getX()).toFloat(), (b.getY() - a.getY()).toFloat());
// 	Point	nv_ab(((b.getY() - a.getY()) * -1).toFloat(), (b.getX() - a.getX()).toFloat());
// 	Fixed	dot_abp((nv_ab.getX() * point.getX()) + (nv_ab.getY() * point.getY()));

// 	Point	v_bc((c.getX() - b.getX()).toFloat(), (c.getY() - b.getY()).toFloat());
// 	Point	nv_bc(((c.getY() - b.getY()) * -1).toFloat(), (c.getX() - b.getX()).toFloat());
// 	Fixed	dot_bcp((nv_bc.getX() * point.getX()) + (nv_bc.getY() * point.getY()));

// 	std::cout << dot_abp << std::endl;
// 	std::cout << dot_bcp << std::endl;
// 	if (dot_abp + dot_bcp > (Fixed)0)
// 		return (true);
// 	else
// 		return (false);
// }

// bool	bsp(Point const a, Point const b, Point const c, Point const point)
// {
// 	// Vector calculations...
// 	Point	v_ac(c.getX().toFloat() - a.getX().toFloat(), c.getY().toFloat() - a.getY().toFloat());
// 	Point	v_ap(point.getX().toFloat() - a.getX().toFloat(), point.getY().toFloat() - a.getY().toFloat());

// 	// Dot product stuff
//  Fixed	dotu((v_ab.getX() * v_ab.getX()) + (v_ab.getY() * v_ab.getY()));
// 	Fixed	dotv((v_ac.getX() * v_ac.getX()) + (v_ac.getY() * v_ac.getY()));
// 	Fixed	dotw((v_ab.getX() * v_ap.getX()) + (v_ab.getY() * v_ap.getY()));
// 	Fixed	dotuw((v_ac.getX() * v_ap.getX()) + (v_ac.getY() * v_ap.getY()));

// 	// Denominator
// 	Fixed	denominator((dotu * dotv) - (dotuw * dotuw));

// 	// barycentric coordinates
// 	Fixed	bcu(((dotv * dotw) - (dotuw * dotu)) / denominator);
// 	Fixed	bcv(((dotu * dotw) - (dotuw * dotv)) / denominator);

// 	// Fixed values to compare
// 	Fixed	zero(0);
// 	Fixed	one(1);

// 	// it looks like after all that calculations that it has to be bigger than 0
// 	// and combined smaller than 1?! But i do not really know why ....
// 	if (zero < bcu && bcu < one && zero < bcv && bcv < one && bcu + bcv < one)
// 		return (true);
// 	else
// 	{
// 		std::cout << "Vector AB = x: " << v_ab.getX() << " y: " << v_ab.getY() << std::endl;
// 		std::cout << "Vector AC = x: " << v_ac.getX() << " y: " << v_ac.getY() << std::endl;
// 		std::cout << "Vector AP = x: " << v_ap.getX() << " y: " << v_ap.getY() << std::endl;
// 		std::cout <<  "dotu " << dotu << std::endl;
// 		std::cout << "dotv " << dotv << std::endl;
// 		std::cout << "dotw " << dotw << std::endl;
// 		std::cout << "dotuw " << dotuw << std::endl;
// 		std::cout << "denominator = " << denominator << std::endl;
// 		std::cout << "bcu = " << bcu << " bcv = " << bcv << std::endl;
// 		return (false);
// 	}
// }
