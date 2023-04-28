#include <iostream>
#include "Account.hpp"

Account::Account(std::string accountNumber, std::string cpfHolder, std::string nameHolder)
{
    this->accountNumber = accountNumber;
    this->cpfHolder = cpfHolder;
    this->nameHolder = nameHolder;
    this->balance = 0;
}

void Account::withdraw(float amount)
{
    if (amount < 0)
    {
        std::cout << "Negative values are not allowed" << std::endl;
        return;
    }

    if (amount > balance)
    {
        std::cout << "Insufficient funds" << std::endl;
        return;
    }
    balance -= amount;
}

void Account::deposit(float amount)
{
    if (amount < 0)
    {
        std::cout << "Negative values are not allowed" << std::endl;
        return;
    }
    balance += amount;
}

float Account::getBalance() const
{
    return balance;
}

std::string Account::getAccountNumber()
{
    return accountNumber;
}
std::string Account::getCpfHolder()
{
    return cpfHolder;
}
std::string Account::getNameHolder()
{
    return nameHolder;
}