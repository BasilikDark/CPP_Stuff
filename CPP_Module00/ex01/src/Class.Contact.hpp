/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.Contact.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 15:28:00 by rrupp             #+#    #+#             */
/*   Updated: 2023/05/21 17:41:03 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_CONTACT_HPP
# define CLASS_CONTACT_HPP

# include <iostream>

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

class	Contact
{
	public:
		char	first_name[11];

		Contact();
		~Contact();

		char	*get_cont(int check, char *tmp);
		void	add_contact(void);

	private:
	//	char	*_last_name;
	//	char	*_nickname;
	//	char	*_phone_number;
	//	char	*_darkest_secret;
};

#endif