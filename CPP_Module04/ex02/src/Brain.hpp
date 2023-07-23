/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 15:03:48 by rrupp             #+#    #+#             */
/*   Updated: 2023/07/22 09:47:40 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

# define IDEAS 100

class Brain
{
	public:
		Brain();
		Brain(const Brain &src);

		Brain	&operator = (const Brain &rhs);

		~Brain();
	protected:
		std::string	_ideas[IDEAS];
};

#endif
