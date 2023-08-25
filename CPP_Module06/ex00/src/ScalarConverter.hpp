/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:53:24 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/19 16:50:05 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <cstdlib>
# include <limits>
# include <math.h>

class ScalarConverter
{
	public:
		/*Con- and Desuctor's*/
		ScalarConverter();
		ScalarConverter(const ScalarConverter &src);
		virtual ~ScalarConverter() = 0;

		/*Operator Overload's*/
		ScalarConverter	&operator = (const ScalarConverter &rhs);
		static void	convert(std::string toConvert);		
	private:
};

/*Con- and Destructor*/
ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &src) {(void)src;}

ScalarConverter::~ScalarConverter() {}

/*Operator Overload's*/
ScalarConverter	&ScalarConverter::operator = (const ScalarConverter &rhs) {(void)rhs;return (*this);}

static int	countAfterComma(std::string toConvert) {
	int			precision = 0;
	std::size_t	i = toConvert.find_first_of('.');
	if (i == std::string::npos)
		return (precision = 1);
	while (toConvert[++i] && std::isdigit(toConvert[i])) {
		precision++;
	}
	if (precision == 0)
		precision++;
	return (precision);
}

static void	printShit(double value, int precision) {
	std::cout.precision(precision);
	std::cout << std::fixed;
	std::cout << "char: ";
	if (value <= std::numeric_limits<char>::max() && value >= std::numeric_limits<char>::min()) {
		if (std::isprint(static_cast <char> (value)))
			std::cout << static_cast <char> (value) << std::endl;
		else
			std::cout << "Non displayable!" << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
	std::cout << "int: ";
	if (value <= std::numeric_limits<int>::max() && value >= std::numeric_limits<int>::min())
		std::cout << static_cast <int> (value) << std::endl;
	else
		std::cout << "impossible" << std::endl;
	std::cout << "float: ";
	if ((value <= std::numeric_limits<float>::max() && value >= (std::numeric_limits<float>::max() * -1 - 1)) || !std::isfinite(value))
		std::cout << static_cast <float> (value) << "f" << std::endl;
	else
		std::cout << "impossible" << std::endl;
	std::cout << "double: ";
	std::cout << value << std::endl;
}

void	ScalarConverter::convert(std::string toConvert) {
	double	value;
	int		precision;
	value = strtod(toConvert.c_str(), NULL);
	if (value == 0 && toConvert[0] != '0')
		value = toConvert[0];
	precision = countAfterComma(toConvert);
	printShit(value, precision);
}

#endif