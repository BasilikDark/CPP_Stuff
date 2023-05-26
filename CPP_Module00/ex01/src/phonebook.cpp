/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 15:17:22 by rrupp             #+#    #+#             */
/*   Updated: 2023/05/26 16:21:12 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(void)
{
	Contact	contact;
	Contact contact1;

	contact.add_contact();
	contact1.add_contact();
	contact.print_bookline();
	contact1.print_bookline();
	return (0);
}
