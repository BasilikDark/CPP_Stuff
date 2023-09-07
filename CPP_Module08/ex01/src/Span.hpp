/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:11:58 by rrupp             #+#    #+#             */
/*   Updated: 2023/09/06 15:49:51 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <limits.h>

class Span
{
public:
	/*Con- and Destructor's*/
	Span(unsigned int N = 0);
	Span(const Span &src);
	~Span();

	/*Operator Overload's*/
	Span &operator=(const Span &rhs);

	/*Memberfunctions*/
	void addNumber(int nbr);
	template <class iter>
	void addManyNumber(iter first, iter last) {
		for (iter it = first; it != last; it++)
			addNumber(*it);
	}
	unsigned int shortestSpan(void);
	unsigned int longestSpan(void);

private:
	/*Variables*/
	unsigned int _N;
	unsigned int _size;
	unsigned int _shortestRange;
	std::vector<int> _vec;

	/*exceptions*/
	class outOfBounce : public std::exception { virtual const char *what() const throw(); } bounce;
	class toLessValues : public std::exception { virtual const char *what() const throw(); } less;
};

#endif
