#include "Account.hpp"
#include <iostream>

int main() {
    Account acc1(1000);
    acc1.makeDeposit(500);
    if (acc1.makeWithdrawal(200)) {
        std::cout << "Withdrawal successful." << std::endl;
    }
    std::cout << "Balance: " << acc1.checkBalance() << std::endl;
    return 0;
}
