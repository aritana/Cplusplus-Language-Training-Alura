#include <iostream>
#include <string>
#include "Account.hpp"

using namespace std;

void displayBalance(const Account &account)
{
    cout << "Account1: " << account.getBalance() << endl;
}

int main()
{
    Account account1("0001", "000.000.000-00", "Aritana Santos");

    account1.setAccountNumber("0001");
    account1.setCpfHolder("000.000.000-00");
    account1.setNameHolder("Aritana Santos");

    cout << "Account1-number: " << account1.getAccountNumber() << endl;
    cout << "Account1-name: " << account1.getNameHolder() << endl;
    cout << "Account1-cpf: " << account1.getCpfHolder() << endl;

    account1.deposit(500);
    cout << "Account1-balance: " << account1.getBalance() << endl;

    account1.withdraw(400);
    // cout << "Account1-balance: " << account1.getBalance() << endl;

    cout << "Display balance:" << endl;
    displayBalance(account1);

    return 0;
}