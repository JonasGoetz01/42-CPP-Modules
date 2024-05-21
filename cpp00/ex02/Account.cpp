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
void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
	_nbDeposits++;
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount
		- deposit << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}
bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	if (withdrawal > _amount)
	{
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
		return (false);
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	_nbWithdrawals++;
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount
		+ withdrawal << ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}
