/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 11:02:28 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/05 11:30:00 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"
# include "Point.hpp"

void	printstuff(Point a, Point b, Point c, Point point)
{
		std::cout << "-------------------------------------" << std::endl;	
		std::cout << "Values of the triangle and the point!" << std::endl;
		std::cout << "-------------------------------------" << std::endl;	
		std::cout << "Point aX =" << a.getX() << std::endl;
		std::cout << "Point aY =" << a.getY() << std::endl;
		std::cout << std::endl;
		std::cout << "Point bX =" << b.getX() << std::endl;
		std::cout << "Point bY =" << b.getY() << std::endl;
		std::cout << std::endl;	
		std::cout << "Point cX =" << c.getX() << std::endl;
		std::cout << "Point cY =" << c.getY() << std::endl;
		std::cout << std::endl;
		std::cout << "Point pX =" << point.getX() << std::endl;
		std::cout << "Point pY =" << point.getY() << std::endl;
		std::cout << std::endl;
		std::cout << "Is the Point inside the Triangle?" << std::endl;
		if (bsp(a, b, c, point))
			std::cout << "yes" << std::endl;
		else
			std::cout << "no" << std::endl;
		std::cout << std::endl;
	}

int main(void)
{
	{
		Point	a(1, 1);
		Point	b(5, 5);
		Point	c(6, 1);
		Point	point(6, 2);

		printstuff(a, b, c, point);
	}
	{
		Point	a(1, 1);
		Point	b(5, 5);
		Point	c(6, 1);
		Point	point(5, 5);

		printstuff(a, b, c, point);
	}
	{
		Point	a(1, 1);
		Point	b(5, 5);
		Point	c(6, 1);
		Point	point(3, 3);

		printstuff(a, b, c, point);
	}
	{
		Point	a(1, 1);
		Point	b(5, 5);
		Point	c(6, 1);
		Point	point(4, 2);

		printstuff(a, b, c, point);
	}
	return (0);
}