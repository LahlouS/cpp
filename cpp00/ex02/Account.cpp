#include "Account.hpp"
#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>

int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

Account::Account( int initial_deposit ) : _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0){
	this->_accountIndex = this->_nbAccounts;
	Account::_nbAccounts += 1;
	Account::_totalAmount += initial_deposit;
	/*account creating display*/
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << "amount:" << this->_amount << ";" << "created\n";

}

Account::~Account(){
	this->_nbAccounts -= 1;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << "amount:" << this->_amount << ";" << "closed\n";
}

int	Account::getNbAccounts( void ){
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void ){
	return(Account::_totalAmount);
}

int	Account::getNbDeposits( void ){
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ){
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ){
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals();
	std::cout << std::endl;
}

void Account::_displayTimestamp(){

	time_t	raw;
	struct	tm *cooked_time;

	raw = time(NULL);
	cooked_time = localtime(&raw);
	std::cout << "[" << (cooked_time->tm_year + 1900) << "0" << (cooked_time->tm_mon + 1) << cooked_time->tm_mday\
	<< "_" << cooked_time->tm_hour << cooked_time->tm_min << cooked_time->tm_sec << "] ";
}

void	Account::makeDeposit(int deposit){
	/* shared data (static int)*/
	this->_totalNbDeposits += 1;
	this->_totalAmount += deposit;
	/*personnals attributes*/
	this->_amount += deposit;
	this->_nbDeposits += 1;
	/*Display deposit*/
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << (this->_amount - deposit) << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits;
	std::cout << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ){
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << (this->_amount) << ";";
	if (_amount >= withdrawal)
	{
		/* shared data (static int)*/
		this->_totalNbWithdrawals += 1;
		this->_totalAmount -= withdrawal;
		/*personnals attributes*/
		this->_amount -= withdrawal;
		this->_nbWithdrawals += 1;
		std::cout << "withdrawal:" << withdrawal << ";";
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals;
	}
	else
		std::cout << "withdrawal:refused";
	std::cout << std::endl;
	return (_amount > 0);
}

int		Account::checkAmount( void ) const{
	return (this->_amount);
}

void	Account::displayStatus( void ) const{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << checkAmount() << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals;
	std::cout << std::endl;
}

