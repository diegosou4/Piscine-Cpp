#include "Account.hpp"
#include <iostream>


Account::~Account(void)
{

}
Account::Account(int initial_deposit)
{
    _amount = initial_deposit;
    _accountIndex = _nbAccounts;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _totalAmount += initial_deposit;
    _nbAccounts++;
}

void Account::makeDeposit(int deposit)
{
    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
}
bool Account::makeWithdrawal(int withdrawal)
{
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    if(_amount >= withdrawal)
    {
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        std::cout << "withdrawal:" << withdrawal << ";";
        std::cout << "nb_withdrawals" << _totalNbWithdrawals << std::endl;
        return(true);
    }
    std::cout << "withdrawal:refused" << ";";
    return(false);
}

void Account::displayStatus(void) const{
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals << ";";
}

void Account::displayAccountsInfos(void) 
{
    std::cout << "accounts:" << getNbAccounts() << ";";
    std::cout << "total:" << getTotalAmount() << ";";
    std::cout << "deposit:" << getNbDeposits() << ";";
    std::cout << "withdrawals" << getNbWithdrawals() << std::endl;
};

// Getters


int Account::getNbAccounts(void)
{
    return(_nbAccounts);    
};

int Account::getTotalAmount(void)
{
    return(_totalAmount);
}

int Account::getNbDeposits(void)
{
    return(_totalNbDeposits);
}
int Account::getNbWithdrawals(void)
{
    return(_totalNbWithdrawals);
}


// // Esse const depois do void significa que eu nao
// vou fazer nenhuma alteracao nas variaveis da classe