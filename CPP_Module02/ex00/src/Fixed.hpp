/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 10:29:37 by rrupp             #+#    #+#             */
/*   Updated: 2023/06/28 11:31:20 by rrupp            ###   ########.fr       */
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

		Fixed	&operator = (const Fixed &rhs);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int					_fpnValue;
		static const int	_fractionalBits = 8;
};

#endif
