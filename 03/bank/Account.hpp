#pragma once
#include <string>

class Account
{
private:
    std::string accountNumber;
    std::string cpfHolder;
    std::string nameHolder;
    float balance;

public:
    Account(std::string accountNumber, std::string cpfHolder, std::string nameHolder);
    void withdraw(float amount);
    void deposit(float amount);
    float getBalance() const;
    std::string getAccountNumber();
    std::string getCpfHolder();
    std::string getNameHolder();
};