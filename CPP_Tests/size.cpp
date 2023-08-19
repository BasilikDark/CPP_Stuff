/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 14:10:39 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/18 14:13:26 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int	main() {
	std::cout << "Size of char: " << sizeof(char) << std::endl;
	std::cout << "Size of int: " << sizeof(int) << std::endl;
	std::cout << "Size of float: " << sizeof(float) << std::endl;
	std::cout << "Size of double: " << sizeof(double) << std::endl;
}