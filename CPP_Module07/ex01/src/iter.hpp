/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:57:10 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/23 15:16:52 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void	iter(T *arr, unsigned int lenth, void (*func)(T &i)) {
	for (unsigned int i = 0; i < lenth; i++)
		func(arr[i]);
}

template <typename T>
void	iter(const T *arr, unsigned int lenth, void (*func)(const T &i)) {
	for (unsigned int i = 0; i < lenth; i++)
		func(arr[i]);
}

#endif