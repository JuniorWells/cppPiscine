#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <string>
#include <iomanip>

Account::Account( int initial_deposit ) : _amount(initial_deposit) {
	this->_accountIndex = _nbAccounts++;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_totalAmount += initial_deposit;

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->checkAmount() << ";";
	std::cout << "created" << std::endl;
}

Account::Account( void ) {

}

Account::~Account( void ) {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->checkAmount() << ";";
	std::cout << "closed" << std::endl;
}

int		Account::getNbAccounts ( void ) {
	return _nbAccounts;
}

int		Account::getTotalAmount ( void ) {
	return _totalAmount;
}

int		Account::getNbDeposits ( void ) {
	return _totalNbDeposits;
}

int		Account::getNbWithdrawals ( void ) {
	return _totalNbWithdrawals;
}

int		Account::checkAmount( void ) const {
	return this->_amount;
}

void	Account::makeDeposit( int deposit ) {
	this->_nbDeposits++;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->checkAmount() << ";";
	std::cout << "deposit:" << deposit << ";";
	this->_amount += deposit;
	_totalAmount += deposit;
	std::cout << "amount:" << this->checkAmount() << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->checkAmount() << ";";
	if (this->_amount >= withdrawal) {
		std::cout << "withdrawal:" << withdrawal << ";";
		this->_amount -= withdrawal;
		std::cout << "amount:" << this->checkAmount() << ";";
		this->_nbWithdrawals++;
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return true;
	} else {
		std::cout << "withdrawal:refused" << std::endl;
		return false;
	}
}

void	Account::displayAccountsInfos( void ){
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::displayStatus( void ) const{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->checkAmount() << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void ) {
	time_t time = std::time(nullptr);
	tm time_struct = *std::localtime(&time);
	std::cout << std::put_time(&time_struct, "[%Y%m%d_%H%M%S] ");
}

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;