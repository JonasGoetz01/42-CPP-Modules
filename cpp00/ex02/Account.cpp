#include "Account.hpp"
#include <iostream>

Account::Account(void)
{
	_displayTimestamp();
	_accountIndex = _nbAccounts++;
	_totalAmount += _amount;
	_totalNbDeposits++;
	_nbDeposits++;
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::Account(int initial_deposit) : _amount(initial_deposit)
{
	_displayTimestamp();
	_accountIndex = _nbAccounts++;
	_totalAmount += _amount;
	_totalNbDeposits++;
	_nbDeposits++;
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	_totalAmount -= _amount;
	_totalNbWithdrawals++;
	_nbAccounts--;
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}
