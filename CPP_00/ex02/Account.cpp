/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mayoub <mayoub@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:40:14 by mayoub            #+#    #+#             */
/*   Updated: 2023/02/14 15:16:10 by mayoub           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

/*------------- CONSTRUCTOR ---------------*/
Account::Account( int initial_deposit ) {

	this->_accountIndex = getNbAccounts();
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	_displayTimestamp();

	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;

	Account::_nbAccounts++;

	this->_totalAmount += this->_amount;

	return ;
}
/*-----------------------------------------*/

/*-------------- DESTRUCTOR ---------------*/
Account::~Account( void ) {

	_displayTimestamp();

	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;

	return ;
}
/*-----------------------------------------*/


/*---------------- GETERS -----------------*/
int	Account::getNbAccounts( void ) {
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void ) {
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void ) {
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ) {
	return (Account::_totalNbWithdrawals);
}

int		Account::checkAmount( void ) const {
	return (this->_amount);
}
/*-----------------------------------------*/

/*--------------- TIMESTAMP ---------------*/
void	Account::_displayTimestamp( void ) {

	time_t		rawtime;
	struct tm	*timeinfo;
	char		buffer[16];

	time(&rawtime);
	timeinfo = localtime(&rawtime);

	strftime(buffer, 80, "[%Y%m%d_%I%M%S] ", timeinfo);
	std::cout << buffer;
}
/*-----------------------------------------*/

void	Account::displayAccountsInfos( void ) {

	_displayTimestamp();

	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;

	return ;
}

void	Account::displayStatus( void ) const {

	_displayTimestamp();

	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << this->checkAmount() << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;

	return ;
}

void	Account::makeDeposit( int deposit ) {

	_displayTimestamp();

	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << this->checkAmount() << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << this->checkAmount() + deposit << ";";
	std::cout << "nb_deposits:" << _nbDeposits + 1 << std::endl;

	this->_nbDeposits++;
	this->_amount += deposit;

	this->_totalNbDeposits += _nbDeposits;


	this->_totalAmount += deposit;

	return ;
}

bool	Account::makeWithdrawal( int withdrawal ) {

	_displayTimestamp();

	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->checkAmount() << ";";
	if (this->_amount - withdrawal < 0)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	std::cout << "withdrawal:" << withdrawal << ";";
	std::cout << "amount:" << this->checkAmount() - withdrawal << ";";
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals + 1 << std::endl;

	this->_nbWithdrawals++;
	this->_amount -= withdrawal;

	this->_totalNbWithdrawals += _nbWithdrawals;


	this->_totalAmount -= withdrawal;

	return (true);
}
