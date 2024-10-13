/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 20:26:33 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/13 23:19:37 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>

int Account :: _nbAccounts = 0;
int Account :: _totalAmount = 0;
int Account :: _totalNbDeposits = 0;
int Account :: _totalNbWithdrawals = 0;

Account :: Account( int initial_deposit )
{
    _displayTimestamp();
    _totalAmount +=initial_deposit;
    _amount = initial_deposit;
    _accountIndex =_nbAccounts++;
    std::cout<< "index:"<<_accountIndex <<";amount:"<<initial_deposit<<";created"<<std::endl;
}

Account :: ~Account( void )
{
    _displayTimestamp();
    std::cout<< "index:"<<_accountIndex;
    std::cout<<";amount:"<<_amount<<";closed"<<std::endl;
}
int Account ::getNbAccounts( void )
{
    return (_nbAccounts);
}
int Account ::getTotalAmount( void )
{
    return (_totalAmount);
}
int Account ::getNbDeposits( void )
{
    return (_totalNbDeposits);
}
int Account ::getNbWithdrawals( void )
{
    return (_totalNbWithdrawals);
}

void Account :: displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout<<"accounts:"<< _nbAccounts;
    std::cout<<";total:"<<_totalAmount;
    std::cout<<";deposits:"<< _totalNbDeposits;
    std::cout<<";withdrawals:"<< _totalNbWithdrawals<<std::endl;
}

void Account ::	displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:"<<_accountIndex;
    std::cout<<";amount:"<<this->_amount;
    std::cout<<";deposits:"<<this->_nbDeposits;
    std::cout<<";withdrawals:"<<this->_nbWithdrawals<<std::endl;
}

void Account :: makeDeposit( int deposit )
{
    _displayTimestamp();
    this->_amount +=deposit;
    _totalAmount+=deposit;
    this->_nbDeposits++;
    _totalNbDeposits += this->_nbDeposits;
    std::cout << "index:"<<_accountIndex;
    std::cout<<";p_amount:"<<this->_amount - deposit;
    std::cout<<";deposit:"<<deposit;
    std::cout<<";amount:"<<this->_amount;
    std::cout<<";nb_deposits:"<<this->_nbDeposits<<std::endl;
}

bool Account ::	makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    if(this->_amount<withdrawal)
    {
        std::cout << "index:"<<_accountIndex;
        std::cout << ";p_amount:"<<this->_amount;
        std::cout << ";withdrawal:refused"<<std::endl;
        return (false);
    }
    this->_nbWithdrawals++;
    _totalNbWithdrawals += this->_nbWithdrawals;
    this->_amount -=withdrawal;
    _totalAmount-=withdrawal;
    std::cout << "index:"<<_accountIndex;
    std::cout << ";p_amount:"<<this->_amount + withdrawal;
    std::cout << ";withdrawal:"<<withdrawal;
    std::cout << ";amount:"<<this->_amount;
    std::cout << ";nb_withdrawals:"<<this->_nbWithdrawals<<std::endl;
    return (true);
}

void Account::_displayTimestamp(void)
{
    time_t now =time(0);
    tm *ltm = localtime(&now);
    std::cout << "[" << 1900 + ltm->tm_year;
    std::cout << std::setw(2) << std::setfill('0') << 1 + ltm->tm_mon;
    std::cout << std::setw(2) << std::setfill('0') << ltm->tm_mday ;
    std::cout << "_"<< std::setw(2) << std::setfill('0') << ltm->tm_hour;
    std::cout << std::setw(2) << std::setfill('0') << ltm->tm_min;
    std::cout << std::setw(2) << std::setfill('0') << ltm->tm_sec << "] ";
}