/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 14:18:57 by rrupp             #+#    #+#             */
/*   Updated: 2023/09/15 17:09:01 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <stack>
# include <iostream>

class RPN
{
	public:
		/*Con- and Destructor's*/
		RPN();
		RPN(const RPN &src);
		~RPN();

		/*Operator Overload's*/
		RPN	&operator = (const RPN &rhs);

		/*Memberfunction's*/
		void		PushToStack(const int number);
		void		popCal(std::string operation);
		std::size_t	stackSize(void) const;
		void		result(void) const;

	private:
		std::stack<int>	numbersToCalculate;
		class CalculatorException : public std::exception {virtual const char	*what() const throw();} cal;
};

#endif