/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.Sed.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 14:30:17 by rrupp             #+#    #+#             */
/*   Updated: 2023/06/04 16:02:43 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_SED_HPP
# define CLASS_SED_HPP

# include <iostream>
# include <fstream>
# include <cstring>

class Sed
{
	public:
		Sed(std::string inFile, std::string str1, std::string str2);
		~Sed();
		int	replace(void);

	private:
		std::string _inFile;
		std::string	_str1;
		std::string	_str2;
		std::string	_outfile;
};

#endif