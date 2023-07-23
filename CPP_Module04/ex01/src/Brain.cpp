/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 09:47:00 by rrupp             #+#    #+#             */
/*   Updated: 2023/07/22 09:48:04 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Constructor called" << std::endl;
	for (int i = 0; i < IDEAS; i++)
	{
		this->_ideas[i] = "";
	}
}

Brain::Brain(const Brain &src)
{
	std::cout << "Brain Copyconstructor called" << std::endl;
	for (int i = 0; i < IDEAS; i++)
	{
		this->_ideas[i] = src._ideas[i];
	}
}

Brain	&Brain::operator = (const Brain &rhs)
{
	std::cout << "Brain Copy operator called" << std::endl;
	for (int i = 0; i < IDEAS; i++)
	{
		this->_ideas[i] = rhs._ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Deconstructor called" << std::endl;
}
