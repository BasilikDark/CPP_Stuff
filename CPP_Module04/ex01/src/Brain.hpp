/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 15:03:48 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/12 14:52:01 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

# define IDEAS 100

class Brain
{
	public:
		/*Con- and Desructor's*/
		Brain();
		Brain(const Brain &src);
		~Brain();

		/*Operator Overload's*/
		Brain	&operator = (const Brain &rhs);

		/*Getter and Setter*/
		std::string	getFirstIdea(void) const;
		std::string	getSpecificIdea(unsigned int idx) const;
		void		setIdea(const std::string idea);
		void		setIndexIdea(unsigned int idx, const std::string idea);

	private:
		/*Variables*/
		std::string	_ideas[IDEAS];
};

#endif
