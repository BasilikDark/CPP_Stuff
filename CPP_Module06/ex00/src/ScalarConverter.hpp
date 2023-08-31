/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:53:24 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/31 13:10:58 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <cstdlib>
# include <limits>
# include <math.h>
# include <cstring>

class ScalarConverter
{
	public:
		/*static Memberfunctions*/
		static void	convert(std::string toConvert);		
	
	private:
		/*Con- and Desuctor's*/
		ScalarConverter();
		ScalarConverter(const ScalarConverter &src);
		virtual ~ScalarConverter() = 0;

		/*Operator Overload's*/
		ScalarConverter	&operator = (const ScalarConverter &rhs);
};


#endif
