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
int Account::checkAmount(void) const
{
	return (_amount);
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}
void Account::_displayTimestamp(void)
{
	time_t		t;
	struct tm	*tm;

	t = time(0);
	tm = localtime(&t);
	std::cout << "[" << tm->tm_year + 1900 << tm->tm_mon
		+ 1 << tm->tm_mday << "_" << tm->tm_hour << tm->tm_min << tm->tm_sec << "] ";
}
