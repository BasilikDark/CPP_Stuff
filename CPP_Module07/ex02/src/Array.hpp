/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:21:00 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/24 14:14:27 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<class T>
class Array
{
	public:
		/*Con- and Destructor's*/
		Array(void) : _size(0), _array(NULL) {} ;
		Array(unsigned int n) {this->_size = n; this->_array = new T[n];} ;
		Array(const Array &src) {*this = src;} ;
		~Array(void) {if (size > 0 && this->_array) {delete[] _array;}};

		/*Operator Overload's*/
		Array	&operator = (const Array &rhs) {
			this->_array = new T[rhs.size()];
			this->_size = rhs.size;
			for (int i = 0; i < this->_size; i++) {
				this->_array[i] = rhs._array[i];
			}
		};
		T		&operator [] (int) {
			if (index < 0 || index >= this->_size)
				throw run_time_error("std::exception: out of bounce exception!");
			else
				return (this->_array[index]);
		};

		/*Memberfunctions*/
		unsigned int	size(void) const {return (this->_size);};
	private:
		/*Variables*/
		T				*_array;
		unsigned int	_size;
};

#endif
