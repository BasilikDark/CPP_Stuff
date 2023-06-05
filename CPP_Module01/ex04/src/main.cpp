/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 14:17:46 by rrupp             #+#    #+#             */
/*   Updated: 2023/06/04 16:02:33 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Class.Sed.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "The right command would be something like: './sed <in_file> <string_to_serch> <string_to_replace>'" << std::endl;
		return(0);
	}
	Sed	sed(argv[1], argv[2], argv[3]);
	if(sed.replace())
		return (1);
	return (0);
}
