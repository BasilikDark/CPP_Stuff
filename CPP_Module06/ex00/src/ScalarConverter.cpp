/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 10:02:57 by rrupp             #+#    #+#             */
/*   Updated: 2023/09/07 14:09:08 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

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

/*Helperfunction's*/
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
	if ((value <= std::numeric_limits<float>::max() && value >= (std::numeric_limits<float>::max() * -1 - 1)) || !std::isfinite(static_cast<float> (value)))
		std::cout << static_cast <float> (value) << "f" << std::endl;
	else
		std::cout << "impossible" << std::endl;
	std::cout << "double: ";
	std::cout << value << std::endl;
}

void	input_check(std::string toConvert) {
	int	check_input = 0;
	int dot_count = 0;
	
	if (toConvert.size() <= 1)
		return ;
	if (toConvert[0] == '+' || toConvert[0] == '-')
		check_input++;
	while (std::isdigit(toConvert[check_input]) || toConvert[check_input] == '.') {
		if (toConvert[check_input] == '.')
			dot_count++;
		check_input++;
	}
	if (dot_count > 1)
		throw std::runtime_error("This is not a valid Input");
	if (toConvert[check_input])
		throw std::runtime_error("This is not a valid Input");
}

/*static Memberfunction's*/
void	ScalarConverter::convert(std::string toConvert) {
	double	value;
	int		precision;
	value = strtod(toConvert.c_str(), NULL);
	input_check(toConvert);
	if (value == 0 && toConvert[0] != '0')
		value = toConvert[0];
	precision = countAfterComma(toConvert);
	printShit(value, precision);
}
