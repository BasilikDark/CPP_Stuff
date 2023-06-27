/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 14:30:17 by rrupp             #+#    #+#             */
/*   Updated: 2023/06/27 17:03:50 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <cstdio>
# include <fstream>
# include <iosfwd>

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
		void	helper_fillfile(std::ifstream &input, std::ofstream &output);
};

#endif