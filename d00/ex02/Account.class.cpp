/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydeineha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 14:06:57 by ydeineha          #+#    #+#             */
/*   Updated: 2018/10/02 14:06:59 by ydeineha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <iostream>

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _accountIndex(_nbAccounts),
_amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	Account::_nbAccounts += 1;
	Account::_totalAmount += this->_amount;
	//Account::_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex << ';'
				<< "amount:" << this->_amount << ';'
				<< "created" << std::endl;
}

Account::~Account(void)
{
	std::cout	<< "index:" << this->_accountIndex << ';'
				<< "amount:" << this->_amount << ';'
				<< "closed" << std::endl;
}

void	Account::makeDeposit( int deposit)
{
	//Account::_displayTimestamp();
	if (deposit > 0)
	{
		this->_nbDeposits += 1;
		Account::_totalNbDeposits += 1;
		Account::_totalAmount += deposit;
	}
	std::cout	<< "index:" << this->_accountIndex << ';'
				<< "p_amount:" << this->_amount << ';'
				<< "deposit:" << deposit << ';'
				<< "amount:" << this->_amount + deposit << ';'
				<< "nb_deposits:" << this->_nbDeposits << std::endl;
	this->_amount += deposit;
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

bool	Account::makeWithdrawal( int withdrawal )
{
	//Account::_displayTimestamp();
	if (checkAmount() < withdrawal)
	{
		std::cout	<< "index:" << this->_accountIndex << ';'
					<< "p_amount:" << this->_amount << ';'
					<< "withdrawal:refused" << std::endl;
		return (0);
	}
	this->_nbWithdrawals += 1;
	Account::_totalNbWithdrawals += 1;
	Account::_totalAmount -= withdrawal;
	std::cout	<< "index:" << this->_accountIndex << ';'
				<< "p_amount:" << this->_amount << ';'
				<< "withdrawal:" << withdrawal << ';'
				<< "amount:" << this->_amount - withdrawal << ';'
				<< "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (1);
}

void	Account::displayStatus( void ) const
{
	//Account::_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex << ';'
				<< "amount:" << this->_amount << ';'
				<< "deposits:" << this->_nbDeposits << ';'
				<< "withdrawals:" << this->_nbWithdrawals << std::endl;
}


void	Account::displayAccountsInfos( void )
{
	//Account::_displayTimestamp();
	std::cout	<< "accounts:" << Account::_nbAccounts << ';'
				<< "total:" << Account::_totalAmount << ';'
				<< "deposits:" << Account::_totalNbDeposits << ';'
				<< "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}