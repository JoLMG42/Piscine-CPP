/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtaravel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:08:02 by jtaravel          #+#    #+#             */
/*   Updated: 2022/08/04 17:09:20 by jtaravel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Account.hpp"
#include <string>
#include <iomanip>
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit):_accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_nbAccounts++;
	_totalAmount += _amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created";
	std::cout << std::endl;
	_accountIndex++;
	return ; 
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex - 1 << ";amount:" << _amount << ";closed";
	std::cout << std::endl;
	return ;
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

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

int	Account::checkAmount(void) const
{
	return (_amount);
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals;
	std::cout << std::endl;
}

void	Account::_displayTimestamp(void)
{

	time_t	times = time(NULL);
	struct	tm *date = localtime(&times);

	std::cout << "[" << date->tm_year + 1900 << std::setfill('0') << std::setw(2) << date->tm_mday << std::setfill('0') << std::setw(2) << date->tm_mon + 1 << "_" << date->tm_hour << date->tm_min << date->tm_sec << "] ";
}

void	Account::makeDeposit(int deposit)
{
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex - 1 << ";p_amount:" << _amount << ";deposit:" << deposit << ";amount:" << _amount + deposit << ";nb_deposits:" << _nbDeposits;
	std::cout << std::endl;
	_amount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	if (_amount - withdrawal <= 0)
		std::cout << "index:" << _accountIndex - 1 << ";p_amount:" << _amount << ";withdrawal:refused";
	else
	{
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
		std::cout << "index:" << _accountIndex - 1<< ";p_amount:" << _amount << ";withdrawal:" << withdrawal << ";amount:" << _amount - withdrawal << ";nb_withdrawals:" << _nbWithdrawals;
	_amount -= withdrawal;
	}
	std::cout << std::endl;
	return (1);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex - 1<< ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals;
	std::cout << std::endl;
}
