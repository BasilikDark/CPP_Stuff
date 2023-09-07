/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:48:57 by rrupp             #+#    #+#             */
/*   Updated: 2023/09/06 15:52:22 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*Con- and Destructor's*/
Span::Span(unsigned int N) : _N(N), _size(0), _shortestRange(UINT_MAX) {}

Span::Span(const Span &src) { *this = src; }

Span::~Span() {}

/*Operator Overload's*/
Span &Span::operator=(const Span &rhs) {
	_vec = rhs._vec;
	_N = rhs._N;
	_size = rhs._size;
	return (*this);
}

/*Memberfunctions*/
void Span::addNumber(int nbr) {
	if (++_size > _N)
		throw bounce;
	_vec.insert(std::upper_bound(_vec.begin(), _vec.end(), nbr), nbr);
	std::vector<int>::iterator it = find(_vec.begin(), _vec.end(), nbr);
	if (it + 1 != _vec.end())
		if (static_cast<unsigned int>(std::abs(*it - *(it + 1))) < _shortestRange)
			_shortestRange = std::abs(*it - *(it + 1));
	if (it != _vec.begin())
		if (static_cast<unsigned int>(std::abs(*it - *(it - 1))) < _shortestRange)
			_shortestRange = std::abs(*it - *(it - 1));
}

unsigned int Span::shortestSpan() {
	return (_vec.size() < 2 ? throw less : _shortestRange);
}

unsigned int Span::longestSpan() {
	return (_vec.size() < 2 ? throw less : std::abs(*(_vec.end() - 1) - *(_vec.begin())));
}

/*exceptions*/
const char *Span::outOfBounce::what(void) const throw() {
	return ("Span::outOfBounceException");
}

const char *Span::toLessValues::what(void) const throw() {
	return ("Span::toLessValuesException");
}
