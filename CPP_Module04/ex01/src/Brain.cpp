/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 09:47:00 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/12 15:09:00 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*Con- and Destructor's*/
Brain::Brain() {
	std::cout << "Brain Constructor called" << std::endl;
	for (int i = 0; i < IDEAS; i++)
		this->_ideas[i] = "";
}

Brain::Brain(const Brain &src) {
	*this = src;
}

Brain::~Brain() {
	std::cout << "Brain Deconstructor called" << std::endl;
}

/*Operator Overload's*/
Brain	&Brain::operator = (const Brain &rhs){
	for (int i = 0; i < IDEAS; i++)
		this->_ideas[i] = rhs._ideas[i];
	return (*this);
}

/*Getter and Setter*/
std::string	Brain::getFirstIdea(void) const {
	for (int i = 0; i < IDEAS; i++)
		if (this->_ideas[i] != "")
			return (_ideas[i]);
	return ("");
}

std::string	Brain::getSpecificIdea(unsigned int idx) const {
	if (idx < IDEAS)
		return (this->_ideas[idx]);
	return ("");
}

void	Brain::setIdea(const std::string idea) {
	for (int i = 0; i < IDEAS; i++) {
		if (this->_ideas[i] == "") {
			this->_ideas[i] = idea;
			break ;
		}
	}
}

void	Brain::setIndexIdea(unsigned int idx, const std::string idea) {
	if (idx < IDEAS)
		this->_ideas[idx] = idea;
}
