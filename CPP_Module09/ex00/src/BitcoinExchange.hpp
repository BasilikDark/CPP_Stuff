/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 10:58:48 by rrupp             #+#    #+#             */
/*   Updated: 2023/09/15 13:37:21 by rrupp            ###   ########.fr       */
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

	private:
		/*Private Memberfunction's*/
		void	lineExchange(std::string);
		void	checkSyntax(std::string line, char delim);
		void	checkFile(std::string in_file);
		time_t	checkLine(std::string line, char delim);
		// void	saveFile(std::string file);
		
		/*Private Variable's*/
		std::map<time_t, double>	coinMap;
		std::string					data_file;
		struct tm					*start;

		/*Exception's*/
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