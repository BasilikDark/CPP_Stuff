/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 16:05:11 by rrupp             #+#    #+#             */
/*   Updated: 2023/09/07 16:14:43 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <deque>

template <typename T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
	public:
		/*Con- and Destructor's*/
		MutantStack() {};
		MutantStack(const MutantStack &src) {*this = src;};
		~MutantStack() {};

		/*Operator Overload's*/
		MutantStack	&operator = (const MutantStack &rhs) {this->c = rhs.c;};
		typedef typename Container::iterator iterator;
		typedef typename Container::const_iterator const_iterator;
		iterator begin() {return (this->c.begin());}
		iterator end() {return (this->c.end());}
	private:
};

#endif