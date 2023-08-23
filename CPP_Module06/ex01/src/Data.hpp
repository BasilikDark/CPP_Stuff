/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 14:36:47 by rrupp             #+#    #+#             */
/*   Updated: 2023/08/22 14:51:29 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

class Data
{
	public:
		/*Con- and Destructor's*/
		Data();
		Data(const Data &src);
		~Data();
	
		/*Operator Overload's*/
		Data	&operator = (const Data &rhs);
	
		/*Memberfunctions*/
		void	blub(void) const;
	
	private:
		std::string	_blub;
};

#endif