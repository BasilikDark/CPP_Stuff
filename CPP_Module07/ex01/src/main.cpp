/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:15:29 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/23 15:19:43 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

void	printit(int &i) {
	std::cout << i << std::endl;
}

void	increment(int &i) {
	i++;
}

int	main() {
	int arr[5];
	for (int i = 0; i < 5; i++)
		arr[i] = i;
	::iter(arr, (unsigned int)5, &printit);
	::iter(arr, (unsigned int)5, &increment);
	::iter(arr, (unsigned int)5, &printit);
}
