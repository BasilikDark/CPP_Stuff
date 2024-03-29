/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 14:26:33 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/29 13:32:51 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iterator>
# include <exception>
# include <iostream>

template <typename T>
typename T::iterator	easyfind(T &container, int toFind) {
	typename T::iterator it = std::find(container.begin(), container.end(), toFind);
	return (it == container.end() ? throw std::runtime_error("easyfind::not contained") : it);
}

#endif
