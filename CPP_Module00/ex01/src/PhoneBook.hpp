/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 15:25:25 by rrupp             #+#    #+#             */
/*   Updated: 2023/06/23 13:50:12 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <iomanip>

# include "Contact.hpp"

# ifndef FIRST_NAME
#  define FIRST_NAME 0
# endif

# ifndef LAST_NAME
#  define LAST_NAME 1
# endif

# ifndef NICKNAME
#  define NICKNAME 2
# endif

# ifndef PHONE_NUMBER
#  define PHONE_NUMBER 3
# endif

# ifndef SECRET
#  define SECRET 4
# endif

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();

		void	AddToBook(void);
		void	PrintBook(void) const;
		void	SearchBook(void) const;

	private:
		Contact	_contact[8];
		int		_count;
		int		_ft_check_input(std::string tmp) const;
		void	_ft_print_info(int index) const;
};

#endif