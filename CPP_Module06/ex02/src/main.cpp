/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:00:36 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/23 11:18:31 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>


Base	*generate(void) {
	int rand = std::rand() % 3;
	Base	*base;
	switch (rand)
	{
		case (0):
		base = new A;
		return (base);
		case (1):
		base = new B;
		return (base);
		case (2):
		base = new C;
		return (base);
	default:
		break ;
	}
	return (NULL);
}

void	identify(Base *p) {
	if (dynamic_cast<A*> (p))
		std::cout << "This is a pointer to A" << std::endl;
	else if (dynamic_cast<B*> (p))
		std::cout << "This is a pointer to B" << std::endl;
	else if (dynamic_cast<C*> (p))
		std::cout << "This is a pointer to C" << std::endl;
	else
		std::cout << "This could be anything :)" << std::endl;
}

void	identify(Base &p) {
	Base base;
	try {(void)dynamic_cast<A&> (p);
		std::cout << "This is a reference to A" << std::endl;
		return ;
	}
	catch (std::exception &e) {}
	try {(void)dynamic_cast<B&> (p);
		std::cout << "This is a reference to B" << std::endl;
		return ;
	}
	catch (std::exception &e) {}
	try {(void)dynamic_cast<C&> (p);
		std::cout << "This is a reference to C" << std::endl;
		return ;
	}
	catch (std::exception &e) {}
	std::cout << "This could be anything :)" << std::endl;
}

int main(void) {
	std::srand(std::time(NULL));
	Base	*arr[10];

	for (int i = 0; i < 10; i++)
		arr[i] = generate();
	std::cout << "Checking over Pointers" << std::endl;
	for (int i = 0; i < 10; i++)
		identify(arr[i]);
	std::cout << std::endl;
	std::cout << "Checking over References" << std::endl;
	for (int i = 0; i < 10; i++)
		identify(*(arr[i]));
	std::cout << std::endl;
	
	Base	*a = new A;
	Base	*b = new B;
	Base	*c = new C;
	
	std::cout << "Checking over Pointers" << std::endl;
	identify(a);
	identify(b);
	identify(c);
	std::cout << std::endl;
	std::cout << "Checking over References" << std::endl;
	identify(*a);
	identify(*b);
	identify(*c);

	for (int i = 0; i < 10; i++)
		delete arr[i];
	delete a;
	delete b;
	delete c;
	return (0);
}
