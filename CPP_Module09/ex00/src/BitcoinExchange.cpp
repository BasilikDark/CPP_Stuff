/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:07:42 by rrupp             #+#    #+#             */
/*   Updated: 2023/09/13 17:42:19 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
/*Con- and Destructor's*/
BitcoinExchange::BitcoinExchange() : data_file("data.csv") {
	checkFile(data_file);
	saveFile(data_file);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src) {*this = src;}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &rhs) {(void)rhs;return(*this);}

void	BitcoinExchange::exchange(std::string in_file) {
	std::ifstream	input;
	std::string		line;

	input.open(in_file.c_str());
	if(!input.is_open())
		throw file;
	std::getline(input, line);
	while (std::getline(input, line)) {
		if (!line.empty()) {
			try {checkLine(line, '|');}
			catch (std::exception &e) {
				std::cout << "Error: bad input => " << line << std::endl;
				continue ;
			}
			lineExchange(line);
		}
	}
	input.close();
}

void	BitcoinExchange::lineExchange(std::string line) {
	std::string	key = line.substr(0, line.find(' '));
	double		value = strtod(line.substr(line.find('|') + 2).c_str(), NULL);
	if (value > 1000) {
		std::cout << "Error: too large a number." << std::endl;
		return ;
	}
	if (value < 0) {
		std::cout << "Error: not a positive number." << std::endl;
		return ;
	}
	// THAT SHIT IS SOMEHOW WRONG I WONDER HOW TO MAKE IT WRITE!!!!?????!!!!!
	std::map<std::string, double>::iterator it = coinMap.lower_bound(key);
	std::cout << key << " => " << value << " = " << value * it->second << std::endl;
}

void	BitcoinExchange::saveFile(std::string file) {
	std::string		line;
	std::ifstream	input;

	input.open(file.c_str());
	if (!input.is_open())
		throw file;
	while (std::getline(input, line))
		coinMap[line.substr(0, line.find(','))] = strtod(&line[11], NULL);
	input.close();
}

void	BitcoinExchange::checkFile(std::string file) {
	std::string		line;
	std::ifstream	input;

	input.open(file.c_str());
	if (!input.is_open())
		throw file;
	std::getline(input, line);
	while (std::getline(input, line)) {
		if (!line.empty())
			checkLine(line, ',');
	}
	input.close();
}

void	BitcoinExchange::checkLine(std::string line, char delim) {
	checkSyntax(line, delim);
	checkDate(line);
}

void	BitcoinExchange::checkSyntax(std::string line, char delim) {
	int checkForMinus = 0;
	std::size_t found = line.find(delim);
	if (found == std::string::npos)
		throw syntax;
	for (int i = 0; line[i] && static_cast <std::size_t> (i) < found; i++)
		if (line[i] == '-')
			checkForMinus++;
	if (checkForMinus != 2)
		throw syntax;
	std::string checkRest(&line[found]);
	if (checkRest.size() < 1)
		throw syntax;
}

void	BitcoinExchange::checkDate(std::string line) {
	time_t	timeT;
	time(&timeT);
	struct tm	*timeToCheck = localtime(&timeT);
	timeToCheck->tm_year = strtol(line.c_str(), NULL, 10);
	timeToCheck->tm_mon = strtol(&line.c_str()[5], NULL, 10) - 1;
	timeToCheck->tm_mday = strtol(&line.c_str()[8], NULL, 10);
	if (mktime(timeToCheck) == -1)
		throw date;
}

const char	*BitcoinExchange::SyntaxException::what(void) const throw() {return ("BitcoinExchange::SyntaxException");}

const char	*BitcoinExchange::FileException::what(void) const throw() {return ("BitcoinExchange::FileException");}

const char	*BitcoinExchange::DateException::what(void) const throw() {return ("BitcoinExchange::DateException");}
