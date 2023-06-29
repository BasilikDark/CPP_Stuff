/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:29:37 by rrupp             #+#    #+#             */
/*   Updated: 2023/06/29 15:27:36 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cstring>
# include <cmath>

class Fixed
{
	public:
		Fixed(void);
		Fixed(const int value);
		Fixed(const float value);
		Fixed(Fixed const &src);
		~Fixed();

		Fixed				&operator = (const Fixed &rhs);
		bool				operator > (const Fixed &rhs);
		bool				operator < (const Fixed &rhs);
		bool				operator >= (const Fixed &rhs);
		bool				operator <= (const Fixed &rhs);
		bool				operator == (const Fixed &rhs);
		bool				operator != (const Fixed &rhs);
		Fixed				operator + (const Fixed &rhs);
		Fixed				operator - (const Fixed &rhs);
		Fixed				operator * (const Fixed &rhs);
		Fixed				operator / (const Fixed &rhs);
		Fixed				operator ++ (int);
		Fixed				&operator ++ (void);
		Fixed				operator -- (int);
		Fixed				&operator -- (void);
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;
		static Fixed		&min(Fixed &a, Fixed &b);
		static Fixed const	&min(Fixed const &a, Fixed const &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		static Fixed const	&max(Fixed const &a, Fixed const &b);

	private:
		int					_fpnValue;
		static const int	_fractionalBits = 8;
};

	std::ostream	&operator << (std::ostream &os, const Fixed &rhs);

#endif
