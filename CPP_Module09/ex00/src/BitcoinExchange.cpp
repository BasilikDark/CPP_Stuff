/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:07:42 by rrupp             #+#    #+#             */
/*   Updated: 2023/10/13 15:58:16 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
/*Con- and Destructor's*/
BitcoinExchange::BitcoinExchange() : data_file("data.csv") {
	time_t	timeT;
	time(&timeT);
	start = localtime(&timeT);
	if (data_file.empty())
		throw std::runtime_error("datafile");
	checkFile(data_file);
	
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src) {*this = src;}

BitcoinExchange::~BitcoinExchange() {}

/*operaor Overload's*/
BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &rhs) {(void)rhs;return(*this);}

/*Memberfunction's*/
void	BitcoinExchange::exchange(std::string in_file) {
	std::ifstream	input;
	std::string		line;
	int				i = 0;

	if (in_file.empty())
		throw file;
	input.open(in_file.c_str());
	if(!input.is_open())
		throw file;
	while (std::getline(input, line)) {
		if (line == "date | value" && i++ == 0)
			continue ;
		if (!line.empty())
			lineExchange(line);		
	}
	input.close();
}

/*Private Memberfunction's*/
void	BitcoinExchange::lineExchange(std::string line) {
	try {
		time_t	key = checkLine(line, '|');
		double	value = strtod(line.substr(line.find('|') + 2).c_str(), NULL);
		if (value > 1000)
			std::cout << "Error: too large a number." << std::endl;
		else if (value < 0)
			std::cout << "Error: not a positive number." << std::endl;
		else {
			std::map<time_t, double>::iterator it = coinMap.lower_bound(key);
			if (it->first != key && it != coinMap.begin())
				it--;
			std::cout << line.substr(0, line.find('|')) << " => " << value << " = " << value * it->second << std::endl;
		}
	}
	catch (std::exception &e) {
		std::cout << "Error: bad input => " << line << std::endl;
	}
}

void	BitcoinExchange::checkFile(std::string file) {
	std::string		line;
	std::ifstream	input;

	input.open(file.c_str());
	if (!input.is_open())
		throw std::runtime_error("datafile");
	while (std::getline(input, line)) {
		if (line == "date,exchange_rate")
			continue ;
		if (!line.empty()) {
			coinMap[checkLine(line, ',')] = strtod(&line[11], NULL);
		}
	}
	if (coinMap.size() == 0)
		throw std::runtime_error("no input!");
	input.close();
}

static void	fill_tm_struct(std::string line, struct tm **start) {
	time_t	blub;
	time(&blub);
	*start = localtime(&blub);
	(*start)->tm_year = strtol(line.c_str(), NULL, 10) - 1900;
	(*start)->tm_mon = strtol(&line.c_str()[5], NULL, 10) - 1;
	(*start)->tm_mday = strtol(&line.c_str()[8], NULL, 10);
}

time_t	BitcoinExchange::checkLine(std::string line, char delim) {
	int			checkForMinus = 0;
	std::size_t found = line.find(delim);
	
	if (delim == '|' && (line[found - 1] != ' ' || line[found + 1] != ' ')) throw syntax;
	if (found == std::string::npos) throw syntax;
	for (std::size_t i = 0; line[i] && i < found; i++)
		if (line[i] == '-')
			checkForMinus++;
	if (checkForMinus != 2) throw syntax;
	std::string checkRest(&line[found]);
	if (checkRest.size() < 1 || checkRest.find_first_of("0123456789") == std::string::npos \
		|| checkRest.find_first_not_of(",.-| 0123456789\n") != std::string::npos) throw syntax;
	time_t		timeT;
	fill_tm_struct(line, &start);
	fill_tm_struct(line, &check);
	timeT = mktime(start);
	if (start->tm_year != check->tm_year || start->tm_mon != check->tm_mon || start->tm_mday != check->tm_mday)
		throw date;
	return (timeT);
}

/*Exception's*/
const char	*BitcoinExchange::SyntaxException::what(void) const throw() {return ("BitcoinExchange::SyntaxException");}

const char	*BitcoinExchange::FileException::what(void) const throw() {return ("BitcoinExchange::FileException");}

const char	*BitcoinExchange::DateException::what(void) const throw() {return ("BitcoinExchange::DateException");}
