/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:29:37 by rrupp             #+#    #+#             */
/*   Updated: 2023/06/08 13:52:13 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cstring>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const &src);
		~Fixed();

		Fixed	&operator=(Fixed const &rhs);
	private:
		int					_fpnValue;
		static const int	fractionalBits = 8;
};

Fixed::Fixed(void)
{
	std::cout << "Default Constructor called!" << std::endl;
	this->_fpnValue = 0;

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

#endif