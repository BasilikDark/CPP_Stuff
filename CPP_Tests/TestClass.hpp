/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TestClass.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 12:27:16 by rrupp             #+#    #+#             */
/*   Updated: 2023/05/21 15:10:35 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTCLASS_HPP
# define TESTCLASS_HPP

# include <iostream>

class	TestClass
{
	public:
		int	foo; // This should probaply be private as well depending on the context!!

		TestClass();
		~TestClass();

		void	bar(void) const;
		int		get_private(void) const;
		void	set_private(int v);
		int		comp_private(TestClass *other) const;
		int		get_count(void) const;
	
	private:
		int			_private = 0;
		static int	_count;
};

#endif