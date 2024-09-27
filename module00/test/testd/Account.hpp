#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

class Account {
public:
    Account(int initial_deposit);
    ~Account();

    void makeDeposit(int deposit);
    bool makeWithdrawal(int withdrawal);
    int checkBalance() const;

private:
    int _accountIndex;
    int _amount;
    int _nbDeposits;
    int _nbWithdrawals;
    static int _nbAccounts;
    static int _totalAmount;
    static int _totalNbDeposits;
    static int _totalNbWithdrawals;
};

#endif // ACCOUNT_HPP
