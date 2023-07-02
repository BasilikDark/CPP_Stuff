/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 13:59:13 by rrupp             #+#    #+#             */
/*   Updated: 2023/07/02 11:09:18 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

// That is not a really bsp solution to the given problem
// It is a concept called barycentric coordinates.
// i found that concept with google and implemented it in C++ code 
// with my "own" Fixed Point number Variable!!

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	// Vector calculations...
	Point	v_ab(b.getX().toFloat() - a.getX().toFloat(), b.getY().toFloat() - a.getY().toFloat());
	Point	v_ac(c.getX().toFloat() - a.getX().toFloat(), c.getY().toFloat() - a.getY().toFloat());
	Point	v_ap(point.getX().toFloat() - a.getX().toFloat(), point.getY().toFloat() - a.getY().toFloat());

	// Dot product stuff 
	Fixed	dotu((v_ab.getX() * v_ab.getX()) + (v_ab.getY() * v_ab.getY()));
	Fixed	dotv((v_ac.getX() * v_ac.getX()) + (v_ac.getY() * v_ac.getY()));
	Fixed	dotw((v_ab.getX() * v_ap.getX()) + (v_ab.getY() * v_ap.getY()));
	Fixed	dotuw((v_ac.getX() * v_ap.getX()) + (v_ac.getY() * v_ap.getY()));

	// Denominator
	Fixed	denominator((dotu * dotv) - (dotuw * dotuw));
	
	// barycentric coordinates
	Fixed	bcu(((dotv * dotw) - (dotuw * dotu)) / denominator);
	Fixed	bcv(((dotu * dotw) - (dotuw * dotv)) / denominator);

	// Fixed values to compare
	Fixed	zero(0);
	Fixed	one(1);

	// it looks like after all that calculations that it has to be bigger than 0
	// and combined smaller than 1?! But i do not really know why ....
	if (zero < bcu && bcu < one && zero < bcv && bcv < one && bcu + bcv < one)
		return (true);
	else
	{
		std::cout << "Vector AB = x: " << v_ab.getX() << " y: " << v_ab.getY() << std::endl;
		std::cout << "Vector AC = x: " << v_ac.getX() << " y: " << v_ac.getY() << std::endl;
		std::cout << "Vector AP = x: " << v_ap.getX() << " y: " << v_ap.getY() << std::endl;
		std::cout <<  "dotu " << dotu << std::endl;
		std::cout << "dotv " << dotv << std::endl;
		std::cout << "dotw " << dotw << std::endl;
		std::cout << "dotuw " << dotuw << std::endl;
		std::cout << "denominator = " << denominator << std::endl;
		std::cout << "bcu = " << bcu << " bcv = " << bcv << std::endl;
		return (false);
	}
}
