/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 11:02:28 by rrupp             #+#    #+#             */
/*   Updated: 2023/07/02 11:19:46 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"
# include "Point.hpp"

int main(void)
{
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
	Point	a(1, 1);
	Point	b(5, 5);
	Point	c(6, 1);
	Point	point(4, 2.33);
	


	if (bsp(a, b, c, point))
		std::cout << "yes" << std::endl;
	else
		std::cout << "no" << std::endl;
}