/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 15:17:22 by rrupp             #+#    #+#             */
/*   Updated: 2023/05/21 17:49:41 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(void)
{
	Contact	contact;
	char	tmp[11];

	contact.add_contact();
	std::cout << contact.get_cont(FIRST_NAME, tmp) << std::endl;
	return (0);
}
