/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:04:17 by ataoufik          #+#    #+#             */
/*   Updated: 2024/09/29 16:09:20 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
Account :: Account(int initial_deposit)
{
    _totalAmount +=initial_deposit;
    _displayTimestamp();//
    cout << "index:"<<_nbAccounts<<";amount:"<<initial_deposit<<";created"<<endl;
    _nbAccounts++;
}
Account :: ~Account(void)
{
    _nbAccounts--;
    //time
    cout << "index:"<<_nbAccounts << ";amount:"<<_amount << ";closed"<<endl;
    _totalAmount -= _amount;
}
int Account :: getNbAccounts(void)
{
    return (_nbAccounts);
}
int Account :: getTotalAmount(void)
{
    return (_totalAmount);
}

int Account :: getNbDeposits(void)
{
    return (_totalNbDeposits);
}

int Account ::getNbWithdrawals(void)
{
    return (_totalNbWithdrawals);
}

void Account :: displayAccountsInfos(void)
{
    _displayTimestamp();
    cout << "accounts:"<<_nbAccounts;
    cout << ";total:"<<_totalAmount;
    cout <<";deposits:"<<_totalNbDeposits;
    cout <<";withdrawals:"<<_totalNbWithdrawals<<endl;
}

int Account :: checkAmount(void) const
{
    return (_amount);
}

void Account :: makeDeposit(int deposit)
{
    _amount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    _totalAmount += deposit;
    _displayTimestamp();
    cout << "index:"<<_accountIndex << "p_amount:"<< deposit << "deposit:"<<deposit <<";amount:"<< _amount << ";nb_deposits"<<_nbDeposits<<endl;
}
bool Account :: makeWithdrawal(int withdrawal)
{
    cout << "index:"<<_accountIndex << "p_amount:"<< _amount;
    if (_amount < withdrawal)
    {
        cout << ";withdrawal:refused"<<endl;
        return false;
    }
    cout << ";withdrawal:"<< withdrawal << ";amount:"<< _amount <<";nb_withdrawals:"<<_nbWithdrawals<<endl;
    _amount -= withdrawal;
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    _totalAmount -= withdrawal;
    return true;
}
void Account :: displayStatus(void) const
{
    cout << "index:"<<_accountIndex << ";amount:"<<_amount<< ";deposits:"<< _nbDeposits<<";withdrawals:"<< _nbWithdrawals<<endl;
}

void Account::_displayTimestamp(void)
{
    time_t now =time(0);
    tm *ltm = localtime(&now);
    cout << "[" << 1900 + ltm->tm_year<< setw(2) << setfill('0') << 1 + ltm->tm_mon<< setw(2) << setfill('0') << ltm->tm_mday << "_"<< setw(2) << setfill('0') << ltm->tm_hour<< setw(2) << setfill('0') << ltm->tm_min<< setw(2) << setfill('0') << ltm->tm_sec << "] ";
}