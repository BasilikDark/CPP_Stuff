/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.Account.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrupp <rrupp@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:32:28 by rrupp             #+#    #+#             */
/*   Updated: 2023/06/01 17:57:22 by rrupp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	this->_accountIndex = _nbAccounts++;
	_totalAmount += this->_amount;
	std::cout << "[" << "] " << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account(void)
{
	std::cout << "[" << "] " << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}
int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	std::cout << "[" << "] " << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << _totalNbDeposits << ";withdrawls:" << _totalNbWithdrawals << std::endl;
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
