/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 10:58:48 by rrupp             #+#    #+#             */
/*   Updated: 2023/09/07 12:23:13 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <map>

class BitcoinExchange
{
	public:
		/*Con- and Destructor's*/
		BitcoinExchange(std::string in_file = "");
		BitcoinExchange(const BitcoinExchange &src);
		~BitcoinExchange();

		/*Operator Overload's*/
		BitcoinExchange	&operator = (const BitcoinExchange &rhs);

		/*Memberfunction's*/
		void	exchange();
	private:
		std::map<std::string, int>	coinMap;
};

BitcoinExchange::BitcoinExchange(std::string in_file) {
}

BitcoinExchange::~BitcoinExchange() {
}

#endif