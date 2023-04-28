#pragma once
#include <string>
#include "Holder.hpp"

class Account
{

private:
    static int numberOfAccounts;

public:
    static int recoverNumberOfAccounts();
    Holder holder;

private:
    std::string accountNumber;
    float balance;

public:
    Account() = delete;
    Account(std::string accountNumber, Holder holder);
    ~Account(); // destrutor
    void withdraw(float amount);
    void deposit(float amount);
    float getBalance() const;
    std::string getAccountNumber();
};