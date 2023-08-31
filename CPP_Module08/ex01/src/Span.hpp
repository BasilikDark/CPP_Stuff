/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:11:58 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/31 10:48:52 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <algorithm>
# include <limits.h>

class Span
{
	public:
		/*Con- and Destructor's*/
		Span(unsigned int N = 0);
		Span(const Span &src);
		~Span();

		/*Operator Overload's*/
		Span &operator = (const Span &rhs);

		/*Memberfunctions*/
		void			addNumber(int nbr);
		template <typename T>
		void			addManyNumber(typename T::iterator &first, typename T::iterator &last) {
			for (typename T::iterator it = first; first < last; it++)
				addNumber(*it);
		}
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);
	private:
	
		/*Variables*/
		unsigned int	_N;
		unsigned int	_size;
		unsigned int	_shortestRange;
		std::vector<int>	_vec;

		/*exceptions*/
		class outOfBounce : public std::exception {
		virtual const char	*what() const throw();
		} bounce;
		class toLessValues : public std::exception {
		virtual const char	*what() const throw();
		} less;
};

/*Con- and Destructor's*/
Span::Span(unsigned int N) : _N(N), _size(0), _shortestRange(UINT_MAX){}

Span::Span(const Span &src) {*this = src;}

Span::~Span() {}

/*Operator Overload's*/
Span	&Span::operator = (const Span &rhs) {
	_vec = rhs._vec;
	_N = rhs._N;
	_size = rhs._size;
	return (*this);
}

/*Memberfunctions*/
void	Span::addNumber(int nbr) {
	if (++_size > _N)
		throw bounce;
	_vec.insert(std::upper_bound(_vec.begin(), _vec.end(), nbr), nbr);
	std::vector<int>::iterator it = find (_vec.begin(), _vec.end(), nbr);
	if (it + 1 != _vec.end())
		if (static_cast<unsigned int>(std::abs(*it - *(it + 1))) < _shortestRange)
			_shortestRange = std::abs(*it - *(it + 1));
	if (it != _vec.begin())
		if (static_cast<unsigned int>(std::abs(*it - *(it - 1))) < _shortestRange)
			_shortestRange = std::abs(*it - *(it - 1));
}

unsigned int	Span::shortestSpan() {
	return (_vec.size() < 2 ? throw less : _shortestRange);
}

unsigned int	Span::longestSpan() {
	return (_vec.size() < 2 ? throw less : std::abs(*(_vec.end() - 1) - *(_vec.begin())));
}

/*exceptions*/
const char	*Span::outOfBounce::what(void) const throw() {
	return ("Span::outOfBounceException");
}

const char	*Span::toLessValues::what(void) const throw() {
	return ("Span::toLessValuesException");
}

#endif
