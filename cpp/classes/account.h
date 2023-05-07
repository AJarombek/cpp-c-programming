// Declaration of the Account class
// Author: Andrew Jarombek
// Date: 5/5/2023

#ifndef CPP_C_PROGRAMMING_EVENT_H
#define CPP_C_PROGRAMMING_EVENT_H

class Account {
private:
    double balance;
    int interestRate;
public:
    Account() = default;
    Account(double balance, int interestRate);

    void deposit(double amount);
    void withdraw(double amount);
    void transfer(Account& account, double amount);
    void accrueInterest();
    [[nodiscard]] double getBalance() const;
    [[nodiscard]] int getInterestRate() const;
};

#endif //CPP_C_PROGRAMMING_EVENT_H
