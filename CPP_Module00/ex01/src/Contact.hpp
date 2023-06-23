/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 15:28:00 by rrupp             #+#    #+#             */
/*   Updated: 2023/06/23 13:50:20 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

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

class	Contact
{
	public:

		Contact();
		~Contact();

		std::string	get_string(int check) const;
		void		add_contact(int index);
		void		print_bookline(void) const;

	private:
		int			_index;
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
		std::string	_buff;
		std::string _formatstr(const std::string &field) const;
		void		_save_string(const std::string text);
};

#endif