/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 14:24:08 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/19 10:39:10 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char *argv[]) {
	if (argc == 2)
		ScalarConverter::convert(argv[1]);
	else
		std::cout << "Wrong number of args!" << std::endl;
	return (0);
}