#include <iostream>
#include <string>
#include "Account.hpp"
#include "Holder.hpp"

using namespace std;

void displayBalance(const Account &account)
{
    Holder holder("000.000.000-00", "Aritana Santos");
    Account unnecessary("0001", holder);
    cout << "Accounts:" << Account::recoverNumberOfAccounts() << endl;
    cout << "Account: " << account.getBalance() << endl;
}

int main()
{
    Holder holder("000.000.000-00", "Aritana Santos");
    Account account1("0001", holder);

    cout << "Account1-number: " << account1.getAccountNumber() << endl;

    account1.deposit(500);
    cout << "Account1-balance: " << account1.getBalance() << endl;

    account1.withdraw(400);
    // cout << "Account1-balance: " << account1.getBalance() << endl;

    cout << "Accounts:" << Account::recoverNumberOfAccounts() << endl;

    cout << "Display balance:" << endl;
    displayBalance(account1);

    cout << "Accounts:" << Account::recoverNumberOfAccounts() << endl;

    Account account2("0001", holder);

    cout << "Accounts:" << Account::recoverNumberOfAccounts() << endl;

    cout << "CPF: " << account1.holder.getcpf() << endl;

    return 0;
}