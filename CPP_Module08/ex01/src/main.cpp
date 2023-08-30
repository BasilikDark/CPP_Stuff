/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:03:14 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/30 16:49:41 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

int	main(void) {
	
	Span	blub(3);
	try {
		blub.addNumber(-10);
		blub.addNumber(10);
		blub.addNumber(9);
		std::cout << blub.shortestSpan() << std::endl;
		std::cout << blub.longestSpan() << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return (0);
}