/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:28:40 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/12 15:19:24 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

#define SIZE 10

int main(void)
{
	// AAnimal	*meta[SIZE];
	// for (int i = 0; i < SIZE; i++)
	// {
	// 	if (i % 2)
	// 		meta[i] = new Dog();
	// 	else
	// 		meta[i] = new Cat();
	// }
	// for (int i = 0; i < SIZE; i++)
	// 	meta[i]->makeSound();
	// for (int i = 0; i < SIZE; i++)
	// 	delete meta[i];
	// Brain	brain;
	// for (int i = 0; i < SIZE; i++)
	// 	brain.setIdea("blub");
	// brain.setIndexIdea(50, "Ultrablub");
	// Brain	brain2(brain);
	// for (unsigned int i = 0; i < SIZE + 2; i++)
	// 	std::cout << i << ": " << (brain.getSpecificIdea(i)) << std::endl;
	// std::cout << brain2.getSpecificIdea(50) << std::endl;
	// return (0);
	// const AAnimal* meta = new AAnimal();
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); 
	j->makeSound();
	// meta->makeSound();

	// delete meta;
	delete j;
	delete i;
	return (0);
}