/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 15:30:58 by rrupp             #+#    #+#             */
/*   Updated: 2023/06/29 16:06:30 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class	Point
{
	public:
		Point();
		~Point();

	private:
		Fixed const	x;
		Fixed const	y;
};

Point::Point()
{
}

Point::~Point()
{
}


#endif