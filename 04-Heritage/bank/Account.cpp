#include <iostream>
#include "Account.hpp"

int Account::numberOfAccounts = 0; // variáveis estáticas devem ser inicializadas na implementaçao.

Account::Account(std::string accountNumber, Holder holder)
    : accountNumber(accountNumber),
      holder(holder),
      balance(0)
{
    this->numberOfAccounts++;
}

Account::~Account()
{
    numberOfAccounts--;
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

 int Account::recoverNumberOfAccounts(){

    return numberOfAccounts;
 }