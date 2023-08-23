/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 11:29:12 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/23 11:46:16 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void	swap(T &a, T &b) {
	T tmp;
	tmp = b;
	b = a;
	a = tmp;
	return ;
}

template <typename T>
const T	&min(const T &a, const T &b) {
	return (a <= b ? a : b);	
}

template <typename T>
const T	&max(const T &a, const T &b) {
	return (a >= b ? a : b);
}

#endif