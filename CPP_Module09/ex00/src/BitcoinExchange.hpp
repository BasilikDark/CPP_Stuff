/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 10:58:48 by rrupp             #+#    #+#             */
/*   Updated: 2023/09/13 16:13:49 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <cstdlib>
# include <fstream>
# include <map>
# include <ctime>

class BitcoinExchange
{
	public:
		/*Con- and Destructor's*/
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &src);
		~BitcoinExchange();

		/*Operator Overload's*/
		BitcoinExchange	&operator = (const BitcoinExchange &rhs);

		/*Memberfunction's*/
		void	exchange(std::string in_file);
		void	lineExchange(std::string);
		void	checkFile(std::string in_file);
		void	checkLine(std::string line, char delim);
		void	checkSyntax(std::string line, char delim);
		void	checkDate(std::string line);
		void	saveFile(std::string file);

	private:
		std::map<std::string, double>	coinMap;
		std::string						data_file;
		class SyntaxException : public std::exception {
			virtual const char	*what() const throw();
		} syntax;
		class FileException : public std::exception {
			virtual const char	*what() const throw();
		} file;
		class DateException : public std::exception {
			virtual const char	*what() const throw();
		} date;
};

#endif