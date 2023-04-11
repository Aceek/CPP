/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilinhard <ilinhard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 11:27:48 by ilinhard          #+#    #+#             */
/*   Updated: 2023/04/09 17:24:01 by ilinhard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Account.hpp"
#include <iostream>
#include <sstream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _accountIndex(_nbAccounts),
	_amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
		<< ";created" << std::endl;
	_nbAccounts++;
	_totalAmount += _amount;
}

Account::~Account(void) {
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount
		<< ";closed" << std::endl;
}

int Account::getNbAccounts(void) {
	return (_nbAccounts);
}

int	Account::getTotalAmount(void) {
	return (_totalAmount);
}

int	Account::getNbDeposits(void) {
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void) {
	return (_totalNbWithdrawals);
}

void	Account::_displayTimestamp() {
    std::time_t now = std::time(NULL);
    std::tm *tm = std::localtime(&now);
    std::stringstream ss;
    ss << "[" << std::setw(4) << std::setfill('0') << tm->tm_year + 1900
       << std::setw(2) << std::setfill('0') << tm->tm_mon + 1
       << std::setw(2) << std::setfill('0') << tm->tm_mday << "_"
       << std::setw(2) << std::setfill('0') << tm->tm_hour
       << std::setw(2) << std::setfill('0') << tm->tm_min
       << std::setw(2) << std::setfill('0') << tm->tm_sec
       << "] ";
	std::cout << ss.str() << " ";
}

void	Account::displayAccountsInfos(void) {
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";total:"
		<< Account::getTotalAmount() << ";deposits:" << Account::getNbDeposits()
		<< ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void	Account::displayStatus(void) const {
	Account::_displayTimestamp();
	std::string test;
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
		<< ";deposits:" << this->_nbDeposits << ";withdrawals:"
		<< this->_nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:"
		<< _amount << ";deposit:" << deposit << ";amount:"
		<< _amount + deposit << ";nb_deposits:"
		<< _nbDeposits + 1 << std::endl;
	this->_amount += deposit;
	this->_totalAmount += deposit;
	this->_nbDeposits++;
	this->_totalNbDeposits++;
}

int	Account::checkAmount(void) const {
	return (this->_amount);
}

bool	Account::makeWithdrawal(int withdrawal) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:"
		<< this->_amount << ";withdrawal:";
	if (this->_amount >= withdrawal) {
		std::cout << withdrawal << ";amount:" << _amount - withdrawal
			<< ";nb_withdrawals:" << _nbWithdrawals + 1 << std::endl;
		this->_amount -= withdrawal;
		this->_totalNbWithdrawals++;
		this->_nbWithdrawals++;
		this->_totalAmount -= withdrawal;
		return (true);
	} else {
		std::cout << "refused" << std::endl;
		return (false);
	}
}
