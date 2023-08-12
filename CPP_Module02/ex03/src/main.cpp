/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 11:02:28 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/12 10:21:18 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"
# include "Point.hpp"

void	printstuff(Point a, Point b, Point c, Point point) {
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

int main(void){
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
	/*some before Fixed Tests :)*/
	// {
	// 	Fixed	a;
	// 	Fixed	b(a);
	// 	Fixed	c;

	// 	c = b;
	// 	std::cout << a.getRawBits() << std::endl;
	// 	std::cout << b.getRawBits() << std::endl;
	// 	std::cout << c.getRawBits() << std::endl;
	// 	std::cout << std::endl << std::endl;
	// }
	// {
	// 	Fixed a;
	// 	Fixed const b( 10 );
	// 	Fixed const c( 42.42f );
	// 	Fixed const d( b );

	// 	a = Fixed( 1234.4321f );
	// 	std::cout << "a is " << a << std::endl;
	// 	std::cout << "b is " << b << std::endl;
	// 	std::cout << "c is " << c << std::endl;
	// 	std::cout << "d is " << d << std::endl;
	// 	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	// 	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	// 	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	// 	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	// }
	// {
	// 	Fixed a;

	// 	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	// 	std::cout << a << std::endl;
	// 	std::cout << ++a << std::endl;
	// 	std::cout << a << std::endl;
	// 	std::cout << a++ << std::endl;
	// 	std::cout << a << std::endl;
	// 	std::cout << b << std::endl;
	// 	std::cout << Fixed::max( a, b ) << std::endl;
	// }
	return (0);
}